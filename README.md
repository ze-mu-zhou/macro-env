# 📦 macro-env

> 一键检测全球所有预定义宏，自动生成人类可读头文件与 JSON 数据库。  
> 支持 **OS / Compiler / Arch / Build / ABI / Feature** 六类信息，跨平台开发从此告别 `#ifdef` 地狱！

---

## ✨ 特性一览

| 维度 | 覆盖范围（部分） |
|---|---|
| **OS** | Windows／Linux／macOS／BSD／RTEMS／VxWorks／QNX／Fuchsia／WASI／ESP-IDF／Arduino … |
| **Compiler** | GCC／Clang／MSVC／ICC／IAR／ARMCC／TI／NVCC／MinGW／Borland … |
| **Arch** | x86／ARM／RISC-V／MIPS／PowerPC／SPARC／Itanium／s390x／LoongArch／Xtensa／AVR … |
| **Build** | Debug／Release／Coverage／ASAN／TSAN／MSAN／UBSAN／HWASAN／Optimize … |
| **ABI** | MSVC_ABI／SYSV／AAPCS／MINGW_ABI … |
| **Feature** | MMX~AVX512／NEON／CRC／Crypto／BMI／LZCNT／POPCNT／SHA … |

> 共 **200+** 检测宏，**六选一** 当前值 + **位图** 特性集，**一键生成**，**零依赖**。

---

## 🚀 30 秒上手

