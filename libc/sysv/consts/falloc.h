#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_FALLOC_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_FALLOC_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int FALLOC_FL_KEEP_SIZE;
extern const int FALLOC_FL_PUNCH_HOLE;
extern const int FALLOC_FL_NO_HIDE_STALE;
extern const int FALLOC_FL_COLLAPSE_RANGE;
extern const int FALLOC_FL_ZERO_RANGE;
extern const int FALLOC_FL_INSERT_RANGE;
extern const int FALLOC_FL_UNSHARE_RANGE;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define FALLOC_FL_KEEP_SIZE SYMBOLIC(FALLOC_FL_KEEP_SIZE)
#define FALLOC_FL_PUNCH_HOLE SYMBOLIC(FALLOC_FL_PUNCH_HOLE)
#define FALLOC_FL_NO_HIDE_STALE SYMBOLIC(FALLOC_FL_NO_HIDE_STALE)
#define FALLOC_FL_COLLAPSE_RANGE SYMBOLIC(FALLOC_FL_COLLAPSE_RANGE)
#define FALLOC_FL_ZERO_RANGE SYMBOLIC(FALLOC_FL_ZERO_RANGE)
#define FALLOC_FL_INSERT_RANGE SYMBOLIC(FALLOC_FL_INSERT_RANGE)
#define FALLOC_FL_UNSHARE_RANGE SYMBOLIC(FALLOC_FL_UNSHARE_RANGE)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_FALLOC_H_ */
