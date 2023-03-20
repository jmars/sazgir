#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_PT_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_PT_H_
#include "libc/sysv/consts/ptrace.h"

#define PT_ATTACH      PTRACE_ATTACH
#define PT_CONTINUE    PTRACE_CONT
#define PT_DETACH      PTRACE_DETACH
#define PT_GETEVENTMSG PTRACE_GETEVENTMSG
#define PT_GETFPREGS   PTRACE_GETFPREGS
#define PT_GETFPXREGS  PTRACE_GETFPXREGS
#define PT_GETREGS     PTRACE_GETREGS
#define PT_GETSIGINFO  PTRACE_GETSIGINFO
#define PT_KILL        PTRACE_KILL
#define PT_READ_D      PTRACE_PEEKDATA
#define PT_READ_I      PTRACE_PEEKTEXT
#define PT_READ_U      PTRACE_PEEKUSER
#define PT_SETFPREGS   PTRACE_SETFPREGS
#define PT_SETFPXREGS  PTRACE_SETFPXREGS
#define PT_SETOPTIONS  PTRACE_SETOPTIONS
#define PT_SETREGS     PTRACE_SETREGS
#define PT_SETSIGINFO  PTRACE_SETSIGINFO
#define PT_STEP        PTRACE_SINGLESTEP
#define PT_SYSCALL     PTRACE_SYSCALL
#define PT_WRITE_D     PTRACE_POKEDATA
#define PT_WRITE_I     PTRACE_POKETEXT
#define PT_WRITE_U     PTRACE_POKEUSER

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_PT_H_ */