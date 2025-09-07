📦 macro-env
一键检测全球所有预定义宏，自动生成人类可读头文件与 JSON 数据库。
支持 OS / Compiler / Arch / Build / ABI / Feature 六类信息，跨平台开发从此告别 #ifdef 地狱！
✨ 特性一览
表格
复制
维度	覆盖范围（部分）
OS	Windows／Linux／macOS／BSD／RTEMS／VxWorks／QNX／Fuchsia／WASI／ESP-IDF／Arduino …
Compiler	GCC／Clang／MSVC／ICC／IAR／ARMCC／TI／NVCC／MinGW／Borland …
Arch	x86／ARM／RISC-V／MIPS／PowerPC／SPARC／Itanium／s390x／LoongArch／Xtensa／AVR …
Build	Debug／Release／Coverage／ASAN／TSAN／MSAN／UBSAN／HWASAN／Optimize …
ABI	MSVC_ABI／SYSV／AAPCS／MINGW_ABI …
Feature	MMX~AVX512／NEON／CRC／Crypto／BMI／LZCNT／POPCNT／SHA …
共 200+ 检测宏，六选一 当前值 + 位图 特性集，一键生成，零依赖。
🚀 30 秒上手
bash
复制
# 1. 克隆
git clone https://github.com/ze-mu-zhou/macro-env.git
cd macro-env

# 2. 生成头文件 & JSON
python uniq_env.py

# 3. 直接使用
clang -std=c17 demo.c uniq_env.h -o demo && ./demo
c
复制
// demo.c
#include "uniq_env.h"
#include <stdio.h>

int main(void) {
    printf("系统   = %d\n", CUR_SYSTEM);   // WIN64 / LINUX / MACOS ...
    printf("编译器 = %d\n", CUR_COMPILER); // GCC / CLANG / MSVC ...
    printf("架构   = %d\n", CUR_ARCH);     // X64 / ARM64 / RISCV ...
    printf("构建   = %d\n", CUR_BUILD);    // DEBUG / RELEASE ...
    printf("ABI    = %d\n", CUR_ABI);      // MSVC_ABI / SYSV ...
    printf("特性   = 0x%X\n", CUR_FEATURE);// 位图：SSE2=1<<0, AVX2=1<<1 ...
#if CUR_HAS__AVX512F__
    puts("✅ AVX-512 已就绪");
#endif
    return 0;
}
📁 仓库结构
复制
macro-env/
├─ detect.json          # 外挂知识库（可 PR 补充）
├─ uniq_env.py          # 生成器（零硬编码）
├─ uniq_env.h           # 产物①：C/C++ 头文件
├─ uniq_env.json        # 产物②：运行时反序列化
├─ .github/workflows/   # CI：自动更新头文件
└─ README.md            # 本文件
🔧 高级用法
1. 添加新平台
编辑 detect.json 任意段落，加一行即可：
JSON
复制
"__MyOS__": "MYOS"
推送后 GitHub Actions 自动生成新版头文件。
2. 运行时查询（JSON）
c
复制
#include <cjson/cJSON.h>
cJSON *root = cJSON_ParseFile("uniq_env.json");
cJSON *brief = cJSON_GetObjectItemCaseSensitive(
                 cJSON_GetObjectItem(root, "db"), "__MyOS__");
printf("%s\n", cJSON_GetStringValue(cJSON_GetObjectItem(brief, "brief")));
3. CI 集成
在自己的仓库里引用本头文件：
yaml
复制
- name: 下载 macro-env
  run: |
    git clone --depth 1 https://github.com/ze-mu-zhou/macro-env.git third_party/macro-env
    echo "INCLUDE=-Ithird_party/macro-env" >> $GITHUB_ENV
🌱 贡献指南
Fork → 修改 detect.json
本地验证：python uniq_env.py
提交 PR，CI 自动检查生成结果。
欢迎补充：新 OS、新编译器、新架构、新指令集！
📄 许可证
MIT License © 2025 ze-mu-zhou
🧩 相关链接
表格
复制
链接	说明
Releases	预生成头文件下载
Issues	报告问题或请求新宏
Discussions	交流跨平台心得
👉 Star 一下，随时获取最新宏定义！
