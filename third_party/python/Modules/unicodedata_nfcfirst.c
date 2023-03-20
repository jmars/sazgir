#include "libc/nexgen32e/kompressor.h"
#include "third_party/python/Modules/unicodedata.h"
/* clang-format off */
/* GENERATED BY third_party/python/Tools/unicode/makeunicodedata.py 3.2 */

const _PyUnicode_Reindex _PyUnicode_NfcFirst[] = {
    {0x0003c,   2,   0},
    {0x00041,  15,   3},
    {0x00052,   8,  19},
    {0x00061,  15,  28},
    {0x00072,   8,  44},
    {0x000a8,   0,  53},
    {0x000c2,   0,  54},
    {0x000c4,   3,  55},
    {0x000ca,   0,  59},
    {0x000cf,   0,  60},
    {0x000d4,   2,  61},
    {0x000d8,   0,  64},
    {0x000dc,   0,  65},
    {0x000e2,   0,  66},
    {0x000e4,   3,  67},
    {0x000ea,   0,  71},
    {0x000ef,   0,  72},
    {0x000f4,   2,  73},
    {0x000f8,   0,  76},
    {0x000fc,   0,  77},
    {0x00102,   1,  78},
    {0x00112,   1,  80},
    {0x0014c,   1,  82},
    {0x0015a,   1,  84},
    {0x00160,   1,  86},
    {0x00168,   3,  88},
    {0x0017f,   0,  92},
    {0x001a0,   1,  93},
    {0x001af,   1,  95},
    {0x001b7,   0,  97},
    {0x001ea,   1,  98},
    {0x00226,   3, 100},
    {0x0022e,   1, 104},
    {0x00292,   0, 106},
    {0x00391,   0, 107},
    {0x00395,   0, 108},
    {0x00397,   0, 109},
    {0x00399,   0, 110},
    {0x0039f,   0, 111},
    {0x003a1,   0, 112},
    {0x003a5,   0, 113},
    {0x003a9,   0, 114},
    {0x003ac,   0, 115},
    {0x003ae,   0, 116},
    {0x003b1,   0, 117},
    {0x003b5,   0, 118},
    {0x003b7,   0, 119},
    {0x003b9,   0, 120},
    {0x003bf,   0, 121},
    {0x003c1,   0, 122},
    {0x003c5,   0, 123},
    {0x003c9,   2, 124},
    {0x003ce,   0, 127},
    {0x003d2,   0, 128},
    {0x00406,   0, 129},
    {0x00410,   0, 130},
    {0x00413,   0, 131},
    {0x00415,   3, 132},
    {0x0041a,   0, 136},
    {0x0041e,   0, 137},
    {0x00423,   0, 138},
    {0x00427,   0, 139},
    {0x0042b,   0, 140},
    {0x0042d,   0, 141},
    {0x00430,   0, 142},
    {0x00433,   0, 143},
    {0x00435,   3, 144},
    {0x0043a,   0, 148},
    {0x0043e,   0, 149},
    {0x00443,   0, 150},
    {0x00447,   0, 151},
    {0x0044b,   0, 152},
    {0x0044d,   0, 153},
    {0x00456,   0, 154},
    {0x00474,   1, 155},
    {0x004d8,   1, 157},
    {0x004e8,   1, 159},
    {0x00627,   0, 161},
    {0x00648,   0, 162},
    {0x0064a,   0, 163},
    {0x006c1,   0, 164},
    {0x006d2,   0, 165},
    {0x006d5,   0, 166},
    {0x00928,   0, 167},
    {0x00930,   0, 168},
    {0x00933,   0, 169},
    {0x009c7,   0, 170},
    {0x00b47,   0, 171},
    {0x00b92,   0, 172},
    {0x00bc6,   1, 173},
    {0x00c46,   0, 175},
    {0x00cbf,   0, 176},
    {0x00cc6,   0, 177},
    {0x00cca,   0, 178},
    {0x00d46,   1, 179},
    {0x00dd9,   0, 181},
    {0x00ddc,   0, 182},
    {0x01025,   0, 183},
    {0x01b05,   0, 184},
    {0x01b07,   0, 185},
    {0x01b09,   0, 186},
    {0x01b0b,   0, 187},
    {0x01b0d,   0, 188},
    {0x01b11,   0, 189},
    {0x01b3a,   0, 190},
    {0x01b3c,   0, 191},
    {0x01b3e,   1, 192},
    {0x01b42,   0, 194},
    {0x01e36,   1, 195},
    {0x01e5a,   1, 197},
    {0x01e62,   1, 199},
    {0x01ea0,   1, 201},
    {0x01eb8,   1, 203},
    {0x01ecc,   1, 205},
    {0x01f00,  17, 207},
    {0x01f18,   1, 225},
    {0x01f20,  17, 227},
    {0x01f38,   1, 245},
    {0x01f40,   1, 247},
    {0x01f48,   1, 249},
    {0x01f50,   1, 251},
    {0x01f59,   0, 253},
    {0x01f60,  16, 254},
    {0x01f74,   0, 271},
    {0x01f7c,   0, 272},
    {0x01fb6,   0, 273},
    {0x01fbf,   0, 274},
    {0x01fc6,   0, 275},
    {0x01ff6,   0, 276},
    {0x01ffe,   0, 277},
    {0x02190,   0, 278},
    {0x02192,   0, 279},
    {0x02194,   0, 280},
    {0x021d0,   0, 281},
    {0x021d2,   0, 282},
    {0x021d4,   0, 283},
    {0x02203,   0, 284},
    {0x02208,   0, 285},
    {0x0220b,   0, 286},
    {0x02223,   0, 287},
    {0x02225,   0, 288},
    {0x0223c,   0, 289},
    {0x02243,   0, 290},
    {0x02245,   0, 291},
    {0x02248,   0, 292},
    {0x0224d,   0, 293},
    {0x02261,   0, 294},
    {0x02264,   1, 295},
    {0x02272,   1, 297},
    {0x02276,   1, 299},
    {0x0227a,   3, 301},
    {0x02282,   1, 305},
    {0x02286,   1, 307},
    {0x02291,   1, 309},
    {0x022a2,   0, 311},
    {0x022a8,   1, 312},
    {0x022ab,   0, 314},
    {0x022b2,   3, 315},
    {0x03046,   0, 319},
    {0x0304b,   0, 320},
    {0x0304d,   0, 321},
    {0x0304f,   0, 322},
    {0x03051,   0, 323},
    {0x03053,   0, 324},
    {0x03055,   0, 325},
    {0x03057,   0, 326},
    {0x03059,   0, 327},
    {0x0305b,   0, 328},
    {0x0305d,   0, 329},
    {0x0305f,   0, 330},
    {0x03061,   0, 331},
    {0x03064,   0, 332},
    {0x03066,   0, 333},
    {0x03068,   0, 334},
    {0x0306f,   0, 335},
    {0x03072,   0, 336},
    {0x03075,   0, 337},
    {0x03078,   0, 338},
    {0x0307b,   0, 339},
    {0x0309d,   0, 340},
    {0x030a6,   0, 341},
    {0x030ab,   0, 342},
    {0x030ad,   0, 343},
    {0x030af,   0, 344},
    {0x030b1,   0, 345},
    {0x030b3,   0, 346},
    {0x030b5,   0, 347},
    {0x030b7,   0, 348},
    {0x030b9,   0, 349},
    {0x030bb,   0, 350},
    {0x030bd,   0, 351},
    {0x030bf,   0, 352},
    {0x030c1,   0, 353},
    {0x030c4,   0, 354},
    {0x030c6,   0, 355},
    {0x030c8,   0, 356},
    {0x030cf,   0, 357},
    {0x030d2,   0, 358},
    {0x030d5,   0, 359},
    {0x030d8,   0, 360},
    {0x030db,   0, 361},
    {0x030ef,   3, 362},
    {0x030fd,   0, 366},
    {0x11099,   0, 367},
    {0x1109b,   0, 368},
    {0x110a5,   0, 369},
    {0x11131,   1, 370},
    {0x11347,   0, 372},
    {0x114b9,   0, 373},
    {0x115b8,   1, 374},
    {0x11935,   0, 376},
    {0}
};

