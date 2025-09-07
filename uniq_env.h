#pragma once
/*
 * ==========================================================================
 *  uniq_env.h -- 自动生成的编译时环境检测头文件 (纯 C)
 *
 *  此文件由 Python 脚本根据 detect.json 规则自动生成。
 *  生成时间: 2025-09-07 15:45:00
 *
 *  用法:
 *  // 编译时检查: #if CUR_SYSTEM == ENV_WIN64
 *  // 获取字符串: const char* s = CUR_SYSTEM_STRING;
 *  // 检查特性:   #if (CUR_FEATURE & FEATURE_SSE2)
 * ==========================================================================
 */

/* --- 1. 环境类别检测 (值为带前缀的唯一标识符) --- */
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _WIN64
#  define CUR_SYSTEM ENV_WIN64
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _WIN32
#  define CUR_SYSTEM ENV_WIN32
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __ANDROID__
#  define CUR_SYSTEM ENV_ANDROID
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __linux__
#  define CUR_SYSTEM ENV_LINUX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __APPLE__
#  define CUR_SYSTEM ENV_MACOS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __CYGWIN__
#  define CUR_SYSTEM ENV_CYGWIN
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __FreeBSD__
#  define CUR_SYSTEM ENV_FREEBSD
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __OpenBSD__
#  define CUR_SYSTEM ENV_OPENBSD
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __sun
#  define CUR_SYSTEM ENV_SOLARIS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _AIX
#  define CUR_SYSTEM ENV_AIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __QNX__
#  define CUR_SYSTEM ENV_QNX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __Fuchsia__
#  define CUR_SYSTEM ENV_FUCHSIA
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __rtems__
#  define CUR_SYSTEM ENV_RTEMS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __unix__
#  define CUR_SYSTEM ENV_UNIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __unix
#  define CUR_SYSTEM ENV_UNIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __hpux
#  define CUR_SYSTEM ENV_HPUX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __sgi
#  define CUR_SYSTEM ENV_IRIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __VXWORKS__
#  define CUR_SYSTEM ENV_VXWORKS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __INTEGRITY
#  define CUR_SYSTEM ENV_INTEGRITY
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __HAIKU__
#  define CUR_SYSTEM ENV_HAIKU
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# define CUR_SYSTEM ENV_UNKNOWN
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef _MSC_VER
#  define CUR_COMPILER ENV_MSVC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __clang__
#  define CUR_COMPILER ENV_CLANG
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __INTEL_LLVM_COMPILER
#  define CUR_COMPILER ENV_INTEL_LLVM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __ICC
#  define CUR_COMPILER ENV_ICC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __NVCC__
#  define CUR_COMPILER ENV_NVCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __GNUC__
#  define CUR_COMPILER ENV_GCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __TINYC__
#  define CUR_COMPILER ENV_TINYC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __ARMCC_VERSION
#  define CUR_COMPILER ENV_ARMCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __IAR_SYSTEMS_ICC__
#  define CUR_COMPILER ENV_IAR
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __xlC__
#  define CUR_COMPILER ENV_XL
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __TI_COMPILER_VERSION__
#  define CUR_COMPILER ENV_TI
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __MINGW32__
#  define CUR_COMPILER ENV_MINGW32
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __MINGW64__
#  define CUR_COMPILER ENV_MINGW64
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __CYGWIN__
#  define CUR_COMPILER ENV_CYGWIN_GCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __BORLANDC__
#  define CUR_COMPILER ENV_BORLAND
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __WATCOMC__
#  define CUR_COMPILER ENV_WATCOM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __DMC__
#  define CUR_COMPILER ENV_DIGITAL_MARS
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __CODEGEARC__
#  define CUR_COMPILER ENV_CODEGEAR
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __PGI
#  define CUR_COMPILER ENV_PGI
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __PATHCC__
#  define CUR_COMPILER ENV_PATHSCALE
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __clang_analyzer__
#  define CUR_COMPILER ENV_CLANG_ANALYZER
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __llvm__
#  define CUR_COMPILER ENV_LLVM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# define CUR_COMPILER ENV_UNKNOWN
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __x86_64__
#  define CUR_ARCH ENV_X64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __i386__
#  define CUR_ARCH ENV_X86
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __aarch64__
#  define CUR_ARCH ENV_ARM64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __arm__
#  define CUR_ARCH ENV_ARM
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __riscv
#  define CUR_ARCH ENV_RISCV
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __mips64
#  define CUR_ARCH ENV_MIPS64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __mips__
#  define CUR_ARCH ENV_MIPS
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __powerpc64__
#  define CUR_ARCH ENV_PPC64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __powerpc__
#  define CUR_ARCH ENV_PPC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __sparc__
#  define CUR_ARCH ENV_SPARC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __ia64__
#  define CUR_ARCH ENV_ITANIUM
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __s390x__
#  define CUR_ARCH ENV_S390X
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __loongarch__
#  define CUR_ARCH ENV_LOONGARCH
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __xtensa__
#  define CUR_ARCH ENV_XTENSA
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __avr__
#  define CUR_ARCH ENV_AVR
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __alpha__
#  define CUR_ARCH ENV_ALPHA
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __hppa__
#  define CUR_ARCH ENV_PARISC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __sh__
#  define CUR_ARCH ENV_SUPERH
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __m68k__
#  define CUR_ARCH ENV_M68K
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __arc__
#  define CUR_ARCH ENV_ARC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __csky__
#  define CUR_ARCH ENV_CSKY
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __nds32__
#  define CUR_ARCH ENV_NDS32
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __or1k__
#  define CUR_ARCH ENV_OPENRISC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# define CUR_ARCH ENV_UNKNOWN
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef _DEBUG
#  define CUR_BUILD ENV_DEBUG
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef NDEBUG
#  define CUR_BUILD ENV_RELEASE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __COVERAGE__
#  define CUR_BUILD ENV_COVERAGE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_ADDRESS__
#  define CUR_BUILD ENV_ASAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_THREAD__
#  define CUR_BUILD ENV_TSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_MEMORY__
#  define CUR_BUILD ENV_MSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_UNDEFINED__
#  define CUR_BUILD ENV_UBSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_LEAK__
#  define CUR_BUILD ENV_LSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_HWADDRESS__
#  define CUR_BUILD ENV_HWASAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __OPTIMIZE__
#  define CUR_BUILD ENV_OPTIMIZE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __OPTIMIZE_SIZE__
#  define CUR_BUILD ENV_OPTIMIZE_SIZE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __NO_INLINE__
#  define CUR_BUILD ENV_NO_INLINE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __PIC__
#  define CUR_BUILD ENV_PIC
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __PIE__
#  define CUR_BUILD ENV_PIE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# define CUR_BUILD ENV_UNKNOWN
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef _WIN64
#  define CUR_ABI ENV_MSVC_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef _WIN32
#  define CUR_ABI ENV_MSVC_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __aarch64__
#  define CUR_ABI ENV_AAPCS
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __arm__
#  define CUR_ABI ENV_AAPCS
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __x86_64__
#  define CUR_ABI ENV_SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __i386__
#  define CUR_ABI ENV_SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __linux__
#  define CUR_ABI ENV_SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __MINGW32__
#  define CUR_ABI ENV_MINGW_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __MINGW64__
#  define CUR_ABI ENV_MINGW_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# define CUR_ABI ENV_UNKNOWN
#endif

