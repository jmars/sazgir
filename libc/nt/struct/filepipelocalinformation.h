#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_FILEPIPELOCALINFORMATION_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_FILEPIPELOCALINFORMATION_H_
#if !(__ASSEMBLER__ + __LINKER__ + 0)

struct NtFilePipeLocalInformation {
  uint32_t NamedPipeType;
  uint32_t NamedPipeConfiguration;
  uint32_t MaximumInstances;
  uint32_t CurrentInstances;
  uint32_t InboundQuota;
  uint32_t ReadDataAvailable;
  uint32_t OutboundQuota;
  uint32_t WriteQuotaAvailable;
  uint32_t NamedPipeState;
  uint32_t NamedPipeEnd;
};

#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_FILEPIPELOCALINFORMATION_H_ */
