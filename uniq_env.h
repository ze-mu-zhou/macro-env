#pragma once
/*
 * ==========================================================================
 *  uniq_env.h -- 自动生成的编译时环境检测头文件 (纯 C)
 *
 *  此文件由 Python 脚本根据 detect.json 规则自动生成。
 *  生成时间: 2025-09-07 14:32:15
 *
 *  用法:
 *  #include "uniq_env.h"
 *
 *  // CUR_SYSTEM, CUR_COMPILER, CUR_ARCH, CUR_BUILD, CUR_ABI 将被定义。
 *  // CUR_FEATURE 是一个包含所有已启用特性的位掩码。
 * ==========================================================================
 */

/* --- 1. 环境类别检测 (Environment Category Detection) --- */
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _WIN64
#  define CUR_SYSTEM WIN64
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _WIN32
#  define CUR_SYSTEM WIN32
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __ANDROID__
#  define CUR_SYSTEM ANDROID
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __linux__
#  define CUR_SYSTEM LINUX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __APPLE__
#  define CUR_SYSTEM MACOS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __CYGWIN__
#  define CUR_SYSTEM CYGWIN
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __FreeBSD__
#  define CUR_SYSTEM FREEBSD
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __OpenBSD__
#  define CUR_SYSTEM OPENBSD
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __sun
#  define CUR_SYSTEM SOLARIS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef _AIX
#  define CUR_SYSTEM AIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __QNX__
#  define CUR_SYSTEM QNX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __Fuchsia__
#  define CUR_SYSTEM FUCHSIA
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __rtems__
#  define CUR_SYSTEM RTEMS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __unix__
#  define CUR_SYSTEM UNIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __unix
#  define CUR_SYSTEM UNIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __hpux
#  define CUR_SYSTEM HPUX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __sgi
#  define CUR_SYSTEM IRIX
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __VXWORKS__
#  define CUR_SYSTEM VXWORKS
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __INTEGRITY
#  define CUR_SYSTEM INTEGRITY
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# ifdef __HAIKU__
#  define CUR_SYSTEM HAIKU
#  define CUR_SYSTEM_LOCK 1
# endif
#endif
#if !defined(CUR_SYSTEM_LOCK)
# define CUR_SYSTEM UNKNOWN
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef _MSC_VER
#  define CUR_COMPILER MSVC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __clang__
#  define CUR_COMPILER CLANG
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __INTEL_LLVM_COMPILER
#  define CUR_COMPILER INTEL_LLVM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __ICC
#  define CUR_COMPILER ICC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __NVCC__
#  define CUR_COMPILER NVCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __GNUC__
#  define CUR_COMPILER GCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __TINYC__
#  define CUR_COMPILER TINYC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __ARMCC_VERSION
#  define CUR_COMPILER ARMCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __IAR_SYSTEMS_ICC__
#  define CUR_COMPILER IAR
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __xlC__
#  define CUR_COMPILER XL
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __TI_COMPILER_VERSION__
#  define CUR_COMPILER TI
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __MINGW32__
#  define CUR_COMPILER MINGW32
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __MINGW64__
#  define CUR_COMPILER MINGW64
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __CYGWIN__
#  define CUR_COMPILER CYGWIN_GCC
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __BORLANDC__
#  define CUR_COMPILER BORLAND
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __WATCOMC__
#  define CUR_COMPILER WATCOM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __DMC__
#  define CUR_COMPILER DIGITAL_MARS
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __CODEGEARC__
#  define CUR_COMPILER CODEGEAR
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __PGI
#  define CUR_COMPILER PGI
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __PATHCC__
#  define CUR_COMPILER PATHSCALE
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __clang_analyzer__
#  define CUR_COMPILER CLANG_ANALYZER
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# ifdef __llvm__
#  define CUR_COMPILER LLVM
#  define CUR_COMPILER_LOCK 1
# endif
#endif
#if !defined(CUR_COMPILER_LOCK)
# define CUR_COMPILER UNKNOWN
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __x86_64__
#  define CUR_ARCH X64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __i386__
#  define CUR_ARCH X86
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __aarch64__
#  define CUR_ARCH ARM64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __arm__
#  define CUR_ARCH ARM
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __riscv
#  define CUR_ARCH RISCV
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __mips64
#  define CUR_ARCH MIPS64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __mips__
#  define CUR_ARCH MIPS
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __powerpc64__
#  define CUR_ARCH PPC64
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __powerpc__
#  define CUR_ARCH PPC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __sparc__
#  define CUR_ARCH SPARC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __ia64__
#  define CUR_ARCH ITANIUM
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __s390x__
#  define CUR_ARCH S390X
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __loongarch__
#  define CUR_ARCH LOONGARCH
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __xtensa__
#  define CUR_ARCH XTENSA
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __avr__
#  define CUR_ARCH AVR
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __alpha__
#  define CUR_ARCH ALPHA
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __hppa__
#  define CUR_ARCH PARISC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __sh__
#  define CUR_ARCH SUPERH
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __m68k__
#  define CUR_ARCH M68K
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __arc__
#  define CUR_ARCH ARC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __csky__
#  define CUR_ARCH CSKY
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __nds32__
#  define CUR_ARCH NDS32
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# ifdef __or1k__
#  define CUR_ARCH OPENRISC
#  define CUR_ARCH_LOCK 1
# endif
#endif
#if !defined(CUR_ARCH_LOCK)
# define CUR_ARCH UNKNOWN
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef _DEBUG
#  define CUR_BUILD DEBUG
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef NDEBUG
#  define CUR_BUILD RELEASE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __COVERAGE__
#  define CUR_BUILD COVERAGE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_ADDRESS__
#  define CUR_BUILD ASAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_THREAD__
#  define CUR_BUILD TSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_MEMORY__
#  define CUR_BUILD MSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_UNDEFINED__
#  define CUR_BUILD UBSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_LEAK__
#  define CUR_BUILD LSAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __SANITIZE_HWADDRESS__
#  define CUR_BUILD HWASAN
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __OPTIMIZE__
#  define CUR_BUILD OPTIMIZE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __OPTIMIZE_SIZE__
#  define CUR_BUILD OPTIMIZE_SIZE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __NO_INLINE__
#  define CUR_BUILD NO_INLINE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __PIC__
#  define CUR_BUILD PIC
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# ifdef __PIE__
#  define CUR_BUILD PIE
#  define CUR_BUILD_LOCK 1
# endif
#endif
#if !defined(CUR_BUILD_LOCK)
# define CUR_BUILD UNKNOWN
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef _WIN64
#  define CUR_ABI MSVC_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef _WIN32
#  define CUR_ABI MSVC_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __aarch64__
#  define CUR_ABI AAPCS
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __arm__
#  define CUR_ABI AAPCS
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __x86_64__
#  define CUR_ABI SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __i386__
#  define CUR_ABI SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __linux__
#  define CUR_ABI SYSV
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __MINGW32__
#  define CUR_ABI MINGW_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# ifdef __MINGW64__
#  define CUR_ABI MINGW_ABI
#  define CUR_ABI_LOCK 1
# endif
#endif
#if !defined(CUR_ABI_LOCK)
# define CUR_ABI UNKNOWN
#endif

