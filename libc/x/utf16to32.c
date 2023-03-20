/*-*- mode:c;indent-tabs-mode:nil;c-basic-offset:2;tab-width:8;coding:utf-8 -*-│
│vi: set net ft=c ts=2 sts=2 sw=2 fenc=utf-8                                :vi│
╞══════════════════════════════════════════════════════════════════════════════╡
│ Copyright 2021 Justine Alexandra Roberts Tunney                              │
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
#include "libc/mem/mem.h"
#include "libc/str/str.h"
#include "libc/str/utf16.h"
#include "libc/x/x.h"

/**
 * Transcodes UTF-16 to UTF-32.
 *
 * @param p is input value
 * @param n if -1 implies strlen
 * @param z if non-NULL receives output length
 */
wchar_t *utf16to32(const char16_t *p, size_t n, size_t *z) {
  wint_t x, y;
  wchar_t *r, *q;
  unsigned m, j, w;
  const char16_t *e;
  int16_t v1[8], v2[8], v3[8], vz[8];
  if (z) *z = 0;
  if (n == -1) n = p ? strlen16(p) : 0;
  if ((q = r = malloc(n * 4 + 8 + 1))) {
    for (e = p + n; p < e;) {
      x = *p++ & 0xffff;
      if (!IsUcs2(x)) {
        if (p < e) {
          y = *p++ & 0xffff;
          x = MergeUtf16(x, y);
        } else {
          x = 0xFFFD;
        }
      }
      *q++ = x;
    }
    if (z) *z = q - r;
    *q++ = '\0';
    if ((q = realloc(r, (q - r) * sizeof(*r)))) r = q;
  }
  return r;
}
