#ifndef COSMOPOLITAN_LIBC_DCE_H_
#define COSMOPOLITAN_LIBC_DCE_H_
/*─────────────────────────────────────────────────────────────────────────────╗
│ cosmopolitan § autotune » dead code elimination                              │
╚─────────────────────────────────────────────────────────────────────────────*/

#ifndef SUPPORT_VECTOR
/**
 * Supported Platforms Tuning Knob (Runtime & Compile-Time)
 * Tuning this bitmask will remove platform polyfills at compile-time.
 */
#define SUPPORT_VECTOR 255
#endif

#define _HOSTLINUX   1
#define _HOSTMETAL   2
#define _HOSTWINDOWS 4
#define _HOSTXNU     8
#define _HOSTOPENBSD 16
#define _HOSTFREEBSD 32
#define _HOSTNETBSD  64

#ifdef NDEBUG
#define NoDebug() 1
#else
#define NoDebug() 0
#endif

#ifdef MODE_DBG
#define IsModeDbg() 1
#else
#define IsModeDbg() 0
#endif

#ifdef __MFENTRY__
#define HaveFentry() 1
#else
#define HaveFentry() 0
#endif

#ifdef TRUSTWORTHY
#define IsTrustworthy() 1
#else
#define IsTrustworthy() 0
#endif

#ifdef TINY
#define IsTiny() 1
#else
#define IsTiny() 0
#endif

#ifdef __OPTIMIZE__
#define IsOptimized() 1
#else
#define IsOptimized() 0
#endif

#ifdef __SANITIZE_ADDRESS__
#define IsAsan() 1
#else
#define IsAsan() 0
#endif

#if defined(__PIE__) || defined(__PIC__)
#define IsPositionIndependent() 1
#else
#define IsPositionIndependent() 0
#endif

#define SupportsLinux()   ((SUPPORT_VECTOR & _HOSTLINUX) == _HOSTLINUX)
#define SupportsMetal()   ((SUPPORT_VECTOR & _HOSTMETAL) == _HOSTMETAL)
#define SupportsWindows() ((SUPPORT_VECTOR & _HOSTWINDOWS) == _HOSTWINDOWS)
#define SupportsXnu()     ((SUPPORT_VECTOR & _HOSTXNU) == _HOSTXNU)
#define SupportsFreebsd() ((SUPPORT_VECTOR & _HOSTFREEBSD) == _HOSTFREEBSD)
#define SupportsOpenbsd() ((SUPPORT_VECTOR & _HOSTOPENBSD) == _HOSTOPENBSD)
#define SupportsNetbsd()  ((SUPPORT_VECTOR & _HOSTNETBSD) == _HOSTNETBSD)
#define SupportsBsd() \
  (!!(SUPPORT_VECTOR & (_HOSTXNU | _HOSTFREEBSD | _HOSTOPENBSD | _HOSTNETBSD)))
#define SupportsSystemv() \
  (!!(SUPPORT_VECTOR &    \
      (_HOSTLINUX | _HOSTXNU | _HOSTOPENBSD | _HOSTFREEBSD | _HOSTNETBSD)))

#ifndef __ASSEMBLER__
#define IsLinux()   (SupportsLinux() && (__hostos & _HOSTLINUX))
#define IsMetal()   (SupportsMetal() && (__hostos & _HOSTMETAL))
#define IsWindows() (SupportsWindows() && (__hostos & _HOSTWINDOWS))
#define IsXnu()     (SupportsXnu() && (__hostos & _HOSTXNU))
#define IsFreebsd() (SupportsFreebsd() && (__hostos & _HOSTFREEBSD))
#define IsOpenbsd() (SupportsOpenbsd() && (__hostos & _HOSTOPENBSD))
#define IsNetbsd()  (SupportsNetbsd() && (__hostos & _HOSTNETBSD))
#define IsBsd()     (IsXnu() || IsFreebsd() || IsOpenbsd() || IsNetbsd())
#else
/* clang-format off */
#define IsLinux() $_HOSTLINUX,__hostos(%rip)
#define IsMetal() $_HOSTMETAL,__hostos(%rip)
#define IsWindows() $_HOSTWINDOWS,__hostos(%rip)
#define IsBsd() $_HOSTXNU|_HOSTFREEBSD|_HOSTOPENBSD|_HOSTNETBSD,__hostos(%rip)
#define IsXnu() $_HOSTXNU,__hostos(%rip)
#define IsFreebsd() $_HOSTFREEBSD,__hostos(%rip)
#define IsOpenbsd() $_HOSTOPENBSD,__hostos(%rip)
#define IsNetbsd() $_HOSTNETBSD,__hostos(%rip)
/* clang-format on */
#endif

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int __hostos;

bool IsWsl1(void);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_DCE_H_ */
