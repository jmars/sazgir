#include "libc/x/x.h"
/* clang-format off */

static _Atomic(void *) big5hkscs_decmap_ptr;
static const unsigned char big5hkscs_decmap_rodata[] = {
  0xed, 0xcf, 0x3d, 0x0e, 0x01, 0x51, 0x00, 0x45, 0xe1, 0x37, 0x18, 0xff, 0x66,
  0x18, 0x63, 0x24, 0x1a, 0x8d, 0x5d, 0x68, 0xce, 0x0e, 0x48, 0x14, 0x0a, 0x8d,
  0x46, 0x62, 0x0b, 0xf6, 0x40, 0x42, 0xa2, 0x50, 0x68, 0xa6, 0x91, 0xb0, 0x17,
  0x12, 0x05, 0x89, 0x42, 0xa3, 0xb4, 0x07, 0x37, 0x5e, 0xa2, 0xd5, 0xe8, 0x14,
  0x73, 0x92, 0xaf, 0xbf, 0xd7, 0x98, 0xa4, 0xa4, 0xef, 0x39, 0x86, 0x59, 0xd7,
  0x70, 0xd8, 0x19, 0x34, 0x71, 0x50, 0x27, 0xc5, 0xeb, 0x91, 0x42, 0x71, 0x1a,
  0x8d, 0x33, 0xa8, 0xed, 0xf2, 0xba, 0xbb, 0x68, 0x9b, 0x45, 0xa3, 0x1c, 0x6a,
  0xe5, 0xd1, 0xcd, 0xda, 0x14, 0xd0, 0xb0, 0x88, 0xa2, 0x12, 0xba, 0x58, 0xeb,
  0x32, 0x1a, 0x54, 0x50, 0xe0, 0xa1, 0xb3, 0xb5, 0xf4, 0x51, 0xaf, 0x8a, 0xbc,
  0x1a, 0x3a, 0x5a, 0xff, 0xf8, 0x7d, 0x1e, 0xc4, 0x7a, 0x06, 0x68, 0x5f, 0xff,
  0xcf, 0x7d, 0xbf, 0x34, 0x0d, 0xaf, 0x5a, 0x85, 0xa8, 0xdf, 0x40, 0x7e, 0x84,
  0x4e, 0xd6, 0xa2, 0xf9, 0xf9, 0xf5, 0x06,
};

optimizesize void *big5hkscs_decmap(void) {
  return xload(&big5hkscs_decmap_ptr,
               big5hkscs_decmap_rodata,
               150, 1024); /* 14.6484% profit */
}