/* --- 2. 特性宏定义与位图 (Feature Macros & Bitmap) --- */
#define FEATURE_MMX (1u << 0)
#define FEATURE_SSE (1u << 1)
#define FEATURE_SSE2 (1u << 2)
#define FEATURE_SSE3 (1u << 3)
#define FEATURE_AVX (1u << 4)
#define FEATURE_AVX2 (1u << 5)
#define FEATURE_AVX512F (1u << 6)
#define FEATURE_ARMNEON (1u << 7)
#define FEATURE_SANITIZEADDRESS (1u << 8)
#define FEATURE_AVX512CD (1u << 9)
#define FEATURE_AVX512VL (1u << 10)
#define FEATURE_AVX512BW (1u << 11)
#define FEATURE_AVX512DQ (1u << 12)
#define FEATURE_AVX512ER (1u << 13)
#define FEATURE_AVX512PF (1u << 14)
#define FEATURE_F16C (1u << 15)
#define FEATURE_FMA (1u << 16)
#define FEATURE_BMI (1u << 17)
#define FEATURE_BMI2 (1u << 18)
#define FEATURE_LZCNT (1u << 19)
#define FEATURE_POPCNT (1u << 20)
#define FEATURE_AES (1u << 21)
#define FEATURE_PCLMUL (1u << 22)
#define FEATURE_RDRND (1u << 23)
#define FEATURE_RDSEED (1u << 24)
#define FEATURE_SHA (1u << 25)
#define FEATURE_GFNI (1u << 26)
#define FEATURE_VPCLMULQDQ (1u << 27)
#define FEATURE_VAES (1u << 28)
#define FEATURE_ARMNEONFP (1u << 29)
#define FEATURE_ARMFEATURECRYPTO (1u << 30)
#define FEATURE_ARMFEATURECRC32 (1u << 31)
#define FEATURE_ARMFEATUREDOTPROD (1u << 32)
#define FEATURE_ARMFEATUREFMA (1u << 33)
#define FEATURE_ARMFEATUREIDIV (1u << 34)
#define FEATURE_ARMFEATUREQRDMX (1u << 35)

