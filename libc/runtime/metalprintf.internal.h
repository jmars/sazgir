#ifndef COSMOPOLITAN_LIBC_RUNTIME_METALPRINTF_H_
#define COSMOPOLITAN_LIBC_RUNTIME_METALPRINTF_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

void MetalPrintf(const char *, ...);

#define MetalPrintf(FMT, ...)             \
  do {                                    \
    const char StackFmt[] = FMT;          \
    MetalPrintf(StackFmt, ##__VA_ARGS__); \
  } while (0)

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_RUNTIME_METALPRINTF_H_ */