```bash
# 1. 克隆
git clone https://github.com/ze-mu-zhou/macro-env.git
cd macro-env

# 2. 生成头文件 & JSON
python uniq_env.py

# 3. 直接使用
clang -std=c17 demo.c uniq_env.h -o demo && ./demo
```
```C
// demo.c
#include <stdio.h>
#include <stdlib.h>

#include "uniq_env.h"
#if CUR_SYSTEM == ENV_WIN64 || CUR_SYSTEM == ENV_WIN32
    #include <windows.h>
    #include <locale.h>
#endif
void initialize_environment();
void print_environment_info();
const char* get_user_config_path();
void perform_optimized_calculation();
void special_debug_feature();


int main() {
    initialize_environment();
    // 示例一：打印所有检测到的环境信息
    print_environment_info();

    // 示例二：根据操作系统选择不同的代码路径
    const char* config_path = get_user_config_path();
    printf("示例二：根据操作系统判断，配置文件路径为: %s\n\n", config_path);

    // 示例三：根据CPU特性，执行不同级别的优化代码
    perform_optimized_calculation();

    // 示例四：复杂的复合条件判断
    special_debug_feature();

    return 0;
}

void initialize_environment() {
#if CUR_SYSTEM == ENV_WIN64 || CUR_SYSTEM == ENV_WIN32
    // 设置控制台输出代码页为 UTF-8 (65001)
    SetConsoleOutputCP(CP_UTF8);
    // 设置 C 语言标准库的区域设置为 UTF-8
    setlocale(LC_ALL, ".UTF8");
#endif
}
/**
 * @brief 用法示例一：打印当前环境信息
 *
 * 这是最基础的用法，用于调试、日志记录或在程序启动时显示环境信息。
 * 它使用了便捷的 CUR_..._STRING 宏。
 */

void print_environment_info() {
    printf("--- 用法示例一：打印环境信息 ---\n");
    printf("系统 (System):   %s\n", CUR_SYSTEM_STRING);
    printf("编译器 (Compiler): %s\n", CUR_COMPILER_STRING);
    printf("架构 (Arch):     %s\n", CUR_ARCH_STRING);
    printf("构建类型 (Build):  %s\n", CUR_BUILD_STRING);
    printf("ABI:             %s\n", CUR_ABI_STRING);
    printf("特性位图 (Features): 0x%X\n\n", CUR_FEATURE);
}


/**
 * @brief 用法示例二：根据操作系统进行条件编译
 *
 * 这是最核心的用法。它将混乱的底层宏（_WIN32, __linux__...）
 * 抽象成了干净、统一的 CUR_SYSTEM，让代码可读性和可维护性大大提高。
 */
const char* get_user_config_path() {
    // 使用 #if CUR_SYSTEM == ... 的方式进行判断。
    // ENV_WIN64, ENV_LINUX 等都是安全的、不会被二次展开的唯一标识符。
#if CUR_SYSTEM == ENV_WIN64 || CUR_SYSTEM == ENV_WIN32
    // 在 Windows 上，通常使用 AppData 目录
    // getenv("APPDATA") 在 Windows 上有效
    return getenv("APPDATA");
#elif CUR_SYSTEM == ENV_LINUX || CUR_SYSTEM == ENV_MACOS || CUR_SYSTEM == ENV_FREEBSD
    // 在类 Unix 系统上，通常使用用户主目录下的隐藏文件夹
    // getenv("HOME") 在这些系统上有效
    static char path[256];
    snprintf(path, sizeof(path), "%s/.config", getenv("HOME"));
    return path;
#else
    // 其他未知系统，返回当前目录
    return ".";
#endif
}


/**
 * @brief 用法示例三：根据CPU特性执行高性能代码
 *
 * 使用 CUR_FEATURE 位图，我们可以为支持高级指令集的 CPU 编写专门的优化代码，
 * 同时为旧 CPU 提供一个标准的回退实现。
 */
void perform_optimized_calculation() {
    printf("--- 用法示例三：根据CPU特性进行优化 ---\n");
#if (CUR_FEATURE & FEATURE_AVX2)
    printf("检测到 AVX2 指令集，将执行最高性能的计算路径！\n\n");
    // 在这里可以使用 AVX2 的 intrinsics 函数进行向量化计算
    // 例如： __m256d result = _mm256_add_pd(vec1, vec2);
#elif (CUR_FEATURE & FEATURE_SSE2)
    printf("检测到 SSE2 指令集，将执行 SSE 优化的计算路径。\n\n");
    // 在这里可以使用 SSE2 的 intrinsics 函数
#elif (CUR_FEATURE & FEATURE_NEON)
    printf("检测到 ARM NEON 指令集，将执行 NEON 优化的计算路径。\n\n");
    // 在这里可以使用 NEON 的 intrinsics 函数
#else
    printf("未检测到高级指令集，将执行标准的 C 语言通用计算路径。\n\n");
    // 在这里是普通的循环计算
#endif
}


/**
 * @brief 用法示例四：复杂的复合条件判断
 *
 * 现实世界中，我们常常需要组合多个条件。
 * 比如，某个调试功能只在特定的编译器、特定的架构和Debug模式下开启。
 */
void special_debug_feature() {
    printf("--- 用法示例四：复杂的复合条件判断 ---\n");

#if CUR_COMPILER == ENV_GCC && CUR_ARCH == ENV_X64 && CUR_BUILD == ENV_DEBUG
    printf("条件满足 (GCC on X64, Debug build)，特殊调试功能已开启！\n\n");
    // 在这里放置只有在特定条件下才编译的代码
#else
    printf("条件不满足，特殊调试功能被禁用。\n\n");
#endif
}
```

## 📁 仓库结构
```
macro-env/
├─ detect.json          # 外挂知识库（可 PR 补充）
├─ uniq_env.py          # 生成器（零硬编码）
├─ uniq_env.h           # 产物①：C/C++ 头文件
├─ uniq_env.json        # 产物②：运行时反序列化
├─ .github/workflows/   # CI：自动更新头文件
└─ README.md            # 本文件
```

## 🔧 高级用法

### 1.添加新平台
编辑 `detect.json` 任意段落，**加一行即可**：
```json
"__MyOS__": "MYOS"
```
推送后 GitHub Actions 自动生成新版头文件。

### 2.CI集成
在自己的仓库里引用本头文件：
```yaml
- name: 下载 macro-env
  run: |
    git clone --depth 1 https://github.com/ze-mu-zhou/macro-env.git third_party/macro-env
    echo "INCLUDE=-Ithird_party/macro-env" >> $GITHUB_ENV
```

## 🌱 贡献指南
1. Fork → 修改 detect.json
2. 本地验证：python uniq_env.py
3. 提交 PR，CI 自动检查生成结果。
欢迎补充：新 OS、新编译器、新架构、新指令集！
