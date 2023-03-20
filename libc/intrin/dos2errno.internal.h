#ifndef COSMOPOLITAN_LIBC_INTRIN_DOS2ERRNO_INTERNAL_H_
#define COSMOPOLITAN_LIBC_INTRIN_DOS2ERRNO_INTERNAL_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

struct thatispacked Dos2Errno {
  uint16_t doscode;
  int32_t systemv;
};

extern const struct Dos2Errno kDos2Errno[];

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_INTRIN_DOS2ERRNO_INTERNAL_H_ */
