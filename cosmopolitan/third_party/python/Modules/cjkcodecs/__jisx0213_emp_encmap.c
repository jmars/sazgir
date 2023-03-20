#include "libc/x/x.h"
/* clang-format off */

static _Atomic(void *) __jisx0213_emp_encmap_ptr;
static const unsigned char __jisx0213_emp_encmap_rodata[] = {
  0xed, 0x5a, 0xdb, 0x4e, 0xe2, 0x50, 0x14, 0xfd, 0x16, 0x40, 0xe2, 0x80, 0x8e,
  0x38, 0x55, 0xbc, 0x30, 0x82, 0x0e, 0x3a, 0xde, 0x47, 0x1c, 0x2f, 0x28, 0x2a,
  0x5e, 0x82, 0x62, 0xbc, 0x11, 0x44, 0x0b, 0x22, 0xca, 0xbf, 0x90, 0x96, 0xa4,
  0x0f, 0x5c, 0xfe, 0x0c, 0x28, 0x2d, 0x42, 0x29, 0xb4, 0x43, 0x7c, 0x60, 0x46,
  0x87, 0x02, 0x07, 0xda, 0xd2, 0xd2, 0xae, 0x07, 0x42, 0x0e, 0xe7, 0xac, 0xbd,
  0xd6, 0xda, 0xfb, 0x90, 0x94, 0xa0, 0x1d, 0x61, 0x15, 0x0b, 0x4d, 0x0c, 0xf4,
  0xc4, 0x50, 0xed, 0xc4, 0x48, 0x6c, 0x22, 0xb6, 0x18, 0xf3, 0xc7, 0xa4, 0xe3,
  0x23, 0xdc, 0x42, 0x4b, 0x28, 0xa6, 0xac, 0xbe, 0x6a, 0x11, 0x3d, 0x32, 0x88,
  0xb0, 0x2a, 0x24, 0x89, 0x6f, 0x08, 0x84, 0x4c, 0x21, 0xb3, 0xa2, 0xf4, 0xe7,
  0x87, 0xa2, 0xa7, 0x60, 0x15, 0xd9, 0xea, 0xda, 0xff, 0x36, 0xe2, 0x42, 0x8e,
  0xd4, 0xbb, 0xc4, 0xee, 0x38, 0x42, 0x6a, 0x0a, 0x1d, 0xc1, 0x88, 0x5a, 0xd0,
  0xcf, 0x6b, 0x10, 0xca, 0xf3, 0x77, 0x0a, 0x6a, 0x45, 0x5d, 0x68, 0x6f, 0xfc,
  0xd9, 0x4d, 0x60, 0xfb, 0x8f, 0xba, 0xd2, 0xe9, 0xf9, 0x70, 0xfa, 0x18, 0x95,
  0xe7, 0x4c, 0xdc, 0x70, 0xea, 0xbe, 0x06, 0x76, 0x14, 0x40, 0xd7, 0x4d, 0x9d,
  0x68, 0x78, 0x6c, 0x52, 0x09, 0x46, 0x95, 0x7d, 0x67, 0xf5, 0x71, 0x28, 0x7e,
  0x6a, 0xb2, 0xc5, 0x97, 0xe2, 0xfd, 0xea, 0xd0, 0xe3, 0xd8, 0xed, 0x91, 0x37,
  0x67, 0x3c, 0x62, 0x8a, 0xc6, 0x47, 0xb1, 0x49, 0x0c, 0xec, 0xdc, 0x14, 0xd6,
  0x69, 0xc5, 0xef, 0x00, 0x27, 0x2d, 0x1d, 0x54, 0xf9, 0xd9, 0xe0, 0xcc, 0x5c,
  0x7d, 0x6d, 0x16, 0x80, 0x71, 0x19, 0xe3, 0x3b, 0xed, 0x55, 0x6c, 0x0d, 0xf3,
  0x39, 0x0e, 0x31, 0x79, 0x4d, 0xa7, 0x17, 0x63, 0x55, 0xd4, 0x70, 0x8b, 0x69,
  0x13, 0xdb, 0xcc, 0x50, 0x42, 0x4d, 0x82, 0x1b, 0xa3, 0x89, 0xcd, 0xc4, 0x85,
  0xc4, 0x13, 0xba, 0x4b, 0x04, 0x12, 0x03, 0x49, 0x28, 0xf9, 0x79, 0xdd, 0x90,
  0x34, 0x26, 0xe5, 0x93, 0xb4, 0x39, 0x39, 0xfe, 0x41, 0xed, 0x74, 0xd2, 0x99,
  0x1c, 0x48, 0x71, 0xed, 0x7e, 0x4d, 0x5a, 0x60, 0xa1, 0x15, 0xe9, 0x52, 0x96,
  0x94, 0x7c, 0x27, 0xd7, 0x5e, 0xd3, 0x6e, 0x4d, 0xcd, 0xd4, 0x5e, 0x17, 0xea,
  0x2e, 0x96, 0xea, 0xef, 0x56, 0xea, 0xef, 0xe6, 0x53, 0xbb, 0xa9, 0xbd, 0x7f,
  0x7c, 0x3a, 0xdb, 0xf4, 0x7c, 0x98, 0x52, 0xf2, 0xf7, 0x42, 0x28, 0xf5, 0xd4,
  0x03, 0xff, 0xc6, 0xb4, 0xb0, 0xfc, 0x01, 0xd8, 0x9e, 0x9e, 0x4d, 0xcf, 0x73,
  0x56, 0x99, 0x4b, 0xbb, 0x5a, 0x28, 0xd8, 0xe0, 0x45, 0xa1, 0x21, 0xc8, 0x8f,
  0x1f, 0x28, 0x78, 0x96, 0x66, 0x55, 0xb0, 0xd7, 0x80, 0x29, 0x5c, 0xa5, 0xfd,
  0xc0, 0xb9, 0xc1, 0x69, 0x5d, 0x66, 0x3c, 0xa3, 0xe4, 0x94, 0x4f, 0x83, 0x2b,
  0x4d, 0xfc, 0xc3, 0xa4, 0xf0, 0x0a, 0x8e, 0x32, 0xea, 0xac, 0xb7, 0xd1, 0x27,
  0x1e, 0x53, 0x3a, 0xc9, 0x1c, 0x67, 0xa0, 0xec, 0x52, 0xf6, 0x57, 0x56, 0xcd,
  0xb5, 0xf7, 0x38, 0x13, 0xb9, 0x0b, 0xe7, 0x59, 0x6d, 0x6e, 0x2c, 0xa7, 0xcc,
  0xac, 0xa7, 0x73, 0xb7, 0xa1, 0xed, 0x5c, 0x24, 0x37, 0x82, 0x03, 0x3f, 0x53,
  0xe1, 0x66, 0x7c, 0x01, 0x77, 0xe3, 0xbc, 0x77, 0x1f, 0x17, 0xc3, 0xb7, 0xb7,
  0xeb, 0x2a, 0x57, 0x38, 0xdc, 0x90, 0x23, 0x84, 0x3f, 0xe3, 0xea, 0x1d, 0xfe,
  0x0b, 0x4d, 0x9e, 0x1f, 0x9e, 0x01, 0x40, 0x1e, 0x5d, 0xfe, 0x4b, 0x5e, 0x38,
  0x57, 0xc3, 0x79, 0x6b, 0x5e, 0xde, 0x7d, 0x89, 0x3e, 0x49, 0x51, 0xd5, 0x72,
  0xde, 0x10, 0x56, 0xef, 0x0c, 0x18, 0x0e, 0xf3, 0x4b, 0x22, 0x67, 0x06, 0x37,
  0x9c, 0xfd, 0x60, 0x7e, 0xa7, 0x85, 0x0e, 0x88, 0xb0, 0x11, 0x56, 0x82, 0xf3,
  0xb9, 0x94, 0xd8, 0x22, 0xdc, 0x04, 0xa8, 0x96, 0x63, 0xc2, 0x17, 0x7e, 0x20,
  0xf8, 0xf5, 0xf7, 0xc8, 0xc1, 0x17, 0x7a, 0x5f, 0x87, 0x09, 0xb9, 0x4e, 0xca,
  0x2b, 0x80, 0xf2, 0x48, 0x8b, 0xbd, 0x5a, 0x72, 0x80, 0x14, 0x5b, 0xff, 0x20,
  0xa9, 0xac, 0x9b, 0x6d, 0xe2, 0xf0, 0x3b, 0xd2, 0x51, 0x0e, 0x66, 0x72, 0xbc,
  0xe1, 0x39, 0xab, 0xe4, 0x52, 0xb5, 0x2b, 0xac, 0xcf, 0xed, 0xc3, 0x41, 0x5e,
  0x01, 0x64, 0x73, 0x43, 0x06, 0xc8, 0x30, 0x69, 0x2e, 0x08, 0xaf, 0xcb, 0x52,
  0x58, 0x2c, 0x38, 0x39, 0xeb, 0xec, 0x17, 0x0e, 0xba, 0xd0, 0xe0, 0x2e, 0xf4,
  0x6f, 0x3f, 0x4f, 0x0a, 0x9e, 0x1e, 0xb8, 0xbb, 0x16, 0xa9, 0xa6, 0x5f, 0x90,
  0x3a, 0x0f, 0x12, 0x9b, 0x07, 0xf7, 0xf3, 0x82, 0x04, 0xff, 0x03, 0xb2, 0xf0,
  0xd6, 0x7f, 0xb7, 0x65, 0xe3, 0x6d, 0x2c, 0xc2, 0x5b, 0xd7, 0xde, 0xe0, 0x3e,
  0x48, 0x48, 0x53, 0xd4, 0x16, 0xa3, 0x6f, 0x2b, 0x91, 0xb1, 0xa2, 0x30, 0xfc,
  0x13, 0xc5, 0x8b, 0xe2, 0x39, 0x2f, 0xdc, 0x37, 0x45, 0x5f, 0x51, 0xec, 0x74,
  0x1e, 0x8a, 0xc6, 0x92, 0xa1, 0xd4, 0xe1, 0x13, 0x7e, 0x49, 0x0e, 0xfd, 0xbf,
  0x6d, 0x7a, 0x1f, 0xc6, 0x4b, 0x33, 0x6d, 0xbb, 0xb0, 0x09, 0xea, 0xd7, 0x5e,
  0x72, 0x96, 0x3c, 0xa5, 0x50, 0xc3, 0x1a, 0xe1, 0xff, 0x56, 0x9f, 0x4b, 0x7a,
  0xca, 0x44, 0x41, 0xd4, 0x34, 0x65, 0xa7, 0x04, 0xff, 0xc5, 0x81, 0x5a, 0x79,
  0x69, 0xb4, 0xee, 0xa2, 0xd8, 0x3e, 0xc7, 0x31, 0xf5, 0xfb, 0xc5, 0x2b, 0x39,
  0x97, 0x37, 0xd4, 0xb3, 0x6c, 0x93, 0x8f, 0x52, 0x9a, 0xf2, 0x70, 0x99, 0x97,
  0x27, 0xbf, 0xf2, 0xe6, 0x3b, 0x8f, 0x83, 0x07, 0xb6, 0xbd, 0x0e, 0x39, 0x2e,
  0xca, 0xde, 0xb2, 0xf0, 0x99, 0xdd, 0x97, 0x03, 0xe5, 0x68, 0xc3, 0x3a, 0x1a,
  0x1a, 0x9c, 0xed, 0x2b, 0x2d, 0x9c, 0xd2, 0x61, 0x9e, 0xb9, 0x27, 0x68, 0x71,
  0xa6, 0x72, 0xb2, 0x45, 0x1d, 0xdb, 0x87, 0xcf, 0xad, 0xf4, 0x86, 0x80, 0xba,
  0x1c, 0xf4, 0x1e, 0xcd, 0xca, 0x1c, 0x07, 0xb2, 0x77, 0xc0, 0x3f, 0x8e, 0x68,
  0x37, 0x50, 0x2a, 0x67, 0xb2, 0xc8, 0xf0, 0xa2, 0x0f, 0x3a, 0x7d, 0x49, 0x5f,
  0xa9, 0xf3, 0x2a, 0x19, 0xdc, 0xd3, 0xda, 0x4a, 0xab, 0x3d, 0xba, 0xca, 0x54,
  0xc5, 0x5e, 0x59, 0xaf, 0xf4, 0x7b, 0x16, 0xce, 0x8a, 0x4b, 0x54, 0x8f, 0xee,
  0x4a, 0xb0, 0x32, 0x5c, 0x5d, 0xab, 0xba, 0xaa, 0xfc, 0xf2, 0xae, 0x73, 0xf0,
  0xb9, 0xab, 0xbd, 0x4e, 0xf8, 0xb0, 0x07, 0x0a, 0x2e, 0x81, 0x6a, 0xfa, 0x9b,
  0xec, 0xbe, 0xab, 0xea, 0x99, 0x21, 0xa6, 0x5d, 0x26, 0x03, 0x23, 0x87, 0x99,
  0x37, 0x33, 0xac, 0x82, 0x00, 0x31, 0xde, 0xe8, 0x3e, 0x73, 0xc0, 0xf8, 0x18,
  0x3f, 0xa0, 0xef, 0x80, 0xa2, 0x72, 0xea, 0x1e, 0x41, 0xe6, 0x0f,
};

optimizesize void *__jisx0213_emp_encmap(void) {
  return xload(&__jisx0213_emp_encmap_ptr,
               __jisx0213_emp_encmap_rodata,
               934, 17574); /* 5.31467% profit */
}
