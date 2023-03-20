#ifndef COSMOPOLITAN_THIRD_PARTY_PYTHON_MODULES_WINREPARSE_H_
#define COSMOPOLITAN_THIRD_PARTY_PYTHON_MODULES_WINREPARSE_H_
#include "libc/nt/struct/reparsedatabuffer.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)

#define _Py_REPARSE_DATA_BUFFER  struct NtReparseDataBuffer
#define _Py_PREPARSE_DATA_BUFFER struct NtReparseDataBuffer*

#define _Py_REPARSE_DATA_BUFFER_HEADER_SIZE \
  offsetof(_Py_REPARSE_DATA_BUFFER, GenericReparseBuffer)
#define _Py_MAXIMUM_REPARSE_DATA_BUFFER_SIZE (16 * 1024)

#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_THIRD_PARTY_PYTHON_MODULES_WINREPARSE_H_ */
