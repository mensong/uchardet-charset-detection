/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* ***** BEGIN LICENSE BLOCK *****
 * Version: MPL 1.1/GPL 2.0/LGPL 2.1
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License. You may obtain a copy of the License at
 * http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * The Original Code is Mozilla Communicator client code.
 *
 * The Initial Developer of the Original Code is
 * Netscape Communications Corporation.
 * Portions created by the Initial Developer are Copyright (C) 1998
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s):
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPL"), or
 * the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
 * in which case the provisions of the GPL or the LGPL are applicable instead
 * of those above. If you wish to allow use of your version of this file only
 * under the terms of either the GPL or the LGPL, and not to allow others to
 * use your version of this file under the terms of the MPL, indicate your
 * decision by deleting the provisions above and replace them with the notice
 * and other provisions required by the GPL or the LGPL. If you do not delete
 * the provisions above, a recipient may use your version of this file under
 * the terms of any one of the MPL, the GPL or the LGPL.
 *
 * ***** END LICENSE BLOCK ***** */

#include "../nsSBCharSetProber.h"
#include "../nsLanguageDetector.h"

/********* Language model for: Russian *********/

/**
 * Generated by BuildLangModel.py
 * On: 2022-12-17 19:57:30.506433
 **/

/* Character Mapping Table:
 * ILL: illegal character.
 * CTR: control character specific to the charset.
 * RET: carriage/return.
 * SYM: symbol (punctuation) that does not belong to word.
 * NUM: 0 - 9.
 *
 * Other characters are ordered by probabilities
 * (0 is the most common character in the language).
 *
 * Orders are generic to a language. So the codepoint with order X in
 * CHARSET1 maps to the same character as the codepoint with the same
 * order X in CHARSET2 for the same language.
 * As such, it is possible to get missing order. For instance the
 * ligature of 'o' and 'e' exists in ISO-8859-15 but not in ISO-8859-1
 * even though they are both used for French. Same for the euro sign.
 */
