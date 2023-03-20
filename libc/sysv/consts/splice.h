#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SPLICE_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SPLICE_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const unsigned int SPLICE_F_GIFT;
extern const unsigned int SPLICE_F_MORE;
extern const unsigned int SPLICE_F_MOVE;
extern const unsigned int SPLICE_F_NONBLOCK;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define SPLICE_F_GIFT SYMBOLIC(SPLICE_F_GIFT)
#define SPLICE_F_MORE SYMBOLIC(SPLICE_F_MORE)
#define SPLICE_F_MOVE SYMBOLIC(SPLICE_F_MOVE)
#define SPLICE_F_NONBLOCK SYMBOLIC(SPLICE_F_NONBLOCK)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SPLICE_H_ */