/* --- 特性位图计算 (Bitmap Calculation) --- */
#ifdef __MMX__
# define _CUR_FEATURE_0 (1u<<0)
#else
# define _CUR_FEATURE_0 (0u)
#endif
#ifdef __SSE__
# define _CUR_FEATURE_1 (1u<<1)
#else
# define _CUR_FEATURE_1 (0u)
#endif
#ifdef __SSE2__
# define _CUR_FEATURE_2 (1u<<2)
#else
# define _CUR_FEATURE_2 (0u)
#endif
#ifdef __SSE3__
# define _CUR_FEATURE_3 (1u<<3)
#else
# define _CUR_FEATURE_3 (0u)
#endif
#ifdef __AVX__
# define _CUR_FEATURE_4 (1u<<4)
#else
# define _CUR_FEATURE_4 (0u)
#endif
#ifdef __AVX2__
# define _CUR_FEATURE_5 (1u<<5)
#else
# define _CUR_FEATURE_5 (0u)
#endif
#ifdef __AVX512F__
# define _CUR_FEATURE_6 (1u<<6)
#else
# define _CUR_FEATURE_6 (0u)
#endif
#ifdef __ARM_NEON
# define _CUR_FEATURE_7 (1u<<7)
#else
# define _CUR_FEATURE_7 (0u)
#endif
#ifdef __SANITIZE_ADDRESS__
# define _CUR_FEATURE_8 (1u<<8)
#else
# define _CUR_FEATURE_8 (0u)
#endif
#ifdef __AVX512CD__
# define _CUR_FEATURE_9 (1u<<9)
#else
# define _CUR_FEATURE_9 (0u)
#endif
#ifdef __AVX512VL__
# define _CUR_FEATURE_10 (1u<<10)
#else
# define _CUR_FEATURE_10 (0u)
#endif
#ifdef __AVX512BW__
# define _CUR_FEATURE_11 (1u<<11)
#else
# define _CUR_FEATURE_11 (0u)
#endif
#ifdef __AVX512DQ__
# define _CUR_FEATURE_12 (1u<<12)
#else
# define _CUR_FEATURE_12 (0u)
#endif
#ifdef __AVX512ER__
# define _CUR_FEATURE_13 (1u<<13)
#else
# define _CUR_FEATURE_13 (0u)
#endif
#ifdef __AVX512PF__
# define _CUR_FEATURE_14 (1u<<14)
#else
# define _CUR_FEATURE_14 (0u)
#endif
#ifdef __F16C__
# define _CUR_FEATURE_15 (1u<<15)
#else
# define _CUR_FEATURE_15 (0u)
#endif
#ifdef __FMA__
# define _CUR_FEATURE_16 (1u<<16)
#else
# define _CUR_FEATURE_16 (0u)
#endif
#ifdef __BMI__
# define _CUR_FEATURE_17 (1u<<17)
#else
# define _CUR_FEATURE_17 (0u)
#endif
#ifdef __BMI2__
# define _CUR_FEATURE_18 (1u<<18)
#else
# define _CUR_FEATURE_18 (0u)
#endif
#ifdef __LZCNT__
# define _CUR_FEATURE_19 (1u<<19)
#else
# define _CUR_FEATURE_19 (0u)
#endif
#ifdef __POPCNT__
# define _CUR_FEATURE_20 (1u<<20)
#else
# define _CUR_FEATURE_20 (0u)
#endif
#ifdef __AES__
# define _CUR_FEATURE_21 (1u<<21)
#else
# define _CUR_FEATURE_21 (0u)
#endif
#ifdef __PCLMUL__
# define _CUR_FEATURE_22 (1u<<22)
#else
# define _CUR_FEATURE_22 (0u)
#endif
#ifdef __RDRND__
# define _CUR_FEATURE_23 (1u<<23)
#else
# define _CUR_FEATURE_23 (0u)
#endif
#ifdef __RDSEED__
# define _CUR_FEATURE_24 (1u<<24)
#else
# define _CUR_FEATURE_24 (0u)
#endif
#ifdef __SHA__
# define _CUR_FEATURE_25 (1u<<25)
#else
# define _CUR_FEATURE_25 (0u)
#endif
#ifdef __GFNI__
# define _CUR_FEATURE_26 (1u<<26)
#else
# define _CUR_FEATURE_26 (0u)
#endif
#ifdef __VPCLMULQDQ__
# define _CUR_FEATURE_27 (1u<<27)
#else
# define _CUR_FEATURE_27 (0u)
#endif
#ifdef __VAES__
# define _CUR_FEATURE_28 (1u<<28)
#else
# define _CUR_FEATURE_28 (0u)
#endif
#ifdef __ARM_NEON_FP
# define _CUR_FEATURE_29 (1u<<29)
#else
# define _CUR_FEATURE_29 (0u)
#endif
#ifdef __ARM_FEATURE_CRYPTO
# define _CUR_FEATURE_30 (1u<<30)
#else
# define _CUR_FEATURE_30 (0u)
#endif
#ifdef __ARM_FEATURE_CRC32
# define _CUR_FEATURE_31 (1u<<31)
#else
# define _CUR_FEATURE_31 (0u)
#endif
#ifdef __ARM_FEATURE_DOTPROD
# define _CUR_FEATURE_32 (1u<<32)
#else
# define _CUR_FEATURE_32 (0u)
#endif
#ifdef __ARM_FEATURE_FMA
# define _CUR_FEATURE_33 (1u<<33)
#else
# define _CUR_FEATURE_33 (0u)
#endif
#ifdef __ARM_FEATURE_IDIV
# define _CUR_FEATURE_34 (1u<<34)
#else
# define _CUR_FEATURE_34 (0u)
#endif
#ifdef __ARM_FEATURE_QRDMX
# define _CUR_FEATURE_35 (1u<<35)
#else
# define _CUR_FEATURE_35 (0u)
#endif