static const unsigned char Windows_1251_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
   63, 64,SYM, 65,SYM,SYM,SYM,SYM,SYM,SYM, 66,SYM, 67, 68, 69, 70, /* 8X */
   71,SYM,SYM,SYM,SYM,SYM,SYM,SYM,ILL,SYM, 72,SYM, 73, 74, 75, 76, /* 9X */
  SYM, 60, 60, 77,SYM, 62,SYM,SYM, 32,SYM, 78,SYM,SYM,SYM,SYM, 61, /* AX */
  SYM,SYM, 59, 59, 62,SYM,SYM,SYM, 32,SYM, 79,SYM, 80, 81, 82, 61, /* BX */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* CX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* DX */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* EX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Iso_8859_5_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 8X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 9X */
  SYM, 32, 83, 84, 85, 86, 59, 61, 87, 88, 89, 90, 91,SYM, 60, 92, /* AX */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* BX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* CX */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* DX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* EX */
  SYM, 32, 93, 94, 95, 96, 59, 61, 97, 98, 99,100,101,SYM, 60,102, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Koi8_R_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 8X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 9X */
  SYM,SYM,SYM, 32,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* AX */
  SYM,SYM,SYM, 32,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
   26,  2, 18, 25, 12,  3, 28, 16, 23,  1, 20, 10,  9, 11,  4,  0, /* CX */
   13, 15,  6,  5,  7, 14, 24,  8, 21, 17, 19, 27, 30, 29, 22, 53, /* DX */
   26,  2, 18, 25, 12,  3, 28, 16, 23,  1, 20, 10,  9, 11,  4,  0, /* EX */
   13, 15,  6,  5,  7, 14, 24,  8, 21, 17, 19, 27, 30, 29, 22, 53, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm855_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
  103,104,105,106, 32, 32,107,108,109,110, 59, 59, 61, 61,111,112, /* 8X */
  113,114,115,116,117,118,119,120, 60, 60,121,122, 26, 26, 53, 53, /* 9X */
    2,  2, 18, 18, 25, 25, 12, 12,  3,  3, 28, 28, 16, 16,SYM,SYM, /* AX */
  SYM,SYM,SYM,SYM,SYM, 23, 23,  1,  1,SYM,SYM,SYM,SYM, 20, 20,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM, 10, 10,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
    9,  9, 11, 11,  4,  4,  0,  0, 13,SYM,SYM,SYM,SYM, 13, 15,SYM, /* DX */
   15,  6,  6,  5,  5,  7,  7, 14, 14, 24, 24,  8,  8, 21, 21,SYM, /* EX */
  SYM, 17, 17, 19, 19, 27, 27, 30, 30, 29, 29, 22, 22,SYM,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Ibm866_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* 8X */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* 9X */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* AX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* BX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* DX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* EX */
   32, 32,123,124, 61, 61, 60, 60,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const unsigned char Mac_Cyrillic_CharToOrderMap[] =
{
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,RET,CTR,CTR,RET,CTR,CTR, /* 0X */
  CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR,CTR, /* 1X */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, /* 2X */
  NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,NUM,SYM,SYM,SYM,SYM,SYM,SYM, /* 3X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 4X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,SYM, /* 5X */
  SYM, 34, 48, 41, 42, 33, 50, 49, 43, 31, 56, 54, 40, 44, 35, 39, /* 6X */
   47, 58, 36, 38, 37, 45, 52, 55, 46, 51, 57,SYM,SYM,SYM,SYM,CTR, /* 7X */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* 8X */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26, 15, /* 9X */
  SYM,SYM, 62,SYM,SYM,SYM,SYM, 59,SYM,SYM,SYM,125,126,SYM,127,128, /* AX */
  SYM,SYM,SYM,SYM, 59,SYM, 62,129,130,131, 61, 61,132,133,134,135, /* BX */
  136,137,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM,138,139,140,141,142, /* CX */
  SYM,SYM,SYM,SYM,SYM,SYM,SYM,SYM, 60, 60,143,144,SYM, 32, 32, 15, /* DX */
    2, 18,  8, 16, 12,  3, 24, 19,  1, 20, 10,  9, 11,  4,  0, 13, /* EX */
    6,  5,  7, 14, 28, 23, 25, 22, 27, 29, 53, 17, 21, 30, 26,SYM, /* FX */
};
/*X0  X1  X2  X3  X4  X5  X6  X7  X8  X9  XA  XB  XC  XD  XE  XF */

static const int Unicode_Char_size = 108;
static const unsigned int Unicode_CharOrder[] =
{
    65, 34,   66, 48,   67, 41,   68, 42,   69, 33,   70, 50,   71, 49,  72, 43,
    73, 31,   76, 40,   77, 44,   78, 35,   79, 39,   80, 47,   82, 36,  83, 38,
    84, 37,   85, 45,   86, 52,   88, 46,   89, 51,   97, 34,   98, 48,  99, 41,
   100, 42,  101, 33,  102, 50,  103, 49,  104, 43,  105, 31,  108, 40, 109, 44,
   110, 35,  111, 39,  112, 47,  114, 36,  115, 38,  116, 37,  117, 45, 118, 52,
   120, 46,  121, 51, 1025, 32, 1040,  2, 1041, 18, 1042,  8, 1043, 16,1044, 12,
  1045,  3, 1046, 24, 1047, 19, 1048,  1, 1049, 20, 1050, 10, 1051,  9,1052, 11,
  1053,  4, 1054,  0, 1055, 13, 1056,  6, 1057,  5, 1058,  7, 1059, 14,1060, 28,
  1061, 23, 1062, 25, 1063, 22, 1064, 27, 1065, 29, 1066, 53, 1067, 17,1068, 21,
  1069, 30, 1070, 26, 1071, 15, 1072,  2, 1073, 18, 1074,  8, 1075, 16,1076, 12,
  1077,  3, 1078, 24, 1079, 19, 1080,  1, 1081, 20, 1082, 10, 1083,  9,1084, 11,
  1085,  4, 1086,  0, 1087, 13, 1088,  6, 1089,  5, 1090,  7, 1091, 14,1092, 28,
  1093, 23, 1094, 25, 1095, 22, 1096, 27, 1097, 29, 1098, 53, 1099, 17,1100, 21,
  1101, 30, 1102, 26, 1103, 15, 1105, 32,
};


