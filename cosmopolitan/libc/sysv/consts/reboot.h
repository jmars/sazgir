#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_REBOOT_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_REBOOT_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int RB_AUTOBOOT;
extern const int RB_POWER_OFF;
extern const int RB_POWERDOWN;
extern const int RB_POWEROFF;
extern const int RB_HALT_SYSTEM;
extern const int RB_HALT;
extern const int RB_SW_SUSPEND;
extern const int RB_KEXEC;
extern const int RB_ENABLE_CAD;
extern const int RB_DISABLE_CAD;
extern const int RB_NOSYNC;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define RB_AUTOBOOT    SYMBOLIC(RB_AUTOBOOT)
#define RB_POWER_OFF   SYMBOLIC(RB_POWER_OFF)
#define RB_POWERDOWN   SYMBOLIC(RB_POWERDOWN)
#define RB_POWEROFF    SYMBOLIC(RB_POWEROFF)
#define RB_HALT_SYSTEM SYMBOLIC(RB_HALT_SYSTEM)
#define RB_HALT        SYMBOLIC(RB_HALT)
#define RB_SW_SUSPEND  SYMBOLIC(RB_SW_SUSPEND)
#define RB_KEXEC       SYMBOLIC(RB_KEXEC)
#define RB_ENABLE_CAD  SYMBOLIC(RB_ENABLE_CAD)
#define RB_DISABLE_CAD SYMBOLIC(RB_DISABLE_CAD)
#define RB_NOSYNC      SYMBOLIC(RB_NOSYNC)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_REBOOT_H_ */