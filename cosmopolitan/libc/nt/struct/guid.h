#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_GUID_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_GUID_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

struct NtGuid {
  uint32_t Data1;
  uint16_t Data2;
  uint16_t Data3;
  uint8_t Data4[8];
};

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_GUID_H_ */
