/*-*- mode:c;indent-tabs-mode:nil;c-basic-offset:2;tab-width:8;coding:utf-8 -*-│
│vi: set net ft=c ts=2 sts=2 sw=2 fenc=utf-8                                :vi│
╞══════════════════════════════════════════════════════════════════════════════╡
│ Copyright 2022 Justine Alexandra Roberts Tunney                              │
│                                                                              │
│ Permission to use, copy, modify, and/or distribute this software for         │
│ any purpose with or without fee is hereby granted, provided that the         │
│ above copyright notice and this permission notice appear in all copies.      │
│                                                                              │
│ THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL                │
│ WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED                │
│ WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE             │
│ AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL         │
│ DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR        │
│ PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER               │
│ TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR             │
│ PERFORMANCE OF THIS SOFTWARE.                                                │
╚─────────────────────────────────────────────────────────────────────────────*/
#include "libc/fmt/itoa.h"
#include "libc/intrin/describeflags.internal.h"
#include "libc/sysv/consts/ptrace.h"

#ifdef DescribePtraceEvent
#undef DescribePtraceEvent
#endif

const char *DescribePtraceEvent(char buf[32], int x) {
  if (x == PTRACE_EVENT_FORK) return "PTRACE_EVENT_FORK";
  if (x == PTRACE_EVENT_VFORK) return "PTRACE_EVENT_VFORK";
  if (x == PTRACE_EVENT_CLONE) return "PTRACE_EVENT_CLONE";
  if (x == PTRACE_EVENT_EXEC) return "PTRACE_EVENT_EXEC";
  if (x == PTRACE_EVENT_VFORK_DONE) return "PTRACE_EVENT_VFORK_DONE";
  if (x == PTRACE_EVENT_EXIT) return "PTRACE_EVENT_EXIT";
  if (x == PTRACE_EVENT_SECCOMP) return "PTRACE_EVENT_SECCOMP";
  if (x == PTRACE_EVENT_STOP) return "PTRACE_EVENT_STOP";
  FormatInt32(buf, x);
  return buf;
}