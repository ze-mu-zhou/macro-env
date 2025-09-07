"""
输出：uniq_env.h  +  uniq_env.json
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
        lines.append(f"#  define CUR_{undef_name} {value}")
        lines.append(f"#  define CUR_{undef_name}_LOCK 1")
        lines.append(f"# endif")
        lines.append(f"#endif")
    lines.append(f"#if !defined(CUR_{undef_name}_LOCK)")
    lines.append(f"# define CUR_{undef_name} UNKNOWN")
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
         *  #include "uniq_env.h"
         *
         *  // CUR_SYSTEM, CUR_COMPILER, CUR_ARCH, CUR_BUILD, CUR_ABI 将被定义。
         *  // CUR_FEATURE 是一个包含所有已启用特性的位掩码。
         * ==========================================================================
         */
    """)
    body = "\n/* --- 1. 环境类别检测 (Environment Category Detection) --- */\n"
    body += pick(detect["OS"],       "SYSTEM")
    body += "\n" + pick(detect["Compiler"], "COMPILER")
    body += "\n" + pick(detect["Arch"],     "ARCH")
    body += "\n" + pick(detect["Build"],    "BUILD")
    body += "\n" + pick(detect["ABI"],      "ABI")
    body += "\n\n/* --- 2. 特性位图 (Feature Bitmap) --- */\n"
    features = detect["Feature"]
    temp_feature_macros = "\n".join(
        f"#ifdef {macro}\n# define _CUR_FEATURE_{bit_pos} (1u<<{bit_pos})\n#else\n# define _CUR_FEATURE_{bit_pos} (0u)\n#endif"
        for macro, bit_pos in features.items()
    )
    body += temp_feature_macros + "\n\n"
    or_chain = " | ".join(f"_CUR_FEATURE_{bit_pos}" for bit_pos in features.values())
    body += f"#define CUR_FEATURE (0u | {or_chain})\n"
    body += "\n/* --- 3. 辅助宏：所有可检测项的字符串形式 --- */\n"
    briefs = "\n".join(
        f'#define CUR_BRIEF_{key} "{value}"'
        for section, rules in detect.items() for key, value in rules.items()
    )
    body += briefs

    return header + body

def main():
    print(f"▶️  正在从 {DETECT_JSON.name} 加载规则...")
    detect_rules = load_detect()
    
    print(f"▶️  正在生成 {H_OUT.name}...")
    h_content = gen_h(detect_rules)
    H_OUT.write_text(h_content, encoding="utf-8")
    print(f"▶️  正在生成 {JSON_OUT.name}...")
    log_data = {
        "meta": {
            "source_rules": str(DETECT_JSON),
            "generated_at": datetime.datetime.now().isoformat()
        },
        "rules_used": detect_rules
    }
    JSON_OUT.write_text(json.dumps(log_data, indent=2, ensure_ascii=False), encoding="utf-8")
    
    print(f"✅  成功！ {H_OUT.name} 和 {JSON_OUT.name} 已生成。")

if __name__ == "__main__":
    main()
