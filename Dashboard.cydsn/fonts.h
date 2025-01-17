/*
 * fonts.h
 *
 * Created: 15.10.2013 11:21:00
 *  Author: Ovner
 */ 


#ifndef FONTS_H_
#define FONTS_H_

const char Font16x16[][16]=
{
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},  /*   */
	{0,  0,  0,  0,248,  0,  0,  0,  0,  0,  0,  0, 25,  0,  0,  0},  /* ! */
	{0,  0,  0,120,  0,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},  /* " */
	{0, 64,192,120, 64,224,120, 64,  2, 26,  7,  2, 30,  3,  2,  0},  /* # */
	{0,224,144, 16,252, 16, 16, 32,  0,  8, 17, 17,127, 17, 19, 14},  /* $ */
	{48, 72, 72, 48,128,128, 64,  0, 0,  2,  1,  1, 12, 18, 18, 12},  /* % */
	{0,  0,240,200,  8,  8,  0,  0,  0, 15, 24, 16, 17, 22,  8, 23},  /* & */
	{0,  0,  0,  0,120,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},  /* ' */
	{0,  0,  0,224, 28,  4,  0,  0,  0,  0,  0,  7, 24, 32,  0,  0},  /* ( */
	{0,  0,  4, 28,224,  0,  0,  0,  0,  0, 32, 56,  7,  0,  0,  0},  /* ) */
	{0,144,160, 96,248, 96,160,144,  0,  0,  0,  0,  1,  0,  0,  0},  /* * */
	{0,  0,  0,  0,224,  0,  0,  0,  0,  1,  1,  1, 15,  1,  1,  1},  /* + */
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 56, 24,  0,  0,  0},  /* , */
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,  2,  2,  2,  0,  0},  /* - */
	{0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 24, 24,  0,  0,  0},  /* . */
	{0,  0,  0,  0,128,112,  8,  0,  0, 64, 56,  6,  1,  0,  0,  0},  /* / */
	{0,224, 16,  8,136,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7},  /* 0 */
	{0,  0, 16,  8,248,  0,  0,  0,  0,  0, 16, 16, 31, 16, 16,  0},  /* 1 */
	{0, 16,  8,  8,  8,  8,152,112,  0, 16, 24, 20, 18, 19, 17, 16},  /* 2 */
	{0, 16,  8,136,136,136, 72,112,  0,  8, 16, 16, 16, 16, 25, 15},  /* 3 */
	{0,  0,128, 96, 48,  8,248,  0,  0,  3,  2,  2,  2,  2, 31,  2},  /* 4 */
	{0,248, 72, 72, 72, 72,136,  0,  0,  8, 16, 16, 16, 16,  8,  7},  /* 5 */
	{0,224, 48,152,136,136,136, 16,  0,  7,  9, 16, 16, 16, 25, 15},  /* 6 */
	{0,  8,  8,  8,  8,200, 56, 24,  0,  0, 16, 12,  3,  0,  0,  0},  /* 7 */
	{0,112,136,136,136,136,136,112,  0, 15, 25, 16, 16, 16, 25, 15},  /* 8 */
	{0,240,152,  8,  8,  8,144,224,  0,  8, 17, 17, 17, 25, 12,  7},  /* 9 */
	{0,  0,  0,192,192,  0,  0,  0,  0,  0,  0, 24, 24,  0,  0,  0},  /* : */
	{0,  0,  0,192,192,  0,  0,  0,  0,  0, 64, 56, 24,  0,  0,  0},  /* ; */
	{0,  0,128,128,192, 64, 64, 32,  0,  1,  2,  2,  6,  4,  4,  8},  /* < */
	{0, 64, 64, 64, 64, 64, 64, 64,  0,  2,  2,  2,  2,  2,  2,  2},  /* = */
	{0, 32, 64, 64,192,128,128,  0,  0,  8,  4,  4,  6,  2,  2,  1},  /* > */
	{0, 16,  8,136,200,112,  0,  0,  0,  0,  0, 27,  0,  0,  0,  0},  /* ? */
	{0,192, 48, 24,136, 72, 88,240,  0, 15, 48, 32, 71, 72, 72, 15},  /* @ */
	{0,  0,192, 48,  8, 48,192,  0,  0, 24,  7,  2,  2,  2,  7, 24},  /* A */
	{0,248,136,136,136,136,136,112,  0, 31, 16, 16, 16, 16, 25, 15},  /* B */
	{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 16,  8},  /* C */
	{0,248,  8,  8,  8,  8, 16,224,  0, 31, 16, 16, 16, 16,  8,  7},  /* D */
	{0,248,136,136,136,136,136,136,  0, 31, 16, 16, 16, 16, 16, 16},  /* E */
	{0,248,136,136,136,136,136,136,  0, 31,  0,  0,  0,  0,  0,  0},  /* F */
	{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 17, 15},  /* G */
	{0,248,128,128,128,128,128,248,  0, 31,  0,  0,  0,  0,  0, 31},  /* H */
	{0,  0,  8,  8,248,  8,  8,  0,  0,  0, 16, 16, 31, 16, 16,  0},  /* I */
	{0,  0,  0,  8,  8,  8,248,  0,  0,  8, 16, 16, 16, 24, 15,  0},  /* J */
	{0,248,128,192, 32, 16,  8,  0,  0, 31,  0,  0,  3,  6,  8, 16},  /* K */
	{0,248,  0,  0,  0,  0,  0,  0,  0, 31, 16, 16, 16, 16, 16, 16},  /* L */
	{0,248, 24,224,  0,224, 24,248,  0, 31,  0,  0,  1,  0,  0, 31},  /* M */
	{0,248, 24, 96,128,  0,  0,248,  0, 31,  0,  0,  1,  6, 24, 31},  /* N */
	{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7},  /* O */
	{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  1,  0},  /* P */
	{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 48,120,  7},  /* Q */
	{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  2, 12},  /* R */
	{0,112,144,136,  8,  8,  8, 16,  0,  8, 16, 16, 17, 17, 25, 14},  /* S */
	{0,  8,  8,  8,248,  8,  8,  8,  0,  0,  0,  0, 31,  0,  0,  0},  /* T */
	{0,248,  0,  0,  0,  0,  0,248,  0, 15, 24, 16, 16, 16, 24, 15},  /* U */
	{0, 24,224,  0,  0,  0,224, 24,  0,  0,  1, 14, 16, 14,  1,  0},  /* V */
	{120,128,  0,192,192,  0,128,120,  0,  3, 28,  3,  3, 28, 3, 0},  /* W */
	{0,  8, 16, 96,128, 96, 16,  8,  0, 16, 12,  3,  0,  3, 12, 16},  /* X */
	{0,  8, 48,192,128,192, 48,  8,  0,  0,  0,  0, 31,  0,  0,  0},  /* Y */
	{0,  8,  8,  8,136, 72, 56, 24,  0, 24, 28, 18, 17, 16, 16, 16},  /* Z */
	{0,  0,  0,252,  4,  4,  0,  0,  0,  0,  0, 63, 32, 32,  0,  0},  /* [ */
	{0,  8,112,128,  0,  0,  0,  0,  0,  0,  0,  1,  6, 56, 64,  0},  /* \ */
	{0,  0,  4,  4,252,  0,  0,  0,  0,  0, 32, 32, 63,  0,  0,  0},  /* ] */
	{0, 64, 96, 16,  8, 16, 96, 64,  0,  0,  0,  0,  0,  0,  0,  0},  /* ^ */
	{0,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,128,128,128,128},  /* _ */
	{0,  0,  2,  6,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},  /* ` */
	{0,  0, 64, 32, 32, 32,192,  0,  0, 14, 17, 17, 17,  9, 31,  0},  /* a */
	{0,252, 96, 32, 32, 96,128,  0,  0, 31,  8, 16, 16, 24,  7,  0},  /* b */
	{0,128, 64, 32, 32, 32, 64,  0,  0,  7,  8, 16, 16, 16,  8,  0},  /* c */
	{0,128, 96, 32, 32, 96,252,  0,  0,  7, 24, 16, 16,  8, 31,  0},  /* d */
	{0,128, 96, 32, 32, 96,192,  0,  0,  7,  9, 17, 17, 17,  9,  0},  /* e */
	{0, 32, 32,248, 36, 36, 36,  0,  0,  0,  0, 31,  0,  0,  0,  0},  /* f */
	{0,128, 96, 32, 32, 64,224,  0,  0,  7, 88,144,144,136,127,  0},  /* g */
	{0,252, 64, 32, 32, 32,192,  0,  0, 31,  0,  0,  0,  0, 31,  0},  /* h */
	{0,  0, 32, 32,236,  0,  0,  0,  0, 16, 16, 16, 31, 16, 16, 16},  /* i */
	{0,  0, 32, 32,236,  0,  0,  0,  0,128,128,128,127,  0,  0,  0},  /* j */
	{0,252,  0,128, 64, 32,  0,  0,  0, 31,  1,  1,  6,  8, 16,  0},  /* k */
	{4,  4,  4,252,  0,  0,  0,  0,  0,  0,  0, 15, 16, 16, 16,  0},  /* l */
	{0,224, 32, 32,224, 32, 32,192,  0, 31,  0,  0, 31,  0,  0, 31},  /* m */
	{0,224, 64, 32, 32, 32,192,  0,  0, 31,  0,  0,  0,  0, 31,  0},  /* n */
	{0,192, 96, 32, 32, 96,192,  0,  0, 15, 24, 16, 16, 24, 15,  0},  /* o */
	{0,224, 64, 32, 32, 96,128,  0,  0,255, 24, 16, 16, 24,  7,  0},  /* p */
	{0,128, 96, 32, 32, 64,224,  0,  0,  7, 24, 16, 16,  8,255,  0},  /* q */
	{0,  0,224, 96, 32, 32, 64,  0,  0,  0, 31,  0,  0,  0,  0,  0},  /* r */
	{0,192, 32, 32, 32, 32, 64,  0,  0,  9, 17, 17, 18, 18, 14,  0},  /* s */
	{0, 32, 32,248, 32, 32, 32,  0,  0,  0,  0, 15, 16, 16, 16,  0},  /* t */
	{0,224,  0,  0,  0,  0,224,  0,  0, 15, 16, 16, 16,  8, 31,  0},  /* u */
	{0, 96,128,  0,  0,128, 96,  0,  0,  0,  3, 28, 28,  3,  0,  0},  /* v */
	{224,  0,  0,128,128,  0,  0,224,  0,  7, 24,  7,  7, 24,  7,0},  /* w */
	{0, 32, 64,128,128, 64, 32,  0,  0, 16, 12,  3,  3, 12, 16,  0},  /* x */
	{0, 32,192,  0,  0,128, 96,  0,  0,  0,129,198, 60,  3,  0,  0},  /* y */
	{0, 32, 32, 32, 32,160, 96,  0,  0, 24, 20, 18, 17, 16, 16,  0},  /* z */
	{0,  0,192, 48,  8, 48,192,  0,  0, 24,  7,  2,  2,  2,  7, 24},  /* A */
	{0,248,136,136,136,136,136,  8,  0, 31, 16, 16, 16, 16, 25, 15},  /* Б */
	{0,248,136,136,136,136,136,112,  0, 31, 16, 16, 16, 16, 25, 15},  /* B */
	{0,248,  8,  8,  8,  8,  8,  8,  0, 31,  0,  0,  0,  0,  0,  0},  /* Г */
	{0,224, 16,  8,  8,  8,248,  0,112, 31, 16, 16, 16, 16, 31,112},  /* Д */
	{0,248,136,136,136,136,136,136,  0, 31, 16, 16, 16, 16, 16, 16},  /* Е */
	{0, 24,112,192,248,192,112, 24,  0, 28,  3,  0, 31,  0,  3, 28},  /* Ж */
	{0, 16,  8,136,136,136, 72, 48,  0,  8, 16, 16, 16, 16, 25, 14},  /* З */
	{0,248,  0,  0,128, 96, 24,248,  0, 31, 28,  6,  1,  0,  0, 31},  /* И */
	{0,248,  1,  2,130, 97, 24,248,  0, 31, 28,  6,  1,  0,  0, 31},  /* Й */
	{0,248,128,192, 32, 16,  8,  0,  0, 31,  0,  0,  3,  6,  8, 16},  /* К */
	{0,  0,248,  8,  8,  8,  8,248, 16, 24, 15,  0,  0,  0,  0, 31},  /* Л */
	{0,248, 24,224,  0,224, 24,248,  0, 31,  0,  0,  1,  0,  0, 31},  /* M */
	{0,248,128,128,128,128,128,248,  0, 31,  0,  0,  0,  0,  0, 31},  /* H */
	{0,224, 16,  8,  8,  8, 16,224,  0,  7,  8, 16, 16, 16,  8,  7},  /* O */
	{0,248,  8,  8,  8,  8,  8,248,  0, 31,  0,  0,  0,  0,  0, 31},  /* П */
	{0,248,  8,  8,  8,  8,152,240,  0, 31,  1,  1,  1,  1,  1,  0},  /* P */
	{0,224, 16,  8,  8,  8,  8, 16,  0,  7,  8, 16, 16, 16, 16,  8},  /* C */
	{0,  8,  8,  8,248,  8,  8,  8,  0,  0,  0,  0, 31,  0,  0,  0},  /* T */
	{0,  8, 48,192,  0,128,112,  8,  0,  0, 16, 16, 15,  3,  0,  0},  /* У */
	{0,224, 48, 16,248, 16, 48,224,  0,  3, 12,  8, 31,  8, 12,  7},  /* Ф */
	{0,  8, 16, 96,128, 96, 16,  8,  0, 16, 12,  3,  0,  3, 12, 16},  /* X */
	{0,248,  0,  0,  0,  0,248,  0,  0, 31, 16, 16, 16, 16, 31,112},  /* Ц */
	{0,248,  0,  0,  0,  0,  0,248,  0,  0,  1,  1,  1,  1,  1, 31},  /* Ч */
	{0,248,  0,  0,248,  0,  0,248,  0, 31, 16, 16, 31, 16, 16, 31},  /* Ш */
	{248, 0, 0,248,  0,  0,248,  0, 31, 16, 16, 31, 16, 16, 31,112},  /* Щ */
	{8,  8,248, 64, 64, 64,128,128,  0,  0, 31, 16, 16, 16, 24, 15},  /* Ъ */
	{248, 64, 64, 64,128,  0,  0,248, 31, 16, 16, 16,  8, 7, 0, 31},  /* Ы */
	{0,248,128,128,128,128,128,  0,  0, 31, 16, 16, 16, 16, 25, 15},  /* Ь */
	{0, 16,136,136,136,136,144,224,  0,  8, 16, 16, 16, 16, 12,  7},  /* Э */
	{0,248,128,240, 24,  8, 24,240,  0, 31,  0, 15, 24, 16, 24, 15},  /* Ю */
	{0,  0,240,152,  8,  8,  8,248,  0, 16,  8,  7,  1,  1,  1, 31},  /* Я */
	{0,  0, 64, 32, 32, 32,192,  0,  0, 14, 17, 17, 17,  9, 31,  0},  /* а */
	{0,240,120, 40, 36,100,192,  0,  0, 15, 24, 16, 16, 24, 15,  0},  /* б */
	{0,224, 32, 32, 32, 32,192,  0,  0, 31, 17, 17, 17, 17, 14,  0},  /* в */
	{0,  0,224, 32, 32, 32, 32,  0,  0,  0, 31,  0,  0,  0,  0,  0},  /* г */
	{0,  0,224, 32, 32, 32,224,  0,  0,112, 31, 16, 16, 16, 31,112},  /* д */
	{0,192, 32, 32, 32, 32,192,  0,  0,  7,  9, 17, 17, 17,  9,  0},  /* е */
	{0, 32,224,128,224,128,224, 32,  0, 24,  6,  3, 31,  3,  6, 24},  /* ж */
	{0, 64, 32, 32, 32, 32,192,  0,  0,  8, 16, 17, 17, 17, 14,  0},  /* з */
	{0,224,  0,  0,  0,192,224,  0,  0, 31,  8,  6,  1,  0, 31,  0},  /* и */
	{0,224,  0,  0,  0,192,224,  0,  0, 31,  8,  6,  1,  0, 31,  0},  /* й */
	{0,224,  0,128, 64, 32,  0,  0,  0, 31,  1,  1,  6,  8, 16,  0},  /* к */
	{0,  0,224, 32, 32, 32,224,  0, 16, 16, 15,  0,  0,  0, 31,  0},  /* л */
	{0,224,192,  0,  0,  0,192,224,  0, 31,  0,  3,  4,  3,  0, 31},  /* м */
	{0,224,  0,  0,  0,  0,224,  0,  0, 31,  1,  1,  1,  1, 31,  0},  /* н */
	{0,192, 96, 32, 32, 96,192,  0,  0, 15, 24, 16, 16, 24, 15,  0},  /* о */
	{0,224, 32, 32, 32, 32,224,  0,  0, 31,  0,  0,  0,  0, 31,  0},  /* п */
	{0,224, 64, 32, 32, 96,128,  0,  0,255, 24, 16, 16, 24,  7,  0},  /* р */
	{0,128, 64, 32, 32, 32, 64,  0,  0,  7,  8, 16, 16, 16,  8,  0},  /* с */
	{0,  0, 32, 32,224, 32, 32,  0,  0,  0,  0,  0, 31,  0,  0,  0},  /* т */
	{0, 32,192,  0,  0,128, 96,  0,  0,  0,129,198, 60,  3,  0,  0},  /* у */
	{0,192, 96, 32,252, 32, 96,192,  0, 15, 24, 16,255, 16, 24, 15},  /* ф */
	{0, 32, 64,128,128, 64, 32,  0,  0, 16, 12,  3,  3, 12, 16,  0},  /* х */
	{0,224,  0,  0,  0,  0,224,  0,  0, 31, 16, 16, 16, 16, 31,112},  /* ц */
	{0,224,  0,  0,  0,  0,224,  0,  0,  1,  2,  2,  2,  2, 31,  0},  /* ч */
	{0,224,  0,  0,224,  0,  0,224,  0, 31, 16, 16, 31, 16, 16, 31},  /* ш */
	{0,224,  0,  0,224,  0,  0,224,  0, 31, 16, 16, 31, 16, 16,127},  /* щ */
	{32, 32,224,  0,  0,  0,  0,  0,  0,  0, 31, 17, 17, 17, 17,14},  /* ъ */
	{0,224,  0,  0,  0,  0,  0,224,  0, 31, 17, 17, 17, 14,  0, 31},  /* ы */
	{0,224,  0,  0,  0,  0,  0,  0,  0, 31, 17, 17, 17, 17, 14,  0},  /* ь */
	{0, 64, 32, 32, 32, 64,128,  0,  0,  8, 17, 17, 17,  9,  7,  0},  /* э */
	{0,224,  0,192, 96, 32, 96,192,  0, 31,  2, 15, 24, 16, 24, 15},  /* ю */
	{0,192, 32, 32, 32,224,  0,  0,  0, 17, 14,  2,  2, 31,  0,  0}   /* я */
};

#endif /* FONTS_H_ */