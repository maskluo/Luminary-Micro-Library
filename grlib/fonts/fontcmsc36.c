//*****************************************************************************
//
// fontcmsc36.c - Font definition for the 36 point Cmsc font.
//
// Copyright (c) 2008-2010 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 6594 of the Stellaris Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Style: cmsc
//     Size: 36 point
//     Bold: no
//     Italic: no
//     Memory usage: 4764 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 36 point Cmsc font.
//
//*****************************************************************************
static const unsigned char g_pucCmsc36Data[4564] =
{
      5,  14,   0,  64,  96,  30,   7, 130,  68,  52,  52,  52,
     52,  52,  52,  66,  82,  82,  82,  82,  82,  82,  82,  82,
     82,  82,  81, 240, 194,  68,  52,  66,   0,   8,  48,  27,
     16,   0,   6,  19,  83,  84,  53,  53,  53,  68,  68, 113,
    113, 113, 113,  97, 113, 113, 113,  97, 113,  97, 113,   0,
     48,  96,  98,  30,   0,  12, 113, 129, 240,  81, 114, 240,
     66, 113, 240,  81, 129, 240,  81, 114, 240,  66, 114, 240,
     66, 113, 240,  81, 129, 240,  81, 114, 240,  66, 113, 240,
     82, 113, 240,  81, 114, 175,  12, 194, 113, 240,  81, 114,
    240,  81, 114, 240,  66, 113, 240,  82, 113, 240,  81, 114,
    207,  12, 162, 113, 240,  81, 114, 240,  81, 114, 240,  66,
    113, 240,  81, 129, 240,  81, 114, 240,  66, 114, 240,  66,
    113, 240,  81, 129, 240,  81, 114, 240,  66, 113, 240,  82,
    113,   0,   9,  64,  69,  17, 240, 129, 240,  17, 230, 146,
     33,  50,  98,  49,  81,  81,  65,  97,  50,  65,  67,  50,
     65,  67,  50,  65,  67,  51,  49, 164,  33, 180,  17, 184,
    169, 168, 183, 161,  36, 161,  67, 145,  67,  51,  49,  82,
     51,  49,  82,  51,  49,  82,  49,  81,  82,  65,  65,  66,
     81,  65,  50, 114,  33,  34, 151, 209, 240,  17,   0,  16,
     16,  96,  30,  67, 242, 131,  34, 210, 130,  66, 163, 131,
     68, 100, 146,  97,  38,  19, 131,  97, 146, 147,  97, 130,
    163,  97, 115, 163,  97, 114, 179,  97,  98, 195,  97,  83,
    210,  97,  82, 227,  65,  82, 240,  18,  65,  82, 240,  34,
     33,  82, 240,  82,  82, 240, 210,  86, 240,  18,  82,  81,
    226,  83,  81, 226,  82, 113, 194,  83, 113, 178,  99, 113,
    178,  99, 113, 162, 115, 113, 161, 131, 113, 146, 146, 113,
    130, 163,  81, 145, 194,  81, 130, 195,  49, 145, 244,   0,
     27,  83,  29, 240, 240, 116, 240, 146,  33, 240, 130,  65,
    240, 114,  65, 240,  99,  65, 240,  99,  65, 240,  99,  65,
    240,  99,  49, 240, 115,  49, 240, 115,  33, 240, 147,  17,
    240, 148, 136, 147, 179, 210, 193, 212, 161, 209,  34, 161,
    193,  51, 129, 193,  83,  97, 193,  99,  97, 178, 115,  65,
    179, 131,  33, 195, 131,  17, 211, 148, 145,  52, 147, 145,
     68, 117, 113, 100,  66,  52,  66, 149, 133,   0,  33,  48,
     16,   8, 240, 163,  84,  53,  68, 113, 113,  97, 113,  97,
     97,   0,  24,  96,  40,  13, 130, 162, 162, 162, 162, 178,
    162, 178, 163, 162, 163, 163, 163, 162, 163, 163, 163, 163,
    163, 163, 163, 163, 163, 163, 179, 163, 163, 178, 179, 178,
    178, 194, 178, 194, 194, 194, 194,  48,  40,  12,   1, 178,
    178, 178, 178, 162, 178, 163, 162, 162, 163, 147, 162, 163,
    147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 146, 162,
    147, 146, 162, 147, 146, 146, 162, 146, 146, 161, 161, 176,
     33,  17,  98, 242, 242, 242, 146,  66,  66,  51,  50,  51,
     83,  18,  19, 147,  18, 210, 211,  18, 131,  34,  35,  67,
     50,  51, 146, 242, 242, 242,   0,  45,  96,  57,  28,   0,
     22,  65, 240, 193, 240, 193, 240, 193, 240, 193, 240, 193,
    240, 193, 240, 193, 240, 193, 240, 193, 240, 193, 240, 193,
    255,  10, 241, 240, 193, 240, 193, 240, 193, 240, 193, 240,
    193, 240, 193, 240, 193, 240, 193, 240, 193, 240, 193, 240,
    193, 240, 193,   0,  19,  48,  17,   7,   0,  21,   3,  68,
     52,  52,  97,  97,  97,  81,  97,  81,  81, 240,  80,   9,
     13,   0,  30, 122,  58,   0,  26,  48,  11,   7,   0,  21,
     18,  68,  52,  66,   0,   8,  48,  77,  18, 225, 240,  18,
    240,  17, 240,  18, 240,  18, 240,  17, 240,  18, 240,  17,
    240,  33, 240,  18, 240,  17, 240,  18, 240,  18, 240,  17,
    240,  18, 240,  17, 240,  18, 240,  18, 240,  17, 240,  18,
    240,  18, 240,  17, 240,  18, 240,  17, 240,  18, 240,  18,
    240,  17, 240,  18, 240,  17, 240,  33, 240,  18, 240,  17,
    240,  18, 240,  18, 240,  17, 240,  18, 240,  17, 240,  32,
     55,  19,   0,   7, 102, 194,  67, 146,  99, 114, 130,  99,
    131,  82, 162,  82, 162,  67, 163,  51, 163,  51, 163,  51,
    163,  51, 163,  51, 163,  51, 163,  51, 163,  51, 163,  51,
    163,  51, 163,  51, 163,  66, 162,  83, 131,  98, 130, 115,
     99, 131,  67, 182,   0,  22,  48,  33,  16,   0,   6, 113,
    226, 196, 132,  19, 211, 211, 211, 211, 211, 211, 211, 211,
    211, 211, 211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
    141,   0,  18,  48,  44,  18,   0,   7,  53, 178,  67, 129,
    115,  97, 147,  66, 163,  51, 147,  52, 131,  52, 131,  66,
    147, 243, 227, 243, 227, 242, 242, 242, 242, 242, 242, 113,
    114, 129,  98, 145,  82, 161,  77,  93,  78,   0,  20,  96,
     51,  19,   0,   7, 102, 178,  83, 129, 131,  99, 116,  84,
    100,  84, 100,  98, 116, 243, 240,  19, 243, 240,  18, 240,
     18, 213, 240,  67, 240,  35, 240,  20, 240,  20, 244,  67,
    132,  52, 132,  52, 132,  51, 147,  81, 147, 114,  99, 167,
      0,  22,  48,  54,  20,   0,   9,   1, 240,  50, 240,  35,
    240,  35, 240,  20, 241,  19, 225,  35, 225,  35, 209,  51,
    193,  67, 193,  67, 177,  83, 161,  99, 161,  99, 145, 115,
    129, 131, 129, 131, 113, 147, 127,   2, 211, 240,  35, 240,
     35, 240,  35, 240,  35, 219,   0,  22, 112,  52,  18,   0,
      7,   1, 240,  35,  98, 122, 137, 151, 177, 240,  33, 240,
     33, 240,  33, 240,  33,  37, 161,  17,  67, 130, 114, 113,
    131, 240,  18, 240,  19, 243, 243,  66, 147,  51, 147,  51,
    147,  51, 146,  81, 147,  81, 146, 114,  83, 166,   0,  21,
     32,  57,  19,   0,   8,   6, 179,  66, 146, 129, 114, 115,
     99, 115,  98, 131,  83, 240,  18, 240,  34, 240,  19,  53,
    131,  33,  67,  99,  17, 114,  84, 131,  68, 146,  67, 163,
     51, 163,  51, 163,  51, 163,  66, 163,  66, 163,  66, 162,
     98, 131, 114, 114, 146,  67, 182,   0,  22,  48,  47,  18,
      0,   6, 113, 240,  31,  63,  62,  65, 177,  81, 162, 240,
     17, 240,  17, 240,  17, 240,  33, 240,  17, 240,  18, 240,
     17, 240,  18, 240,  18, 242, 240,  18, 240,  18, 240,  18,
    243, 243, 243, 243, 243, 243,   0,  21,  80,  52,  19,   0,
      7, 102, 193,  83, 145, 130, 113, 147,  82, 162,  82, 162,
     82, 162,  83, 146, 100,  98, 118,  50, 152, 214, 215, 162,
     54, 114, 101,  82, 132,  81, 179,  50, 179,  50, 194,  50,
    194,  50, 194,  66, 162,  83, 145, 131,  82, 182,   0,  22,
     48,  57,  19,   0,   7, 102, 194,  66, 147,  98, 130, 130,
     98, 147,  67, 162,  67, 162,  67, 163,  51, 163,  51, 163,
     51, 163,  51, 163,  66, 148,  67, 132,  82, 113,  19,  99,
     65,  35, 133,  51, 240,  18, 240,  34, 240,  18,  99, 130,
     99, 114, 115,  98, 145,  98, 182,   0,  22,  80,  17,   7,
      0,  10,  82,  68,  52,  66,   0,   7,  82,  68,  52,  66,
      0,   8,  48,  23,   7,   0,  10,  82,  68,  52,  66,   0,
      7,  82,  68,  52,  67,  97,  97,  97,  81,  97,  81,  81,
    240,  80,  50,  26,   0,  28,  82, 240, 115, 240,  99, 240,
     99, 240,  99, 240,  99, 240,  99, 240,  84, 240,  84, 240,
     84, 240,  84, 240, 116, 240, 148, 240, 148, 240, 148, 240,
    148, 240, 148, 240, 163, 240, 163, 240, 163, 240, 163, 240,
    162,   0,  23,  16,  13,  28,   0,  52,  79,  10,   0,  21,
     63,  10,   0,  49,  48,  48,  26,   0,  26,   2, 240, 163,
    240, 163, 240, 164, 240, 148, 240, 148, 240, 148, 240, 163,
    240, 163, 240, 164, 240, 147, 240, 115, 240,  99, 240,  84,
    240,  84, 240,  84, 240,  83, 240,  99, 240,  99, 240,  84,
    240,  99,   0,  28, 112,  36,  16,   0,   6,  55, 114,  84,
     81, 130,  67, 115,  51, 115,  51, 115, 210, 211, 194, 210,
    210, 225, 241, 225, 241, 241, 241, 241,   0,   7,  99, 211,
    211, 211,   0,  19,  16,  87,  28,   0,  11,  87, 240,  66,
    115, 226, 178, 193, 241, 161, 101,  97, 129,  83,  50,  97,
     98,  67,  97,  82,  81,  67, 116,  49,  81,  67, 131,  50,
     49,  67, 147,  65,  49,  67, 147,  65,  49,  67, 147,  65,
     49,  67, 147,  65,  49,  67, 147,  65,  49,  67, 147,  65,
     50,  67, 131,  65,  65,  67, 116,  65,  65,  83, 100,  49,
     97,  83,  50,  34,  49,  98, 101,  68, 129, 240, 210, 240,
    194, 228, 162, 148, 249,   0,  32,  96,  70,  29, 240, 240,
    178, 240, 194, 240, 194, 240, 180, 240, 164, 240, 150, 240,
    129,  35, 240, 129,  35, 240, 114,  36, 240,  97,  67, 240,
     97,  67, 240,  81,  84, 240,  65,  99, 240,  65,  99, 240,
     49, 116, 240,  33, 131, 240,  33, 131, 240,  30, 241, 163,
    241, 164, 209, 195, 209, 195, 194, 196, 177, 227, 177, 227,
    163, 212, 104, 138,   0,  33,  56,  27,   0,  10,  31,   3,
    211, 148, 179, 179, 163, 180, 147, 196, 131, 196, 131, 196,
    131, 195, 147, 180, 147, 164, 163, 147, 205, 227, 163, 179,
    180, 147, 196, 131, 196, 131, 212, 115, 212, 115, 212, 115,
    212, 115, 211, 131, 196, 131, 180, 147, 149, 111,   3,   0,
     31,  64,  66,  26,   0,  11,   7,  81, 164,  83,  34, 132,
    146,  18, 115, 196,  99, 227,  84, 242,  83, 240,  18,  68,
    240,  18,  67, 240,  49,  52, 240,  49,  52, 240, 116, 240,
    116, 240, 116, 240, 116, 240, 116, 240, 132, 240,  33,  68,
    240,  33,  83, 240,  33,  84, 241, 115, 241, 131, 209, 164,
    161, 212,  98, 240,  39,   0,  30,  48,  58,  29,   0,  10,
    127,   2, 240,  19, 148, 211, 179, 195, 195, 179, 211, 163,
    227, 147, 228, 131, 228, 131, 243, 131, 244, 115, 244, 115,
    244, 115, 244, 115, 244, 115, 244, 115, 244, 115, 243, 131,
    228, 131, 228, 131, 227, 147, 211, 163, 195, 179, 179, 195,
    148, 159,   2,   0,  34,  16,  59,  26,   0,   9, 111,   6,
    147, 164, 147, 194, 147, 209, 147, 209, 147, 209, 147, 225,
    131, 113,  97, 131, 113, 243, 113, 243,  98, 251, 243,  98,
    243, 113, 243, 113, 243, 113, 113, 115, 113, 113, 115, 225,
    131, 225, 131, 225, 131, 225, 131, 210, 131, 195, 131, 164,
     95,   6,   0,  29, 112,  55,  24,   0,   9,  15,   5, 131,
    164, 115, 194, 115, 194, 115, 209, 115, 209, 115, 209, 115,
    209, 115, 113, 211, 113, 211, 113, 211,  98, 219, 211,  98,
    211, 113, 211, 113, 211, 113, 211, 240,  99, 240,  99, 240,
     99, 240,  99, 240,  99, 240,  99, 240,  43,   0,  28,  80,
     64,  28,   0,  11,  87,  81, 211,  98,  34, 179, 146,  18,
    163, 180, 147, 211, 132, 226, 131, 242, 116, 240,  17, 115,
    240,  33, 100, 240,  33, 100, 240, 148, 240, 148, 240, 148,
    240, 148, 240, 148, 186,  67, 243, 116, 227, 131, 227, 132,
    211, 147, 211, 163, 195, 180, 145,  18, 212,  82,  34, 247,
     81,   0,  32,  32,  57,  28,   0,  10,  75,  59, 115, 179,
    179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179,
    179, 179, 179, 179, 179, 179, 191,   2, 179, 179, 179, 179,
    179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179,
    179, 179, 179, 179, 179, 179, 179, 179, 123,  59,   0,  31,
    112,  32,  14, 240, 240, 203, 115, 179, 179, 179, 179, 179,
    179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179, 179,
    179, 179, 179, 179, 179, 123,   0,  16,  16,  54,  19,   0,
      7, 107, 211, 240,  19, 240,  19, 240,  19, 240,  19, 240,
     19, 240,  19, 240,  19, 240,  19, 240,  19, 240,  19, 240,
     19, 240,  19, 240,  19, 240,  19, 240,  19, 240,  19, 240,
     19, 114, 115, 100,  99, 100,  84,  99,  99, 130,  83, 182,
      0,  22,  80,  67,  29,   0,  10, 123, 120, 115, 211, 163,
    209, 195, 193, 211, 177, 227, 161, 243, 145, 240,  19, 129,
    240,  35, 113, 240,  51,  82, 240,  67,  67, 240,  67,  53,
    240,  51,  34,  20, 240,  35,  17,  67, 240,  36,  99, 240,
     19, 116, 243, 132, 227, 147, 227, 148, 211, 164, 195, 179,
    195, 180, 179, 196, 163, 197,  91, 105,   0,  33,  56,  23,
      0,   8,  92, 243, 240,  83, 240,  83, 240,  83, 240,  83,
    240,  83, 240,  83, 240,  83, 240,  83, 240,  83, 240,  83,
    240,  83, 240,  83, 240,  83, 240,  83, 240,  83, 240,  83,
    193, 115, 193, 115, 193, 115, 193, 115, 178, 115, 163, 115,
    133,  63,   5,   0,  26,  32, 100,  35,   0,  13,  24, 240,
     24, 116, 240,  20, 177,  18, 241,  19, 177,  19, 225,  19,
    177,  19, 225,  19, 177,  35, 193,  35, 177,  35, 193,  35,
    177,  50, 177,  51, 177,  51, 161,  51, 177,  51, 161,  51,
    177,  67, 129,  67, 177,  67, 129,  67, 177,  82, 113,  83,
    177,  83,  97,  83, 177,  83,  97,  83, 177,  99,  65,  99,
    177,  99,  65,  99, 177, 114,  49, 115, 177, 115,  33, 115,
    177, 115,  33, 115, 177, 132, 131, 177, 132, 131, 177, 146,
    147, 163, 130, 147, 121,  82,  91,   0,  39,  96,  73,  29,
      0,  10, 120, 153, 116, 195, 165, 193, 177,  20, 177, 177,
     35, 177, 177,  51, 161, 177,  52, 145, 177,  67, 145, 177,
     83, 129, 177,  84, 113, 177, 100,  97, 177, 115,  97, 177,
    116,  81, 177, 132,  65, 177, 147,  65, 177, 163,  49, 177,
    164,  33, 177, 179,  33, 177, 195,  17, 177, 197, 177, 212,
    177, 227, 177, 227, 163, 226, 121, 193,   0,  33,  64,  65,
     28,   0,  11,  87, 240,  67,  83, 243, 147, 195, 179, 163,
    211, 131, 243, 115, 244,  84, 244,  83, 240,  35,  68, 240,
     36,  52, 240,  36,  52, 240,  36,  52, 240,  36,  52, 240,
     36,  52, 240,  36,  52, 240,  36,  68, 240,  19,  84, 244,
     84, 244, 100, 212, 131, 211, 163, 179, 195, 147, 243,  83,
    240,  71,   0,  33,  55,  25,   0,   9,  63,   2, 195, 132,
    163, 163, 147, 164, 131, 180, 115, 180, 115, 180, 115, 180,
    115, 180, 115, 164, 131, 163, 147, 132, 172, 211, 240, 115,
    240, 115, 240, 115, 240, 115, 240, 115, 240, 115, 240, 115,
    240, 115, 240, 115, 240, 115, 240,  59,   0,  29, 112,  91,
     28,   0,  11,  87, 240,  52,  83, 243, 147, 195, 179, 163,
    211, 131, 228, 115, 243, 100, 244,  83, 240,  35,  68, 240,
     36,  52, 240,  36,  52, 240,  36,  52, 240,  36,  52, 240,
     36,  52, 240,  36,  52, 240,  36,  67, 240,  35,  84, 244,
     84, 243, 115,  84,  84, 131,  50,  34,  67, 163,  33,  66,
     35, 195,  17,  81,  19, 229,  67, 240,  72, 113, 240,  51,
     97, 240,  66,  97, 240,  67,  51, 240,  72, 240, 103, 240,
    102, 240, 132,   0,   7,  96,  61,  29,   0,  10, 127,   1,
    240,  35, 131, 243, 163, 211, 164, 195, 180, 179, 180, 179,
    180, 179, 180, 179, 180, 179, 164, 195, 163, 211, 131, 252,
    240,  35, 116, 243, 147, 227, 163, 211, 163, 211, 163, 211,
    163, 211, 163, 211, 164, 195, 164,  65, 115, 179,  65, 115,
    180,  34,  73, 165,   0,  33,  16,  53,  20,   0,   8,  21,
     65, 130,  82,  33, 114, 131,  98, 147,  83, 162,  83, 162,
     83, 177,  84, 161,  84, 161, 101, 249, 203, 187, 201, 245,
    240,  21, 240,  20,  49, 211,  49, 211,  50, 195,  50, 194,
     67, 163,  68, 146,  82,  34,  83,  97,  86,   0,  23,  64,
     63,  28,   0,  10,  95,   8,  83, 115, 115,  82, 131, 130,
     81, 147, 145,  81, 147, 145,  81, 147, 145,  65, 163, 161,
     49, 163, 161, 227, 240, 163, 240, 163, 240, 163, 240, 163,
    240, 163, 240, 163, 240, 163, 240, 163, 240, 163, 240, 163,
    240, 163, 240, 163, 240, 163, 240, 163, 240, 163, 240,  93,
      0,  32,  80,  59,  29,   0,  10, 123, 105, 115, 211, 163,
    225, 179, 225, 179, 225, 179, 225, 179, 225, 179, 225, 179,
    225, 179, 225, 179, 225, 179, 225, 179, 225, 179, 225, 179,
    225, 179, 225, 179, 225, 179, 225, 179, 225, 194, 209, 211,
    193, 226, 177, 240,  18, 145, 240,  51,  82, 240, 102,   0,
     34,  32,  68,  30,   0,  11,  42, 152, 100, 228, 147, 241,
    180, 225, 195, 210, 195, 209, 212, 193, 227, 177, 244, 161,
    240,  19, 146, 240,  19, 145, 240,  36, 129, 240,  51, 113,
    240,  68,  97, 240,  83,  81, 240, 100,  65, 240, 115,  50,
    240, 115,  49, 240, 132,  33, 240, 147,  17, 240, 165, 240,
    180, 240, 179, 240, 195, 240, 209,   0,  35,  96, 102,  41,
      0,  15,  58,  74, 104, 100, 164, 179, 163, 179, 193, 179,
    179, 193, 180, 164, 177, 195, 164, 161, 211, 164, 161, 212,
    129,  20, 145, 227, 129,  35, 129, 243, 129,  35, 129, 244,
     97,  52,  97, 240,  35,  97,  67,  97, 240,  35,  97,  67,
     97, 240,  36,  65,  84,  65, 240,  67,  65,  99,  65, 240,
     67,  65, 100,  49, 240,  68,  33, 131,  33, 240,  99,  33,
    131,  33, 240,  99,  33, 132,  17, 240, 101, 164, 240, 132,
    164, 240, 131, 180, 240, 131, 194, 240, 162, 194, 240, 161,
    210,   0,  47, 112,  69,  30,   0,  11,  58, 104, 149, 148,
    212, 162, 244, 130, 240,  35, 129, 240,  52,  97, 240,  84,
     66, 240,  99,  65, 240, 116,  33, 240, 150, 240, 164, 240,
    180, 240, 196, 240, 165, 240, 161,  20, 240, 129,  52, 240,
     98,  68, 240,  81,  84, 240,  65, 116, 240,  34, 132, 240,
     17, 148, 241, 180, 210, 196, 164, 197, 105, 138,   0,  34,
     16,  64,  30,   0,  11,  42, 152, 101, 212, 148, 210, 195,
    209, 212, 178, 228, 161, 240,  19, 145, 240,  36, 114, 240,
     52,  97, 240,  68,  82, 240,  84,  65, 240, 115,  49, 240,
    132,  18, 240, 149, 240, 179, 240, 195, 240, 195, 240, 195,
    240, 195, 240, 195, 240, 195, 240, 195, 240, 195, 240, 195,
    240, 139,   0,  35,  16,  58,  22,   0,   8,  63,   3,  68,
    164,  67, 164,  82, 164,  97, 180,  97, 164, 113, 163, 129,
    148, 240,  36, 240,  51, 240,  52, 240,  36, 240,  51, 240,
     52, 240,  36, 240,  51, 145, 132, 145, 116, 161, 115, 177,
    100, 177,  84, 178,  83, 194,  68, 179,  52, 165,  63,   4,
      0,  25,  16,  39,   8, 133,  49, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 117,  48,  27,  16,   0,   6,  49, 113,
     97, 113,  97, 113, 113, 113,  97, 113, 113, 113, 116,  68,
     69,  53,  68,  53,  67,  83,   0,  48,  64,  39,   8, 133,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113, 113,
    113, 113, 113, 113, 113, 113, 113, 113, 113, 113,  53,  48,
     15,  13, 240, 240, 210, 164, 130,  34,  98,  66,  65, 129,
      0,  47,  64,  10,   7, 240, 114,  68,  52,  66,   0,  26,
     96,  16,   8, 240, 193,  97,  97, 113,  97, 113, 116,  69,
     53,  67,   0,  24,  64,  49,  23,   0,  24,  18, 240,  98,
    240,  98, 240,  84, 240,  68, 240,  49,  35, 240,  33,  35,
    240,  33,  50, 240,  17,  67, 241,  67, 241,  83, 209,  99,
    209,  99, 204, 177, 131, 177, 146, 161, 163, 145, 163, 131,
    148,  86, 119,   0,  26,  32,  42,  21,   0,  23,  94, 163,
    114, 147, 130, 131, 131, 115, 131, 115, 131, 115, 131, 115,
    115, 131,  99, 154, 179, 115, 131, 131, 115, 147,  99, 147,
     99, 147,  99, 147,  99, 131, 115, 115,  94,   0,  24,  64,
     45,  21,   0,  24,  70,  65, 131,  82,  18,  99, 147,  83,
    163,  82, 194,  67, 209,  66, 225,  51, 225,  51, 240,  51,
    240,  51, 240,  51, 240,  66, 225,  67, 209,  82, 209,  83,
    177, 115, 145, 163,  82, 214,   0,  24,  80,  42,  23,   0,
     25, 126, 195, 115, 163, 146, 147, 147, 131, 163, 115, 163,
    115, 179,  99, 179,  99, 179,  99, 179,  99, 179,  99, 179,
     99, 179,  99, 178, 115, 163, 115, 162, 131, 146, 147, 115,
    126,   0,  27,  46,  21,   0,  23,  95,   1, 131, 130, 131,
    146, 115, 161, 115, 161, 115, 161, 115,  81,  65, 115,  81,
    195,  66, 201, 195,  66, 195,  81, 195,  81,  81,  99, 177,
     99, 161, 115, 161, 115, 146, 115, 131,  79,   2,   0,  24,
     16,  42,  20,   0,  22,  79,   1, 115, 130, 115, 145, 115,
    145, 115, 161,  99, 161,  99,  81, 179,  81, 179,  66, 185,
    179,  66, 179,  81, 179,  81, 179, 240,  35, 240,  35, 240,
     35, 240,  35, 233,   0,  23, 112,  47,  23,   0,  26, 102,
     65, 163,  82,  18, 131, 132, 115, 163, 114, 194,  99, 209,
     98, 225,  83, 240,  83, 240,  83, 240,  83, 240,  83, 137,
     66, 195,  99, 179, 114, 179, 115, 163, 131, 147, 163,  82,
     18, 198,  65,   0,  26,  64,  44,  23,   0,  25, 120,  72,
     99, 131, 147, 131, 147, 131, 147, 131, 147, 131, 147, 131,
    147, 131, 147, 131, 158, 147, 131, 147, 131, 147, 131, 147,
    131, 147, 131, 147, 131, 147, 131, 147, 131, 104,  72,   0,
     26,  32,  26,  12,   0,  13,  73,  99, 147, 147, 147, 147,
    147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147,
    105,   0,  13, 112,  30,  15,   0,  17,  56, 163, 195, 195,
    195, 195, 195, 195, 195, 195, 195, 195, 195, 195,  83,  67,
     83,  67,  83,  66, 113,  67, 133,   0,  17, 112,  47,  24,
      0,  27,   9, 101, 115, 147, 147, 146, 163, 129, 195, 113,
    211,  97, 227,  81, 243,  65, 240,  19,  51, 243,  18,  19,
    229,  50, 228,  67, 211,  99, 195, 115, 179, 115, 179, 131,
    163, 147, 147, 148,  89,  87,   0,  27,  48,  44,  19,   0,
     21,  57, 211, 240,  19, 240,  19, 240,  19, 240,  19, 240,
     19, 240,  19, 240,  19, 240,  19, 240,  19, 240,  19, 240,
     19, 145,  99, 145,  99, 145,  99, 145,  99, 130,  99, 115,
     63,   1,   0,  21,  96,  75,  28,   0,  31,  70, 214,  99,
    196, 145,  18, 161,  19, 145,  18, 161,  19, 145,  19, 145,
     19, 145,  34, 129,  35, 145,  34, 129,  35, 145,  50,  97,
     51, 145,  50,  97,  51, 145,  51,  81,  51, 145,  66,  65,
     67, 145,  66,  65,  67, 145,  67,  33,  83, 145,  82,  33,
     83, 145,  83,  17,  83, 145,  99,  99, 145,  99,  99, 131,
     82, 115, 103,  65,  73,   0,  31, 112,  56,  23,   0,  25,
    118, 119, 100, 131, 132, 145, 145,  19, 129, 145,  35, 113,
    145,  35, 113, 145,  51,  97, 145,  67,  81, 145,  83,  65,
    145,  83,  65, 145,  99,  49, 145, 115,  33, 145, 115,  33,
    145, 131,  17, 145, 148, 145, 163, 145, 163, 131, 162, 103,
    145,   0,  26,  80,  43,  22,   0,  25,  86, 211,  83, 163,
    115, 131, 147, 114, 179,  83, 179,  82, 211,  51, 211,  51,
    211,  51, 211,  51, 211,  51, 211,  51, 211,  67, 179,  83,
    179,  99, 147, 131, 115, 163,  83, 215,   0,  25, 112,  40,
     20,   0,  22,  77, 163,  99, 131, 115, 115, 131,  99, 131,
     99, 131,  99, 131,  99, 115, 115,  99, 138, 163, 240,  35,
    240,  35, 240,  35, 240,  35, 240,  35, 240,  35, 240,  35,
    232,   0,  24,  57,  22,   0,  25,  86, 226,  83, 163, 115,
    131, 147, 114, 179,  83, 179,  82, 210,  67, 211,  51, 211,
     51, 211,  51, 211,  51, 211,  51, 211,  67, 194,  83, 179,
     99,  51,  66, 130,  33,  49,  34, 164,  66, 231,  81, 242,
     65, 243,  34, 240,  22, 240,  21, 240,  51,   0,  11,  80,
     45,  23,   0,  25, 125, 211,  99, 179, 115, 163, 131, 147,
    131, 147, 131, 147, 131, 147, 115, 163,  99, 186, 211,  83,
    195, 114, 179, 114, 179, 115, 163, 115, 163, 115, 163, 115,
     49,  99, 131,  33,  57, 100,   0,  26,  48,  39,  16,   0,
     18,  53,  49,  98,  68,  82,  99,  66, 130,  66, 145,  66,
    145,  67, 129,  84, 200, 168, 182, 212, 211,  49, 162,  49,
    162,  50, 146,  50, 130,  68,  82,  81,  54,   0,  18,  96,
     48,  22,   0,  24, 111,   4,  51,  83,  83,  50,  99,  98,
     49, 115, 113,  49, 115, 113,  49, 115, 113, 179, 240,  67,
    240,  67, 240,  67, 240,  67, 240,  67, 240,  67, 240,  67,
    240,  67, 240,  67, 240,  67, 240,  67, 251,   0,  25,  80,
     45,  23,   0,  25, 121,  71,  99, 147, 131, 161, 147, 161,
    147, 161, 147, 161, 147, 161, 147, 161, 147, 161, 147, 161,
    147, 161, 147, 161, 147, 161, 147, 161, 147, 161, 163, 129,
    194, 114, 211,  66, 240,  21,   0,  27,  16,  48,  23,   0,
     25, 119, 133,  83, 178, 130, 177, 147, 161, 147, 161, 163,
    129, 179, 129, 194, 113, 211,  97, 226,  81, 243,  65, 243,
     65, 240,  19,  33, 240,  35,  33, 240,  50,  17, 240,  68,
    240,  68, 240,  82, 240,  98,   0,  27,  48,  73,  31,   0,
     34, 119,  71,  85,  83, 131, 131,  99, 131, 145, 130, 131,
    129, 147, 116, 113, 147, 116, 113, 162, 113,  18,  97, 179,
     81,  35,  81, 179,  81,  35,  81, 194,  65,  66,  65, 211,
     49,  67,  49, 211,  49,  67,  49, 227,  17,  98,  33, 243,
     17,  99,  17, 240,  18,  17, 100, 240,  35, 131, 240,  35,
    131, 240,  50, 130, 240,  65, 161,   0,  36,  32,  48,  23,
      0,  25, 120,  86, 116, 100, 163, 113, 195,  97, 227,  66,
    243,  49, 240,  35,  17, 240,  52, 240,  83, 240,  99, 240,
     68, 240,  50,  19, 240,  33,  51, 241,  83, 209,  99, 209,
    115, 177, 147, 131, 148,  86, 119,   0,  26,  32,  47,  24,
      0,  27,   7, 149,  84, 178, 131, 177, 163, 145, 180, 114,
    195, 113, 227,  81, 244,  50, 240,  20,  33, 240,  51,  17,
    240,  69, 240,  83, 240,  99, 240,  99, 240,  99, 240,  99,
    240,  99, 240,  99, 240,  57,   0,  28,  16,  37,  18,   0,
     20,  47,  52, 116,  50, 147,  66, 131,  81, 131,  97, 131,
    227, 227, 243, 227, 227, 242, 243, 113,  99, 129,  98, 145,
     83, 145,  67, 146,  51, 132,  63,   0,  20,  80,   9,  22,
      0,  49,  79,   4,   0,  49, 112,  10,  41,   0,  92,  47,
     15,   8,   0,  92,  80,  21,  15,   0,   6,   2,  82,  83,
     67,  82,  82,  83,  67,  82,  82,  82,  82,  97,  97,   0,
     51,  64,  14,  15,   0,   6,   3, 181,  65,  65,  54,  65,
     99,   0,  56, 112,
};

//*****************************************************************************
//
// The font definition for the 36 point Cmsc font.
//
//*****************************************************************************
const tFont g_sFontCmsc36 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    37,

    //
    // The height of the font.
    //
    37,

    //
    // The baseline of the font.
    //
    28,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   35,   62,  160,  229,  325,  408,
         424,  464,  504,  537,  594,  611,  620,  631,
         708,  763,  796,  840,  891,  945,  997, 1054,
        1101, 1153, 1210, 1227, 1250, 1300, 1313, 1361,
        1397, 1484, 1554, 1610, 1676, 1734, 1793, 1848,
        1912, 1969, 2001, 2055, 2122, 2178, 2278, 2351,
        2416, 2471, 2562, 2623, 2676, 2739, 2798, 2866,
        2968, 3037, 3101, 3159, 3198, 3225, 3264, 3279,
        3289, 3305, 3354, 3396, 3441, 3483, 3529, 3571,
        3618, 3662, 3688, 3718, 3765, 3809, 3884, 3940,
        3983, 4023, 4080, 4125, 4164, 4212, 4257, 4305,
        4378, 4426, 4473, 4510, 4519, 4529, 4550,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmsc36Data
};
