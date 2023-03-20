#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_FUTEX_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_FUTEX_H_
#include "libc/runtime/symbolic.h"

#define FUTEX_WAIT         SYMBOLIC(FUTEX_WAIT)
#define FUTEX_WAKE         SYMBOLIC(FUTEX_WAKE)
#define FUTEX_REQUEUE      SYMBOLIC(FUTEX_REQUEUE)
#define FUTEX_PRIVATE_FLAG 128

#define FUTEX_WAIT_PRIVATE    (FUTEX_WAIT | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAKE_PRIVATE    (FUTEX_WAKE | FUTEX_PRIVATE_FLAG)
#define FUTEX_REQUEUE_PRIVATE (FUTEX_REQUEUE | FUTEX_PRIVATE_FLAG)

#define FUTEX_WAIT_BITSET      9
#define FUTEX_CLOCK_REALTIME   256
#define FUTEX_BITSET_MATCH_ANY 0xffffffff

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int FUTEX_WAIT;
extern const int FUTEX_WAKE;
extern const int FUTEX_REQUEUE;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_FUTEX_H_ */