#define CUR_FEATURE (0u | _CUR_FEATURE_0 | _CUR_FEATURE_1 | _CUR_FEATURE_2 | _CUR_FEATURE_3 | _CUR_FEATURE_4 | _CUR_FEATURE_5 | _CUR_FEATURE_6 | _CUR_FEATURE_7 | _CUR_FEATURE_8 | _CUR_FEATURE_9 | _CUR_FEATURE_10 | _CUR_FEATURE_11 | _CUR_FEATURE_12 | _CUR_FEATURE_13 | _CUR_FEATURE_14 | _CUR_FEATURE_15 | _CUR_FEATURE_16 | _CUR_FEATURE_17 | _CUR_FEATURE_18 | _CUR_FEATURE_19 | _CUR_FEATURE_20 | _CUR_FEATURE_21 | _CUR_FEATURE_22 | _CUR_FEATURE_23 | _CUR_FEATURE_24 | _CUR_FEATURE_25 | _CUR_FEATURE_26 | _CUR_FEATURE_27 | _CUR_FEATURE_28 | _CUR_FEATURE_29 | _CUR_FEATURE_30 | _CUR_FEATURE_31 | _CUR_FEATURE_32 | _CUR_FEATURE_33 | _CUR_FEATURE_34 | _CUR_FEATURE_35)