/* --- 2. 特性位图 (Feature Bitmap) --- */
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

/* --- 3. 辅助宏：所有可检测项的字符串形式 --- */
#define CUR_BRIEF__WIN64 "WIN64"
#define CUR_BRIEF__WIN32 "WIN32"
#define CUR_BRIEF___ANDROID__ "ANDROID"
#define CUR_BRIEF___linux__ "LINUX"
#define CUR_BRIEF___APPLE__ "MACOS"
#define CUR_BRIEF___CYGWIN__ "CYGWIN"
#define CUR_BRIEF___FreeBSD__ "FREEBSD"
#define CUR_BRIEF___OpenBSD__ "OPENBSD"
#define CUR_BRIEF___sun "SOLARIS"
#define CUR_BRIEF__AIX "AIX"
#define CUR_BRIEF___QNX__ "QNX"
#define CUR_BRIEF___Fuchsia__ "FUCHSIA"
#define CUR_BRIEF___rtems__ "RTEMS"
#define CUR_BRIEF___unix__ "UNIX"
#define CUR_BRIEF___unix "UNIX"
#define CUR_BRIEF___hpux "HPUX"
#define CUR_BRIEF___sgi "IRIX"
#define CUR_BRIEF___VXWORKS__ "VXWORKS"
#define CUR_BRIEF___INTEGRITY "INTEGRITY"
#define CUR_BRIEF___HAIKU__ "HAIKU"
#define CUR_BRIEF__MSC_VER "MSVC"
#define CUR_BRIEF___clang__ "CLANG"
#define CUR_BRIEF___INTEL_LLVM_COMPILER "INTEL_LLVM"
#define CUR_BRIEF___ICC "ICC"
#define CUR_BRIEF___NVCC__ "NVCC"
#define CUR_BRIEF___GNUC__ "GCC"
#define CUR_BRIEF___TINYC__ "TINYC"
#define CUR_BRIEF___ARMCC_VERSION "ARMCC"
#define CUR_BRIEF___IAR_SYSTEMS_ICC__ "IAR"
#define CUR_BRIEF___xlC__ "XL"
#define CUR_BRIEF___TI_COMPILER_VERSION__ "TI"
#define CUR_BRIEF___MINGW32__ "MINGW32"
#define CUR_BRIEF___MINGW64__ "MINGW64"
#define CUR_BRIEF___CYGWIN__ "CYGWIN_GCC"
#define CUR_BRIEF___BORLANDC__ "BORLAND"
#define CUR_BRIEF___WATCOMC__ "WATCOM"
#define CUR_BRIEF___DMC__ "DIGITAL_MARS"
#define CUR_BRIEF___CODEGEARC__ "CODEGEAR"
#define CUR_BRIEF___PGI "PGI"
#define CUR_BRIEF___PATHCC__ "PATHSCALE"
#define CUR_BRIEF___clang_analyzer__ "CLANG_ANALYZER"
#define CUR_BRIEF___llvm__ "LLVM"
#define CUR_BRIEF___x86_64__ "X64"
#define CUR_BRIEF___i386__ "X86"
#define CUR_BRIEF___aarch64__ "ARM64"
#define CUR_BRIEF___arm__ "ARM"
#define CUR_BRIEF___riscv "RISCV"
#define CUR_BRIEF___mips64 "MIPS64"
#define CUR_BRIEF___mips__ "MIPS"
#define CUR_BRIEF___powerpc64__ "PPC64"
#define CUR_BRIEF___powerpc__ "PPC"
#define CUR_BRIEF___sparc__ "SPARC"
#define CUR_BRIEF___ia64__ "ITANIUM"
#define CUR_BRIEF___s390x__ "S390X"
#define CUR_BRIEF___loongarch__ "LOONGARCH"
#define CUR_BRIEF___xtensa__ "XTENSA"
#define CUR_BRIEF___avr__ "AVR"
#define CUR_BRIEF___alpha__ "ALPHA"
#define CUR_BRIEF___hppa__ "PARISC"
#define CUR_BRIEF___sh__ "SUPERH"
#define CUR_BRIEF___m68k__ "M68K"
#define CUR_BRIEF___arc__ "ARC"
#define CUR_BRIEF___csky__ "CSKY"
#define CUR_BRIEF___nds32__ "NDS32"
#define CUR_BRIEF___or1k__ "OPENRISC"
#define CUR_BRIEF__DEBUG "DEBUG"
#define CUR_BRIEF_NDEBUG "RELEASE"
#define CUR_BRIEF___COVERAGE__ "COVERAGE"
#define CUR_BRIEF___SANITIZE_ADDRESS__ "ASAN"
#define CUR_BRIEF___SANITIZE_THREAD__ "TSAN"
#define CUR_BRIEF___SANITIZE_MEMORY__ "MSAN"
#define CUR_BRIEF___SANITIZE_UNDEFINED__ "UBSAN"
#define CUR_BRIEF___SANITIZE_LEAK__ "LSAN"
#define CUR_BRIEF___SANITIZE_HWADDRESS__ "HWASAN"
#define CUR_BRIEF___OPTIMIZE__ "OPTIMIZE"
#define CUR_BRIEF___OPTIMIZE_SIZE__ "OPTIMIZE_SIZE"
#define CUR_BRIEF___NO_INLINE__ "NO_INLINE"
#define CUR_BRIEF___PIC__ "PIC"
#define CUR_BRIEF___PIE__ "PIE"
#define CUR_BRIEF__WIN64 "MSVC_ABI"
#define CUR_BRIEF__WIN32 "MSVC_ABI"
#define CUR_BRIEF___aarch64__ "AAPCS"
#define CUR_BRIEF___arm__ "AAPCS"
#define CUR_BRIEF___x86_64__ "SYSV"
#define CUR_BRIEF___i386__ "SYSV"
#define CUR_BRIEF___linux__ "SYSV"
#define CUR_BRIEF___MINGW32__ "MINGW_ABI"
#define CUR_BRIEF___MINGW64__ "MINGW_ABI"
#define CUR_BRIEF___MMX__ "0"
#define CUR_BRIEF___SSE__ "1"
#define CUR_BRIEF___SSE2__ "2"
#define CUR_BRIEF___SSE3__ "3"
#define CUR_BRIEF___AVX__ "4"
#define CUR_BRIEF___AVX2__ "5"
#define CUR_BRIEF___AVX512F__ "6"
#define CUR_BRIEF___ARM_NEON "7"
#define CUR_BRIEF___SANITIZE_ADDRESS__ "8"
#define CUR_BRIEF___AVX512CD__ "9"
#define CUR_BRIEF___AVX512VL__ "10"
#define CUR_BRIEF___AVX512BW__ "11"
#define CUR_BRIEF___AVX512DQ__ "12"
#define CUR_BRIEF___AVX512ER__ "13"
#define CUR_BRIEF___AVX512PF__ "14"
#define CUR_BRIEF___F16C__ "15"
#define CUR_BRIEF___FMA__ "16"
#define CUR_BRIEF___BMI__ "17"
#define CUR_BRIEF___BMI2__ "18"
#define CUR_BRIEF___LZCNT__ "19"
#define CUR_BRIEF___POPCNT__ "20"
#define CUR_BRIEF___AES__ "21"
#define CUR_BRIEF___PCLMUL__ "22"
#define CUR_BRIEF___RDRND__ "23"
#define CUR_BRIEF___RDSEED__ "24"
#define CUR_BRIEF___SHA__ "25"
#define CUR_BRIEF___GFNI__ "26"
#define CUR_BRIEF___VPCLMULQDQ__ "27"
#define CUR_BRIEF___VAES__ "28"
#define CUR_BRIEF___ARM_NEON_FP "29"
#define CUR_BRIEF___ARM_FEATURE_CRYPTO "30"
#define CUR_BRIEF___ARM_FEATURE_CRC32 "31"
#define CUR_BRIEF___ARM_FEATURE_DOTPROD "32"
#define CUR_BRIEF___ARM_FEATURE_FMA "33"
#define CUR_BRIEF___ARM_FEATURE_IDIV "34"
#define CUR_BRIEF___ARM_FEATURE_QRDMX "35"