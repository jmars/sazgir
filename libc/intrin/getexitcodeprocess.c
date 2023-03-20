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
#include "libc/intrin/strace.internal.h"
#include "libc/calls/syscall_support-nt.internal.h"
#include "libc/nt/accounting.h"
#include "libc/nt/thunk/msabi.h"

__msabi extern typeof(GetExitCodeProcess) *const __imp_GetExitCodeProcess;

/**
 * Obtains exit code for process.
 * @note this wrapper takes care of ABI, STRACE(), and __winerr()
 */
textwindows int32_t GetExitCodeProcess(int64_t hProcess, uint32_t *lpExitCode) {
  int32_t rc;
  rc = __imp_GetExitCodeProcess(hProcess, lpExitCode);
  if (!rc) __winerr();
  NTTRACE("GetExitCodeProcess(%ld, [%u]) → %u% m", hProcess, *lpExitCode, rc);
  return rc;
}
