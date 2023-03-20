#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_IPPROTO_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_IPPROTO_H_
#include "libc/runtime/symbolic.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const int IPPROTO_AH;
extern const int IPPROTO_BEETPH;
extern const int IPPROTO_COMP;
extern const int IPPROTO_DCCP;
extern const int IPPROTO_DSTOPTS;
extern const int IPPROTO_EGP;
extern const int IPPROTO_ENCAP;
extern const int IPPROTO_ESP;
extern const int IPPROTO_FRAGMENT;
extern const int IPPROTO_GRE;
extern const int IPPROTO_HOPOPTS;
extern const int IPPROTO_ICMP;
extern const int IPPROTO_ICMPV6;
extern const int IPPROTO_IDP;
extern const int IPPROTO_IGMP;
extern const int IPPROTO_IP;
extern const int IPPROTO_IPIP;
extern const int IPPROTO_IPV6;
extern const int IPPROTO_MAX;
extern const int IPPROTO_MH;
extern const int IPPROTO_MPLS;
extern const int IPPROTO_MTP;
extern const int IPPROTO_NONE;
extern const int IPPROTO_PIM;
extern const int IPPROTO_PUP;
extern const int IPPROTO_RAW;
extern const int IPPROTO_ROUTING;
extern const int IPPROTO_RSVP;
extern const int IPPROTO_SCTP;
extern const int IPPROTO_TCP;
extern const int IPPROTO_TP;
extern const int IPPROTO_UDP;
extern const int IPPROTO_UDPLITE;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */

#define IPPROTO_IP   LITERALLY(0)
#define IPPROTO_ICMP LITERALLY(1)
#define IPPROTO_TCP  LITERALLY(6)
#define IPPROTO_UDP  LITERALLY(17)
#define IPPROTO_RAW  LITERALLY(255)
#define IPPROTO_MAX  LITERALLY(263) /* xxx */

#define IPPROTO_AH       SYMBOLIC(IPPROTO_AH)
#define IPPROTO_BEETPH   SYMBOLIC(IPPROTO_BEETPH)
#define IPPROTO_COMP     SYMBOLIC(IPPROTO_COMP)
#define IPPROTO_DCCP     SYMBOLIC(IPPROTO_DCCP)
#define IPPROTO_DSTOPTS  SYMBOLIC(IPPROTO_DSTOPTS)
#define IPPROTO_EGP      SYMBOLIC(IPPROTO_EGP)
#define IPPROTO_ENCAP    SYMBOLIC(IPPROTO_ENCAP)
#define IPPROTO_ESP      SYMBOLIC(IPPROTO_ESP)
#define IPPROTO_FRAGMENT SYMBOLIC(IPPROTO_FRAGMENT)
#define IPPROTO_GRE      SYMBOLIC(IPPROTO_GRE)
#define IPPROTO_HOPOPTS  SYMBOLIC(IPPROTO_HOPOPTS)
#define IPPROTO_ICMPV6   SYMBOLIC(IPPROTO_ICMPV6)
#define IPPROTO_IDP      SYMBOLIC(IPPROTO_IDP)
#define IPPROTO_IGMP     SYMBOLIC(IPPROTO_IGMP)
#define IPPROTO_IPIP     SYMBOLIC(IPPROTO_IPIP)
#define IPPROTO_IPV6     SYMBOLIC(IPPROTO_IPV6)
#define IPPROTO_MH       SYMBOLIC(IPPROTO_MH)
#define IPPROTO_MPLS     SYMBOLIC(IPPROTO_MPLS)
#define IPPROTO_MTP      SYMBOLIC(IPPROTO_MTP)
#define IPPROTO_NONE     SYMBOLIC(IPPROTO_NONE)
#define IPPROTO_PIM      SYMBOLIC(IPPROTO_PIM)
#define IPPROTO_PUP      SYMBOLIC(IPPROTO_PUP)
#define IPPROTO_ROUTING  SYMBOLIC(IPPROTO_ROUTING)
#define IPPROTO_RSVP     SYMBOLIC(IPPROTO_RSVP)
#define IPPROTO_SCTP     SYMBOLIC(IPPROTO_SCTP)
#define IPPROTO_TP       SYMBOLIC(IPPROTO_TP)
#define IPPROTO_UDPLITE  SYMBOLIC(IPPROTO_UDPLITE)

#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_IPPROTO_H_ */