/* --- 3. 所有可检测项的字符串形式 --- */
#define CUR_BRIEF__ENV_UNKNOWN "UNKNOWN"
#define CUR_BRIEF__ENV_WIN64 "WIN64"
#define CUR_BRIEF__ENV_WIN32 "WIN32"
#define CUR_BRIEF__ENV_ANDROID "ANDROID"
#define CUR_BRIEF__ENV_LINUX "LINUX"
#define CUR_BRIEF__ENV_MACOS "MACOS"
#define CUR_BRIEF__ENV_CYGWIN "CYGWIN"
#define CUR_BRIEF__ENV_FREEBSD "FREEBSD"
#define CUR_BRIEF__ENV_OPENBSD "OPENBSD"
#define CUR_BRIEF__ENV_SOLARIS "SOLARIS"
#define CUR_BRIEF__ENV_AIX "AIX"
#define CUR_BRIEF__ENV_QNX "QNX"
#define CUR_BRIEF__ENV_FUCHSIA "FUCHSIA"
#define CUR_BRIEF__ENV_RTEMS "RTEMS"
#define CUR_BRIEF__ENV_UNIX "UNIX"
#define CUR_BRIEF__ENV_UNIX "UNIX"
#define CUR_BRIEF__ENV_HPUX "HPUX"
#define CUR_BRIEF__ENV_IRIX "IRIX"
#define CUR_BRIEF__ENV_VXWORKS "VXWORKS"
#define CUR_BRIEF__ENV_INTEGRITY "INTEGRITY"
#define CUR_BRIEF__ENV_HAIKU "HAIKU"
#define CUR_BRIEF__ENV_MSVC "MSVC"
#define CUR_BRIEF__ENV_CLANG "CLANG"
#define CUR_BRIEF__ENV_INTEL_LLVM "INTEL_LLVM"
#define CUR_BRIEF__ENV_ICC "ICC"
#define CUR_BRIEF__ENV_NVCC "NVCC"
#define CUR_BRIEF__ENV_GCC "GCC"
#define CUR_BRIEF__ENV_TINYC "TINYC"
#define CUR_BRIEF__ENV_ARMCC "ARMCC"
#define CUR_BRIEF__ENV_IAR "IAR"
#define CUR_BRIEF__ENV_XL "XL"
#define CUR_BRIEF__ENV_TI "TI"
#define CUR_BRIEF__ENV_MINGW32 "MINGW32"
#define CUR_BRIEF__ENV_MINGW64 "MINGW64"
#define CUR_BRIEF__ENV_CYGWIN_GCC "CYGWIN_GCC"
#define CUR_BRIEF__ENV_BORLAND "BORLAND"
#define CUR_BRIEF__ENV_WATCOM "WATCOM"
#define CUR_BRIEF__ENV_DIGITAL_MARS "DIGITAL_MARS"
#define CUR_BRIEF__ENV_CODEGEAR "CODEGEAR"
#define CUR_BRIEF__ENV_PGI "PGI"
#define CUR_BRIEF__ENV_PATHSCALE "PATHSCALE"
#define CUR_BRIEF__ENV_CLANG_ANALYZER "CLANG_ANALYZER"
#define CUR_BRIEF__ENV_LLVM "LLVM"
#define CUR_BRIEF__ENV_X64 "X64"
#define CUR_BRIEF__ENV_X86 "X86"
#define CUR_BRIEF__ENV_ARM64 "ARM64"
#define CUR_BRIEF__ENV_ARM "ARM"
#define CUR_BRIEF__ENV_RISCV "RISCV"
#define CUR_BRIEF__ENV_MIPS64 "MIPS64"
#define CUR_BRIEF__ENV_MIPS "MIPS"
#define CUR_BRIEF__ENV_PPC64 "PPC64"
#define CUR_BRIEF__ENV_PPC "PPC"
#define CUR_BRIEF__ENV_SPARC "SPARC"
#define CUR_BRIEF__ENV_ITANIUM "ITANIUM"
#define CUR_BRIEF__ENV_S390X "S390X"
#define CUR_BRIEF__ENV_LOONGARCH "LOONGARCH"
#define CUR_BRIEF__ENV_XTENSA "XTENSA"
#define CUR_BRIEF__ENV_AVR "AVR"
#define CUR_BRIEF__ENV_ALPHA "ALPHA"
#define CUR_BRIEF__ENV_PARISC "PARISC"
#define CUR_BRIEF__ENV_SUPERH "SUPERH"
#define CUR_BRIEF__ENV_M68K "M68K"
#define CUR_BRIEF__ENV_ARC "ARC"
#define CUR_BRIEF__ENV_CSKY "CSKY"
#define CUR_BRIEF__ENV_NDS32 "NDS32"
#define CUR_BRIEF__ENV_OPENRISC "OPENRISC"
#define CUR_BRIEF__ENV_DEBUG "DEBUG"
#define CUR_BRIEF__ENV_RELEASE "RELEASE"
#define CUR_BRIEF__ENV_COVERAGE "COVERAGE"
#define CUR_BRIEF__ENV_ASAN "ASAN"
#define CUR_BRIEF__ENV_TSAN "TSAN"
#define CUR_BRIEF__ENV_MSAN "MSAN"
#define CUR_BRIEF__ENV_UBSAN "UBSAN"
#define CUR_BRIEF__ENV_LSAN "LSAN"
#define CUR_BRIEF__ENV_HWASAN "HWASAN"
#define CUR_BRIEF__ENV_OPTIMIZE "OPTIMIZE"
#define CUR_BRIEF__ENV_OPTIMIZE_SIZE "OPTIMIZE_SIZE"
#define CUR_BRIEF__ENV_NO_INLINE "NO_INLINE"
#define CUR_BRIEF__ENV_PIC "PIC"
#define CUR_BRIEF__ENV_PIE "PIE"
#define CUR_BRIEF__ENV_MSVC_ABI "MSVC_ABI"
#define CUR_BRIEF__ENV_MSVC_ABI "MSVC_ABI"
#define CUR_BRIEF__ENV_AAPCS "AAPCS"
#define CUR_BRIEF__ENV_AAPCS "AAPCS"
#define CUR_BRIEF__ENV_SYSV "SYSV"
#define CUR_BRIEF__ENV_SYSV "SYSV"
#define CUR_BRIEF__ENV_SYSV "SYSV"
#define CUR_BRIEF__ENV_MINGW_ABI "MINGW_ABI"
#define CUR_BRIEF__ENV_MINGW_ABI "MINGW_ABI"
#define CUR_BRIEF__ENV_0 "0"
#define CUR_BRIEF__ENV_1 "1"
#define CUR_BRIEF__ENV_2 "2"
#define CUR_BRIEF__ENV_3 "3"
#define CUR_BRIEF__ENV_4 "4"
#define CUR_BRIEF__ENV_5 "5"
#define CUR_BRIEF__ENV_6 "6"
#define CUR_BRIEF__ENV_7 "7"
#define CUR_BRIEF__ENV_8 "8"
#define CUR_BRIEF__ENV_9 "9"
#define CUR_BRIEF__ENV_10 "10"
#define CUR_BRIEF__ENV_11 "11"
#define CUR_BRIEF__ENV_12 "12"
#define CUR_BRIEF__ENV_13 "13"
#define CUR_BRIEF__ENV_14 "14"
#define CUR_BRIEF__ENV_15 "15"
#define CUR_BRIEF__ENV_16 "16"
#define CUR_BRIEF__ENV_17 "17"
#define CUR_BRIEF__ENV_18 "18"
#define CUR_BRIEF__ENV_19 "19"
#define CUR_BRIEF__ENV_20 "20"
#define CUR_BRIEF__ENV_21 "21"
#define CUR_BRIEF__ENV_22 "22"
#define CUR_BRIEF__ENV_23 "23"
#define CUR_BRIEF__ENV_24 "24"
#define CUR_BRIEF__ENV_25 "25"
#define CUR_BRIEF__ENV_26 "26"
#define CUR_BRIEF__ENV_27 "27"
#define CUR_BRIEF__ENV_28 "28"
#define CUR_BRIEF__ENV_29 "29"
#define CUR_BRIEF__ENV_30 "30"
#define CUR_BRIEF__ENV_31 "31"
#define CUR_BRIEF__ENV_32 "32"
#define CUR_BRIEF__ENV_33 "33"
#define CUR_BRIEF__ENV_34 "34"
#define CUR_BRIEF__ENV_35 "35"

/* --- 4. 动态宏名转换为字符串 --- */
#define UNIQ_ENV_CONCAT_IMPL(prefix, value) prefix##value
#define UNIQ_ENV_CONCAT(prefix, value) UNIQ_ENV_CONCAT_IMPL(prefix, value)

#define CUR_SYSTEM_STRING   UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_SYSTEM)
#define CUR_COMPILER_STRING UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_COMPILER)
#define CUR_ARCH_STRING     UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_ARCH)
#define CUR_BUILD_STRING    UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_BUILD)
#define CUR_ABI_STRING      UNIQ_ENV_CONCAT(CUR_BRIEF__, CUR_ABI)
