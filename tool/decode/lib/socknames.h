#ifndef COSMOPOLITAN_TOOL_DECODE_LIB_SOCKNAMES_H_
#define COSMOPOLITAN_TOOL_DECODE_LIB_SOCKNAMES_H_
#include "tool/decode/lib/idname.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const struct IdName kAddressFamilyNames[];
extern const struct IdName kSockTypeNames[];
extern const struct IdName kAddrInfoFlagNames[];
extern const struct IdName kProtocolNames[];

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_TOOL_DECODE_LIB_SOCKNAMES_H_ */
