#ifndef EXPAT_CONFIG_H
#define EXPAT_CONFIG_H
#include "third_party/python/pyconfig.h"

#ifdef WORDS_BIGENDIAN
#define BYTEORDER 4321
#else
#define BYTEORDER 1234
#endif

#define XML_NS            1
#define XML_DTD           1
#define XML_CONTEXT_BYTES 1024

#endif /* EXPAT_CONFIG_H */
