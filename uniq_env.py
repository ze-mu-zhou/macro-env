"""
输出：uniq_env.h  +  uniq_env.json (最终版：完全自动化)
"""
import json
import pathlib
import datetime
import textwrap

SCRIPT_DIR = pathlib.Path(__file__).parent
DETECT_JSON = SCRIPT_DIR / "detect.json"
H_OUT       = SCRIPT_DIR / "uniq_env.h"
JSON_OUT    = SCRIPT_DIR / "uniq_env.json"

def load_detect():
    with DETECT_JSON.open(encoding="utf-8") as f:
        return json.load(f)

def pick(dic, undef_name):
    lines = []
    for macro, value in dic.items():
        lines.append(f"#if !defined(CUR_{undef_name}_LOCK)")
        lines.append(f"# ifdef {macro}")
        lines.append(f"#  define CUR_{undef_name} ENV_{value}")
        lines.append(f"#  define CUR_{undef_name}_LOCK 1")
        lines.append(f"# endif")
        lines.append(f"#endif")
    lines.append(f"#if !defined(CUR_{undef_name}_LOCK)")
    lines.append(f"# define CUR_{undef_name} ENV_UNKNOWN")
    lines.append(f"#endif")
    return "\n".join(lines)

def gen_h(detect):
    header = textwrap.dedent(f"""\
        #pragma once
        /*
         * ==========================================================================
         *  uniq_env.h -- 自动生成的编译时环境检测头文件 (纯 C)
         *
         *  此文件由 Python 脚本根据 detect.json 规则自动生成。
         *  生成时间: {datetime.datetime.now():%Y-%m-%d %H:%M:%S}
         *
         *  用法:
         *  // 编译时检查: #if CUR_SYSTEM == ENV_WIN64
         *  // 获取字符串: const char* s = CUR_SYSTEM_STRING;
         *  // 检查特性:   #if (CUR_FEATURE & FEATURE_SSE2)
         * ==========================================================================
         */
    """)
    body = "\n/* --- 1. 环境类别检测 (值为带前缀的唯一标识符) --- */\n"
    body += pick(detect["OS"],       "SYSTEM")
    body += "\n" + pick(detect["Compiler"], "COMPILER")
    body += "\n" + pick(detect["Arch"],     "ARCH")
    body += "\n" + pick(detect["Build"],    "BUILD")
    body += "\n" + pick(detect["ABI"],      "ABI")

    # --- (关键修改) 完整的特性宏定义与位图生成 ---
    body += "\n\n/* --- 2. 特性宏定义与位图 (Feature Macros & Bitmap) --- */\n"
    features = detect.get("Feature", {})

    # 2a. 自动生成 FEATURE_XXX 宏
    feature_defines = []
    for macro, bit_pos in features.items():
        # 将 __SSE2__ 转换为 FEATURE_SSE2, __ARM_NEON 转换为 FEATURE_ARMNEON
        feature_name = "FEATURE_" + macro.strip('_').replace('_', '').upper()
        feature_defines.append(f"#define {feature_name} (1u << {bit_pos})")
    body += "\n".join(feature_defines) + "\n\n"

    # 2b. 生成 CUR_FEATURE 位图
    temp_feature_macros = "\n".join(
        f"#ifdef {macro}\n# define _CUR_FEATURE_{bit_pos} (1u<<{bit_pos})\n#else\n# define _CUR_FEATURE_{bit_pos} (0u)\n#endif"
        for macro, bit_pos in features.items()
    )
    body += "/* --- 特性位图计算 (Bitmap Calculation) --- */\n"
    body += temp_feature_macros + "\n\n"
    or_chain = " | ".join(f"_CUR_FEATURE_{bit_pos}" for bit_pos in features.values())
    body += f"#define CUR_FEATURE (0u | {or_chain})\n"

    body += "\n/* --- 3. 所有可检测项的字符串形式 --- */\n"
    briefs = "#define CUR_BRIEF__ENV_UNKNOWN \"UNKNOWN\"\n"
    briefs += "\n".join(
        f'#define CUR_BRIEF__ENV_{value} "{value}"'
        for section, rules in detect.items() for value in rules.values()
    )
    body += briefs

    conversion_logic = textwrap.dedent("""

        /* --- 4. 动态宏名转换为字符串 --- */
        #define UNIQ_ENV_CONCAT_IMPL(prefix, value) prefix##value
        #define UNIQ_ENV_CONCAT(prefix, value) UNIQ_ENV_CONCAT_IMPL(prefix, value)

        #define CUR_SYSTEM_STRING   UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_SYSTEM)
        #define CUR_COMPILER_STRING UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_COMPILER)
        #define CUR_ARCH_STRING     UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_ARCH)
        #define CUR_BUILD_STRING    UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_BUILD)
        #define CUR_ABI_STRING      UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_ABI)
    """)
    body += conversion_logic

    return header + body

def main():
    print(f"▶️  正在从 {DETECT_JSON.name} 加载规则...")
    detect_rules = load_detect()
    
    print(f"▶️  正在生成 {H_OUT.name}...")
    h_content = gen_h(detect_rules)
    H_OUT.write_text(h_content, encoding="utf-8")
    
    print(f"▶️  正在生成 {JSON_OUT.name}...")
    log_data = {
        "meta": { "source_rules": str(DETECT_JSON), "generated_at": datetime.datetime.now().isoformat() },
        "rules_used": detect_rules
    }
    JSON_OUT.write_text(json.dumps(log_data, indent=2, ensure_ascii=False), encoding="utf-8")
    
    print(f"✅  成功！ {H_OUT.name} 和 {JSON_OUT.name} 已生成。")

if __name__ == "__main__":
    main()