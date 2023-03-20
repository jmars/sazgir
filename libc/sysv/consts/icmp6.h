#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_ICMP6_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_ICMP6_H_
#include "libc/runtime/symbolic.h"

#define ICMP6_DST_UNREACH SYMBOLIC(ICMP6_DST_UNREACH)
#define ICMP6_DST_UNREACH_ADDR SYMBOLIC(ICMP6_DST_UNREACH_ADDR)
#define ICMP6_DST_UNREACH_ADMIN SYMBOLIC(ICMP6_DST_UNREACH_ADMIN)
#define ICMP6_DST_UNREACH_BEYONDSCOPE SYMBOLIC(ICMP6_DST_UNREACH_BEYONDSCOPE)
#define ICMP6_DST_UNREACH_NOPORT SYMBOLIC(ICMP6_DST_UNREACH_NOPORT)
#define ICMP6_DST_UNREACH_NOROUTE SYMBOLIC(ICMP6_DST_UNREACH_NOROUTE)
#define ICMP6_ECHO_REPLY SYMBOLIC(ICMP6_ECHO_REPLY)
#define ICMP6_ECHO_REQUEST SYMBOLIC(ICMP6_ECHO_REQUEST)
#define ICMP6_FILTER SYMBOLIC(ICMP6_FILTER)
#define ICMP6_INFOMSG_MASK SYMBOLIC(ICMP6_INFOMSG_MASK)
#define ICMP6_PACKET_TOO_BIG SYMBOLIC(ICMP6_PACKET_TOO_BIG)
#define ICMP6_PARAMPROB_HEADER SYMBOLIC(ICMP6_PARAMPROB_HEADER)
#define ICMP6_PARAMPROB_NEXTHEADER SYMBOLIC(ICMP6_PARAMPROB_NEXTHEADER)
#define ICMP6_PARAMPROB_OPTION SYMBOLIC(ICMP6_PARAMPROB_OPTION)
#define ICMP6_PARAM_PROB SYMBOLIC(ICMP6_PARAM_PROB)
#define ICMP6_ROUTER_RENUMBERING SYMBOLIC(ICMP6_ROUTER_RENUMBERING)
#define ICMP6_RR_FLAGS_FORCEAPPLY SYMBOLIC(ICMP6_RR_FLAGS_FORCEAPPLY)
#define ICMP6_RR_FLAGS_PREVDONE SYMBOLIC(ICMP6_RR_FLAGS_PREVDONE)
#define ICMP6_RR_FLAGS_REQRESULT SYMBOLIC(ICMP6_RR_FLAGS_REQRESULT)
#define ICMP6_RR_FLAGS_SPECSITE SYMBOLIC(ICMP6_RR_FLAGS_SPECSITE)
#define ICMP6_RR_FLAGS_TEST SYMBOLIC(ICMP6_RR_FLAGS_TEST)
#define ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME \
  SYMBOLIC(ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME)
#define ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME \
  SYMBOLIC(ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME)
#define ICMP6_RR_PCOUSE_RAFLAGS_AUTO SYMBOLIC(ICMP6_RR_PCOUSE_RAFLAGS_AUTO)
#define ICMP6_RR_PCOUSE_RAFLAGS_ONLINK SYMBOLIC(ICMP6_RR_PCOUSE_RAFLAGS_ONLINK)
#define ICMP6_RR_RESULT_FLAGS_FORBIDDEN \
  SYMBOLIC(ICMP6_RR_RESULT_FLAGS_FORBIDDEN)
#define ICMP6_RR_RESULT_FLAGS_OOB SYMBOLIC(ICMP6_RR_RESULT_FLAGS_OOB)
#define ICMP6_TIME_EXCEEDED SYMBOLIC(ICMP6_TIME_EXCEEDED)
#define ICMP6_TIME_EXCEED_REASSEMBLY SYMBOLIC(ICMP6_TIME_EXCEED_REASSEMBLY)
#define ICMP6_TIME_EXCEED_TRANSIT SYMBOLIC(ICMP6_TIME_EXCEED_TRANSIT)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const uint8_t ICMP6_DST_UNREACH;
extern const uint8_t ICMP6_DST_UNREACH_ADDR;
extern const uint8_t ICMP6_DST_UNREACH_ADMIN;
extern const uint8_t ICMP6_DST_UNREACH_BEYONDSCOPE;
extern const uint8_t ICMP6_DST_UNREACH_NOPORT;
extern const uint8_t ICMP6_DST_UNREACH_NOROUTE;
extern const uint8_t ICMP6_ECHO_REPLY;
extern const uint8_t ICMP6_ECHO_REQUEST;
extern const uint8_t ICMP6_FILTER;
extern const uint8_t ICMP6_INFOMSG_MASK;
extern const uint8_t ICMP6_PACKET_TOO_BIG;
extern const uint8_t ICMP6_PARAMPROB_HEADER;
extern const uint8_t ICMP6_PARAMPROB_NEXTHEADER;
extern const uint8_t ICMP6_PARAMPROB_OPTION;
extern const uint8_t ICMP6_PARAM_PROB;
extern const uint8_t ICMP6_ROUTER_RENUMBERING;
extern const uint8_t ICMP6_RR_FLAGS_FORCEAPPLY;
extern const uint8_t ICMP6_RR_FLAGS_PREVDONE;
extern const uint8_t ICMP6_RR_FLAGS_REQRESULT;
extern const uint8_t ICMP6_RR_FLAGS_SPECSITE;
extern const uint8_t ICMP6_RR_FLAGS_TEST;
extern const uint8_t ICMP6_RR_PCOUSE_FLAGS_DECRPLTIME;
extern const uint8_t ICMP6_RR_PCOUSE_FLAGS_DECRVLTIME;
extern const uint8_t ICMP6_RR_PCOUSE_RAFLAGS_AUTO;
extern const uint8_t ICMP6_RR_PCOUSE_RAFLAGS_ONLINK;
extern const uint8_t ICMP6_RR_RESULT_FLAGS_FORBIDDEN;
extern const uint8_t ICMP6_RR_RESULT_FLAGS_OOB;
extern const uint8_t ICMP6_TIME_EXCEEDED;
extern const uint8_t ICMP6_TIME_EXCEED_REASSEMBLY;
extern const uint8_t ICMP6_TIME_EXCEED_TRANSIT;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_ICMP6_H_ */