/* Model Table:
 * Total considered sequences: 1554 / 2916
 * - Positive sequences: first 819 (0.9950050289366638)
 * - Probable sequences: next 260 (1079-819) (0.003999322715788067)
 * - Neutral sequences: last 1837 (0.0009956483475481726)
 * - Negative sequences: 1362 (off-ratio)
 * Negative sequences: TODO
 */
static const PRUint8 RussianLangModel[] =
{
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,
   3,3,3,3,0,3,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,
   3,3,3,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,
   3,3,3,3,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,0,3,3,3,3,3,
   3,3,3,2,0,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,2,3,2,3,2,3,3,3,3,3,3,0,3,3,3,3,3,3,
   3,3,3,2,0,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,1,0,3,3,3,3,3,3,
   3,3,1,3,0,3,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,0,3,3,3,3,3,3,
   3,3,2,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,1,0,3,3,2,1,3,3,
   1,3,2,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,3,2,3,2,2,1,
   3,1,3,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,3,3,2,3,3,3,3,2,3,3,3,3,2,2,0,3,2,3,3,1,3,
   1,2,2,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,2,2,3,1,3,1,1,3,0,2,1,1,3,3,1,
   2,2,0,2,0,2,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,2,2,3,3,3,3,2,3,3,3,2,3,3,2,0,3,2,1,1,2,2,
   1,2,1,3,1,3,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,0,3,3,2,3,3,3,
   3,1,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,3,1,3,3,1,2,3,3,3,1,3,3,1,0,3,2,1,0,3,1,
   2,2,1,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,3,3,0,3,3,2,0,3,3,3,3,3,
   3,3,3,3,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
  1,1,1,3,3,3,3,3,3,3,3,3,3,3,1,3,3,0,3,3,3,0,3,3,3,3,3,
   2,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,3,2,3,1,3,1,3,1,2,2,0,1,2,1,1,1,2,
   2,1,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,2,1,3,3,3,3,3,3,3,3,3,3,3,1,2,3,0,3,3,3,0,3,3,3,2,0,
   3,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,2,3,3,3,3,2,1,3,3,1,3,3,2,0,2,2,3,3,2,3,
   3,1,3,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,
  3,3,3,3,3,3,3,1,3,3,3,3,3,1,3,3,3,3,3,2,0,3,2,0,3,2,2,
   2,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,2,2,2,3,3,3,3,2,3,3,3,3,2,1,2,2,0,3,2,0,0,3,1,1,3,1,
   3,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,0,3,3,3,2,3,3,1,3,3,3,3,0,3,3,0,3,3,0,0,3,1,1,3,3,
   3,3,2,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  2,3,3,3,3,1,3,3,2,3,3,2,0,1,3,0,0,1,0,0,0,3,1,0,3,0,1,
   3,1,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,3,3,3,3,3,2,3,2,1,3,0,1,1,1,1,0,2,1,2,0,1,1,
   1,1,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,3,3,1,1,2,1,3,1,3,2,3,0,1,1,3,1,0,3,2,0,1,2,1,
   1,0,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
  3,3,3,3,1,1,1,1,3,2,3,1,2,1,3,1,1,3,2,2,0,1,0,1,0,1,1,
   1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,2,2,1,3,3,3,3,2,3,2,3,3,2,1,1,3,0,3,3,1,0,3,2,3,3,2,
   1,1,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,3,2,3,3,3,3,3,2,1,2,3,0,1,0,1,0,0,3,1,1,0,0,1,
   1,1,0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  3,3,3,3,2,3,3,3,0,3,3,2,1,1,3,1,3,2,1,1,0,3,0,1,0,1,2,
   1,3,0,1,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,3,3,3,3,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,0,3,0,0,0,0,0,
   0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  1,1,1,1,3,3,3,3,3,3,3,3,3,3,1,2,2,0,2,2,3,0,1,1,1,2,1,
   2,3,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,3,3,3,3,3,3,3,3,1,3,2,3,2,3,3,2,1,3,0,
  0,0,0,1,3,3,3,3,3,3,2,3,2,2,1,1,3,0,2,3,2,0,1,3,2,1,0,
   0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,1,0,0,1,1,1,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,3,3,3,3,2,3,3,3,2,3,3,2,2,2,3,2,2,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
   0,0,0,0,3,0,2,2,3,3,3,3,2,3,3,3,2,3,3,1,3,2,3,3,3,2,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,3,2,3,3,3,2,3,3,1,1,2,1,1,2,3,2,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,3,3,3,3,3,3,3,3,2,3,3,0,2,2,3,2,3,2,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,3,3,3,3,2,2,1,3,1,3,0,1,1,1,2,3,1,0,
  0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,2,1,3,3,3,2,3,1,3,2,2,0,3,3,1,2,2,1,0,
  1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,2,2,3,3,3,3,3,3,3,3,2,3,3,2,3,3,2,3,2,3,0,
  1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,1,3,2,3,3,2,2,1,2,3,0,1,2,1,2,2,1,0,
  1,0,0,1,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,2,2,3,2,3,3,2,1,3,1,2,0,1,1,1,1,2,1,0,
  0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,2,1,2,3,2,1,2,1,1,2,0,1,1,2,1,2,1,0,
  0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,2,2,3,2,3,2,1,1,1,1,3,0,1,1,1,1,2,0,0,
  0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,2,1,1,2,3,1,2,1,1,3,3,0,3,3,2,1,2,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,2,0,3,2,3,3,3,3,1,3,2,2,1,3,0,1,2,3,2,2,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,1,1,0,1,1,1,1,0,1,0,1,0,0,3,1,1,0,1,1,3,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,3,2,2,3,3,1,1,3,1,3,0,2,1,0,1,1,1,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,3,3,1,1,3,3,2,1,1,1,2,1,1,2,0,1,2,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,2,3,1,2,3,3,1,1,3,1,2,0,1,1,1,0,1,1,0,
  0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,3,2,1,3,2,1,1,0,1,2,1,0,1,1,2,1,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,2,2,2,1,1,3,2,3,2,1,1,1,1,0,1,3,1,1,1,1,0,
  0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,3,0,3,3,1,1,0,1,2,0,1,1,0,1,1,1,0,1,0,1,1,0,0,
  0,1,0,3,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,1,
   0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};


const SequenceModel Windows_1251RussianModel =
{
  Windows_1251_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "WINDOWS-1251",
  "ru"
};

const SequenceModel Iso_8859_5RussianModel =
{
  Iso_8859_5_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "ISO-8859-5",
  "ru"
};

const SequenceModel Koi8_RRussianModel =
{
  Koi8_R_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "KOI8-R",
  "ru"
};

const SequenceModel Ibm855RussianModel =
{
  Ibm855_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "IBM855",
  "ru"
};

const SequenceModel Ibm866RussianModel =
{
  Ibm866_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "IBM866",
  "ru"
};

const SequenceModel Mac_CyrillicRussianModel =
{
  Mac_Cyrillic_CharToOrderMap,
  RussianLangModel,
  54,
  (float)0.9990043516524518,
  PR_FALSE,
  "MAC-CYRILLIC",
  "ru"
};

const LanguageModel RussianModel =
{
  "ru",
  Unicode_CharOrder,
  108,
  RussianLangModel,
  54,
  5,
  (float)0.40765948913984873,
  29,
  (float)0.030302616590369,
};
