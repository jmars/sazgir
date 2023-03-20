#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_NONPAGEDDEBUGINFO_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_NONPAGEDDEBUGINFO_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)

struct NtNonPagedDebugInfo {
  uint16_t Signature;
  uint16_t Flags;
  uint32_t Size;
  uint16_t Machine;
  uint16_t Characteristics;
  uint32_t TimeDateStamp;
  uint32_t CheckSum;
  uint32_t SizeOfImage;
  uint64_t ImageBase;
};

#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_NONPAGEDDEBUGINFO_H_ */
