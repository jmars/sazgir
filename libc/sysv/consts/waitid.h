#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_WAITID_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_WAITID_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int WEXITED;
extern const int WSTOPPED;
extern const int WNOWAIT;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define WEXITED  SYMBOLIC(WEXITED)
#define WSTOPPED SYMBOLIC(WSTOPPED)
#define WNOWAIT  SYMBOLIC(WNOWAIT)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_WAITID_H_ */
