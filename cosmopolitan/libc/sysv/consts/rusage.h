#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int RUSAGE_BOTH;
extern const int RUSAGE_CHILDREN;
extern const int RUSAGE_SELF;
extern const int RUSAGE_THREAD;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define RUSAGE_BOTH     SYMBOLIC(RUSAGE_BOTH)
#define RUSAGE_CHILDREN SYMBOLIC(RUSAGE_CHILDREN)
#define RUSAGE_SELF     LITERALLY(0)
#define RUSAGE_THREAD   SYMBOLIC(RUSAGE_THREAD)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_RUSAGE_H_ */