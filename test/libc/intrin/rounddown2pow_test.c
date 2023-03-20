/*-*- mode:c;indent-tabs-mode:nil;c-basic-offset:2;tab-width:8;coding:utf-8 -*-│
│vi: set net ft=c ts=2 sts=2 sw=2 fenc=utf-8                                :vi│
╞══════════════════════════════════════════════════════════════════════════════╡
│ Copyright 2020 Justine Alexandra Roberts Tunney                              │
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
#include "libc/calls/calls.h"
#include "libc/intrin/bits.h"
#include "libc/testlib/testlib.h"

void SetUpOnce(void) {
  ASSERT_SYS(0, 0, pledge("stdio", 0));
}

TEST(_rounddown2pow, test) {
  EXPECT_EQ(0, _rounddown2pow(0));
  EXPECT_EQ(1, _rounddown2pow(1));
  EXPECT_EQ(2, _rounddown2pow(2));
  EXPECT_EQ(2, _rounddown2pow(3));
  EXPECT_EQ(4, _rounddown2pow(4));
  EXPECT_EQ(PAGESIZE / 2, _rounddown2pow(PAGESIZE - 1));
  EXPECT_EQ(PAGESIZE, _rounddown2pow(PAGESIZE));
  EXPECT_EQ(PAGESIZE, _rounddown2pow(PAGESIZE + 1));
  EXPECT_EQ(PAGESIZE / 2, _rounddown2pow(PAGESIZE - 1));
  EXPECT_EQ(PAGESIZE, _rounddown2pow(PAGESIZE));
  EXPECT_EQ(PAGESIZE, _rounddown2pow(PAGESIZE + 1));
}
