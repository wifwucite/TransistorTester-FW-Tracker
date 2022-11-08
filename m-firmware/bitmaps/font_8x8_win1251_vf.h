/* ************************************************************************
 *
 *   monospaced 8x8 font based on Windows-1251
 *   vertically aligned, vertical bit order flipped
 *
 *   ASCII characters (c) 2015-2020 by Markus Reschke
 *   cyrillic characters added by Andrey@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   font data
 * ************************************************************************ */

#ifdef FONT_8X8_WIN1251_VF


/* font size */
#define FONT_SIZE_X          8     /* width:  8 dots */
#define FONT_SIZE_Y          8     /* heigth: 8 dots */

/* font data format */
#define FONT_BYTES_N         8     /* 8 bytes per character */
#define FONT_BYTES_X         8     /* 8 bytes in x direction */
#define FONT_BYTES_Y         1     /* 1 byte in y direction */


/*
 *  character bitmaps
 *  - to reduce size we place some symbols and special characters at
 *    positions 0-15, and we move the standard chars up in the list by
 *    16 positions (using ASCII's 0-31 for control chars)
 *  - format:
 *    - 8 bytes per character
 *    - first byte: first vertical line (left to right)
 *    - bit #0: top / bit #7: bottom (vertically flipped)
 */

const uint8_t FontData[] PROGMEM = {
  /* symbols and special characters */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x00 n/a */
  0x08,0x7F,0x3E,0x1C,0x08,0x7F,0x7F,0x08,   /* 0x01 symbol: diode A-C */
  0x08,0x7F,0x7F,0x08,0x1C,0x3E,0x7F,0x08,   /* 0x02 symbol: diode C-A */
  0x08,0x7F,0x7F,0x00,0x00,0x7F,0x7F,0x08,   /* 0x03 symbol: capacitor */
  0x4C,0x5E,0x72,0x02,0x72,0x5E,0x4C,0x00,   /* 0x04 omega */
  0xC0,0x7E,0x3E,0x20,0x1E,0x3E,0x20,0x00,   /* 0x05 � (micro) */
  0x08,0x7F,0x41,0x41,0x41,0x41,0x41,0x41,   /* 0x06 symbol: resistor left side */
  0x41,0x41,0x41,0x41,0x41,0x41,0x7F,0x08,   /* 0x07 symbol: resistor right side */

  0xC0,0x7C,0x7E,0x43,0x43,0x7F,0x7F,0xC0,   /* 0x08 � */
  0x7F,0x7F,0x60,0x60,0x60,0x7F,0xFF,0xC0,   /* 0x09 � */
  0x7F,0x7F,0x64,0x64,0x64,0x7C,0x38,0x00,   /* 0x0a � */
  0x40,0x66,0x2F,0x39,0x19,0x7F,0x7F,0x00,   /* 0x0b � */
  0xC0,0x7C,0x7E,0x42,0x42,0x7E,0x7E,0xC0,   /* 0x0c � */
  0x7E,0x7E,0x60,0x60,0x60,0x7E,0x7E,0xC0,   /* 0x0d � */
  0x7E,0x7E,0x68,0x68,0x78,0x30,0x00,0x00,   /* 0x0e � */
  0x00,0x00,0x02,0x05,0x02,0x00,0x00,0x00,   /* 0x0f � (degree) */

  /* standard characters */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x10 space */
  0x00,0x06,0x6F,0x6F,0x06,0x00,0x00,0x00,   /* 0x11 ! */
  0x00,0x0B,0x07,0x00,0x00,0x0B,0x07,0x00,   /* 0x12 " */
  0x36,0x7F,0x7F,0x36,0x7F,0x7F,0x36,0x00,   /* 0x13 # */
  0x04,0x2E,0x2A,0x6B,0x2A,0x3A,0x10,0x00,   /* 0x14 $ */
  0x63,0x73,0x38,0x1C,0x0E,0x67,0x63,0x00,   /* 0x15 % */
  0x36,0x7F,0x49,0x79,0x3B,0x6A,0x48,0x00,   /* 0x16 & */
  0x00,0x00,0x07,0x0B,0x00,0x00,0x00,0x00,   /* 0x17 � */
  0x00,0x00,0x1C,0x3E,0x63,0x41,0x00,0x00,   /* 0x18 ( */
  0x00,0x00,0x41,0x63,0x3E,0x1C,0x00,0x00,   /* 0x19 ) */
  0x00,0x15,0x0A,0x1F,0x1F,0x0A,0x15,0x00,   /* 0x1a * */
  0x00,0x18,0x18,0x7E,0x7E,0x18,0x18,0x00,   /* 0x1b + */
  0x00,0x00,0xB0,0x70,0x00,0x00,0x00,0x00,   /* 0x1c , */
  0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,   /* 0x1d - */
  0x00,0x00,0x60,0x60,0x00,0x00,0x00,0x00,   /* 0x1e . */
  0x60,0x70,0x38,0x1C,0x0E,0x07,0x03,0x00,   /* 0x1f / */
  0x1C,0x3E,0x63,0x41,0x63,0x3E,0x1C,0x00,   /* 0x20 0 */
  0x00,0x42,0x7F,0x7F,0x40,0x00,0x00,0x00,   /* 0x21 1 */
  0x62,0x73,0x51,0x59,0x49,0x4F,0x46,0x00,   /* 0x22 2 */
  0x22,0x63,0x41,0x49,0x49,0x77,0x36,0x00,   /* 0x23 3 */
  0x18,0x1C,0x16,0x13,0x7F,0x7F,0x10,0x00,   /* 0x24 4 */
  0x27,0x67,0x45,0x45,0x45,0x7D,0x38,0x00,   /* 0x25 5 */
  0x3C,0x7E,0x4B,0x49,0x49,0x79,0x30,0x00,   /* 0x26 6 */
  0x03,0x03,0x71,0x79,0x0D,0x07,0x03,0x00,   /* 0x27 7 */
  0x36,0x7F,0x49,0x49,0x49,0x7F,0x36,0x00,   /* 0x28 8 */
  0x06,0x4F,0x49,0x49,0x69,0x3F,0x1E,0x00,   /* 0x29 9 */
  0x00,0x00,0x00,0x66,0x66,0x00,0x00,0x00,   /* 0x2a : */
  0x00,0x00,0x00,0xA6,0x66,0x00,0x00,0x00,   /* 0x2b ; */
  0x00,0x08,0x1C,0x36,0x63,0x00,0x00,0x00,   /* 0x2c < */
  0x36,0x36,0x36,0x36,0x36,0x36,0x36,0x00,   /* 0x2d = */
  0x00,0x41,0x63,0x36,0x1C,0x08,0x00,0x00,   /* 0x2e > */
  0x02,0x03,0x69,0x6D,0x07,0x06,0x00,0x00,   /* 0x2f ? */
  0x3E,0x63,0x5D,0x55,0x5D,0x6B,0x2E,0x00,   /* 0x30 @ */
  0x7C,0x7E,0x13,0x11,0x13,0x7E,0x7C,0x00,   /* 0x31 A */
  0x7F,0x7F,0x49,0x49,0x49,0x7F,0x36,0x00,   /* 0x32 B */
  0x1C,0x3E,0x63,0x41,0x41,0x63,0x22,0x00,   /* 0x33 C */
  0x7F,0x7F,0x41,0x41,0x63,0x3E,0x1C,0x00,   /* 0x34 D */
  0x7F,0x7F,0x49,0x49,0x49,0x49,0x41,0x00,   /* 0x35 E */
  0x7F,0x7F,0x09,0x09,0x09,0x09,0x01,0x00,   /* 0x36 F */
  0x1C,0x3E,0x63,0x41,0x49,0x79,0x79,0x00,   /* 0x37 G */
  0x7F,0x7F,0x08,0x08,0x08,0x7F,0x7F,0x00,   /* 0x38 H */
  0x00,0x00,0x41,0x7F,0x7F,0x41,0x00,0x00,   /* 0x39 I */
  0x30,0x70,0x40,0x40,0x40,0x7F,0x3F,0x00,   /* 0x3a J */
  0x7F,0x7F,0x18,0x3C,0x36,0x63,0x41,0x00,   /* 0x3b K */
  0x7F,0x7F,0x40,0x40,0x40,0x40,0x40,0x00,   /* 0x3c L */
  0x7F,0x7F,0x0E,0x1C,0x0E,0x7F,0x7F,0x00,   /* 0x3d M */
  0x7F,0x7F,0x0E,0x1C,0x38,0x7F,0x7F,0x00,   /* 0x3e N */
  0x1C,0x3E,0x63,0x41,0x63,0x3E,0x1C,0x00,   /* 0x3f O */
  0x7F,0x7F,0x11,0x11,0x11,0x1F,0x0E,0x00,   /* 0x40 P */
  0x3E,0x7F,0x41,0x51,0x71,0x3F,0x5E,0x00,   /* 0x41 Q */
  0x7F,0x7F,0x09,0x19,0x39,0x6F,0x46,0x00,   /* 0x42 R */
  0x26,0x6F,0x49,0x49,0x49,0x7B,0x32,0x00,   /* 0x43 S */
  0x00,0x01,0x01,0x7F,0x7F,0x01,0x01,0x00,   /* 0x44 T */
  0x3F,0x7F,0x40,0x40,0x40,0x7F,0x3F,0x00,   /* 0x45 U */
  0x0F,0x1F,0x38,0x70,0x38,0x1F,0x0F,0x00,   /* 0x46 V */
  0x3F,0x7F,0x40,0x38,0x40,0x7F,0x3F,0x00,   /* 0x47 W */
  0x63,0x77,0x3E,0x1C,0x3E,0x77,0x63,0x00,   /* 0x48 X */
  0x00,0x07,0x0F,0x78,0x78,0x0F,0x07,0x00,   /* 0x49 Y */
  0x61,0x71,0x79,0x5D,0x4F,0x47,0x43,0x00,   /* 0x4a Z */
  0x00,0x7F,0x7F,0x41,0x41,0x00,0x00,0x00,   /* 0x4b [ */
  0x03,0x07,0x0E,0x1C,0x38,0x70,0x60,0x00,   /* 0x4c \ */
  0x00,0x41,0x41,0x7F,0x7F,0x00,0x00,0x00,   /* 0x4d ] */
  0x08,0x0C,0x06,0x03,0x06,0x0C,0x08,0x00,   /* 0x4e ^ */
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,   /* 0x4f _ */
  0x00,0x00,0x07,0x0B,0x00,0x00,0x00,0x00,   /* 0x50 ` */
  0x30,0x7A,0x4A,0x4A,0x7E,0x3C,0x40,0x00,   /* 0x51 a */
  0x7F,0x7F,0x44,0x42,0x62,0x7E,0x3C,0x00,   /* 0x52 b */
  0x18,0x3C,0x66,0x42,0x42,0x66,0x24,0x00,   /* 0x53 c */
  0x3C,0x7E,0x42,0x42,0x44,0x7F,0x7F,0x00,   /* 0x54 d */
  0x3C,0x7E,0x4A,0x4A,0x4A,0x6E,0x2C,0x00,   /* 0x55 e */
  0x00,0x08,0x7E,0x7F,0x09,0x0A,0x00,0x00,   /* 0x56 f */
  0x1C,0x3E,0xA2,0xA2,0x92,0xFE,0x7C,0x00,   /* 0x57 g */
  0x7F,0x7F,0x04,0x02,0x02,0x7E,0x7C,0x00,   /* 0x58 h */
  0x00,0x00,0x48,0x7B,0x7B,0x40,0x00,0x00,   /* 0x59 i */
  0x00,0x40,0xC0,0x88,0xFB,0x7B,0x00,0x00,   /* 0x5a j */
  0x00,0x7F,0x7F,0x08,0x34,0x66,0x42,0x00,   /* 0x5b k */
  0x00,0x00,0x01,0x7F,0x7F,0x00,0x00,0x00,   /* 0x5c l */
  0x7E,0x7E,0x02,0x7E,0x04,0x7E,0x7C,0x00,   /* 0x5d m */
  0x7E,0x7E,0x04,0x02,0x06,0x7C,0x78,0x00,   /* 0x5e n */
  0x18,0x3C,0x66,0x42,0x66,0x3C,0x18,0x00,   /* 0x5f o */
  0xFE,0xFE,0x22,0x42,0x42,0x7E,0x3C,0x00,   /* 0x60 p */
  0x00,0x3C,0x7E,0x42,0x42,0x22,0xFE,0xFE,   /* 0x61 q */
  0x7E,0x7E,0x04,0x02,0x02,0x0E,0x0C,0x00,   /* 0x62 r */
  0x24,0x6E,0x4A,0x4A,0x4A,0x7A,0x30,0x00,   /* 0x63 s */
  0x04,0x04,0x3F,0x7F,0x44,0x64,0x20,0x00,   /* 0x64 t */
  0x3E,0x7E,0x40,0x40,0x20,0x7E,0x7E,0x00,   /* 0x65 u */
  0x0E,0x1E,0x30,0x60,0x30,0x1E,0x0E,0x00,   /* 0x66 v */
  0x3E,0x7E,0x40,0x30,0x40,0x7E,0x3E,0x00,   /* 0x67 w */
  0x62,0x76,0x1C,0x08,0x1C,0x76,0x62,0x00,   /* 0x68 x */
  0x1E,0x3E,0xA0,0xA0,0x90,0xFE,0x7E,0x00,   /* 0x69 y */
  0x42,0x62,0x72,0x5A,0x4E,0x46,0x00,0x00,   /* 0x6a z */
  0x08,0x3E,0x77,0x41,0x41,0x00,0x00,0x00,   /* 0x6b { */
  0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00,   /* 0x6c | */
  0x00,0x00,0x41,0x41,0x77,0x3E,0x08,0x00,   /* 0x6d } */
  0x1C,0x1C,0x1C,0x7F,0x3E,0x1C,0x08,0x00,   /* 0x6e ~ */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x6f n/a */

  /* cyrillic characters */
  0x7F,0x7F,0x49,0x49,0x49,0x79,0x33,0x00,   /* 0x70 'A' Cyr_B */
  0x7F,0x7F,0x01,0x01,0x01,0x03,0x03,0x00,   /* 0x71 '�' Cyr_G */
  0x7E,0x7E,0x4A,0x4B,0x4A,0x4B,0x42,0x00,   /* 0x72 '�' Cyr_Jo */
  0x41,0x3E,0x08,0x7F,0x08,0x3E,0x41,0x00,   /* 0x73 '�' Cyr_Zsch */
  0x22,0x63,0x41,0x49,0x6B,0x7F,0x36,0x00,   /* 0x74 '�' Cyr_Z */
  0x7F,0x7F,0x20,0x1C,0x02,0x7F,0x7F,0x00,   /* 0x75 '�' Cyr_I */
  0x7E,0x7E,0x20,0x19,0x04,0x7E,0x7E,0x00,   /* 0x76 '�' Cyr_J */
  0x40,0x60,0x38,0x0E,0x03,0x7F,0x7F,0x00,   /* 0x77 '�' Cyr_L */
  0x7F,0x7F,0x01,0x01,0x01,0x7F,0x7F,0x00,   /* 0x78 '�' Cyr_P */
  0x67,0x4F,0x58,0x50,0x58,0x7F,0x3F,0x00,   /* 0x79 '�' Cyr_U */
  0x1C,0x3E,0x22,0x7F,0x22,0x3E,0x1C,0x00,   /* 0x7a '�' Cyr_F */
  0x0F,0x1F,0x18,0x18,0x18,0x7F,0x7F,0x00,   /* 0x7b '�' Cyr_Tsch */
  0x7F,0x7F,0x60,0x7E,0x60,0x7F,0x7F,0x00,   /* 0x7c '�' Cyr_Sch */
  0x01,0x7F,0x7F,0x6C,0x6C,0x7C,0x38,0x00,   /* 0x7d '�' Cyr_HH */
  0x7F,0x7F,0x44,0x7C,0x00,0x7F,0x7F,0x00,   /* 0x7e '�' Cyr_Y */
  0x30,0x63,0x61,0x69,0x6B,0x7F,0x3E,0x00,   /* 0x7f '�' Cyr_E */
  0x7F,0x7F,0x08,0x3E,0x41,0x7F,0x3E,0x00,   /* 0x80 '�' Cyr_Ju */
  0x40,0x66,0x2F,0x39,0x19,0x7F,0x7F,0x00,   /* 0x81 '�' Cyr_Ja */
  0x3C,0x7E,0x45,0x45,0x6D,0x79,0x32,0x00,   /* 0x82 '�' Cyr_b */
  0x7E,0x7E,0x4A,0x4A,0x4E,0x7C,0x30,0x00,   /* 0x83 '�' Cyr_v */
  0x7E,0x7E,0x02,0x02,0x02,0x02,0x06,0x00,   /* 0x84 '�' Cyr_g */
  0x3C,0x7E,0x4B,0x4A,0x4B,0x6E,0x2C,0x00,   /* 0x85 '�' Cyr_jo */
  0x42,0x3C,0x08,0x7E,0x08,0x3C,0x42,0x00,   /* 0x86 '�' Cyr_zsch */
  0x20,0x64,0x42,0x4A,0x4A,0x7E,0x34,0x00,   /* 0x87 '�' Cyr_z */
  0x7E,0x7E,0x20,0x18,0x04,0x7E,0x7E,0x00,   /* 0x88 '�' Cyr_i */
  0x7E,0x7E,0x20,0x19,0x04,0x7E,0x7E,0x00,   /* 0x89 '�' Cyr_j */
  0x00,0x7E,0x7E,0x08,0x34,0x66,0x42,0x00,   /* 0x8a '�' Cyr_k */
  0x40,0x60,0x38,0x0C,0x06,0x7E,0x7E,0x00,   /* 0x8b '�' Cyr_l */
  0x7E,0x7E,0x0C,0x10,0x0C,0x7E,0x7E,0x00,   /* 0x8c '�' Cyr_m */
  0x7E,0x7E,0x18,0x18,0x18,0x7E,0x7E,0x00,   /* 0x8d '�' Cyr_n */
  0x7E,0x7E,0x06,0x06,0x06,0x7E,0x7E,0x00,   /* 0x8e '�' Cyr_p */
  0x0E,0x06,0x7E,0x7E,0x06,0x0E,0x00,0x00,   /* 0x8f '�' Cyr_t */
  0x0E,0x1E,0x18,0x18,0x18,0x7E,0x7E,0x00,   /* 0x90 '�' Cyr_tsch */
  0x7E,0x7E,0x40,0x78,0x40,0x7E,0x7E,0x00,   /* 0x91 '�' Cyr_sch */
  0x02,0x7E,0x7E,0x48,0x48,0x78,0x30,0x00,   /* 0x92 '�' Cyr_hh */
  0x7E,0x7E,0x48,0x78,0x00,0x7E,0x7E,0x00,   /* 0x93 '�' Cyr_y */
  0x7E,0x7E,0x68,0x68,0x78,0x30,0x00,0x00,   /* 0x94 '�' Cyr_ww */
  0x30,0x66,0x62,0x6A,0x6A,0x7E,0x3C,0x00,   /* 0x95 '�' Cyr_e */
  0x7E,0x7E,0x08,0x3C,0x42,0x7E,0x3C,0x00,   /* 0x96 '�' Cyr_ju */
  0x40,0x4C,0x2E,0x12,0x12,0x7E,0x7E,0x00,   /* 0x97 '�' Cyr_ja */
  0xC0,0x7C,0x7E,0x43,0x43,0x7F,0x7F,0xC0,   /* 0x98 '�' Cyr_D */
  0xC0,0x7C,0x7E,0x42,0x42,0x7E,0x7E,0xC0,   /* 0x99 '�' Cyr_d */
  0x18,0x3C,0x24,0x7E,0x24,0x3C,0x18,0x00,   /* 0x9a '�' Cyr_f */
  0x7F,0x7F,0x60,0x60,0x60,0x7F,0xFF,0xC0,   /* 0x9b '�' Cyr_C */
  0x7E,0x7E,0x60,0x60,0x60,0x7E,0x7E,0xC0,   /* 0x9c '�' Cyr_c */
  0x7F,0x7F,0x60,0x7F,0x60,0x7F,0x7F,0xC0,   /* 0x9d '�' Cyr_Schtsch */
  0x7E,0x7E,0x60,0x7C,0x60,0x7E,0x7E,0xC0    /* 0x9e '�' Cyr_schtsch */
};


/*
 *  font lookup table for ISO 8859-1
 *  - 8 bit ISO 8859-1 to custom font
 *  - ff: no bitmap available
 */

const uint8_t FontTable[] PROGMEM = {
  0xff,        /* 0x00 -> n/a */
  0x01,        /* 0x01 -> symbol: diode A-C */
  0x02,        /* 0x02 -> symbol: diode C-A */
  0x03,        /* 0x03 -> symbol: capacitor */
  0x04,        /* 0x04 -> omega */
  0x05,        /* 0x05 -> � (micro) */
  0x06,        /* 0x06 -> symbol: resistor left side */
  0x07,        /* 0x07 -> symbol: resistor right side */
  0xff,        /* 0x08 -> n/a */
  0xff,        /* 0x09 -> n/a */
  0xff,        /* 0x0a -> n/a */
  0xff,        /* 0x0b -> n/a */
  0xff,        /* 0x0c -> n/a */
  0xff,        /* 0x0d -> n/a */
  0xff,        /* 0x0e -> n/a */
  0xff,        /* 0x0f -> n/a */

  0xff,        /* 0x10 -> n/a */
  0xff,        /* 0x11 -> n/a */
  0xff,        /* 0x12 -> n/a */
  0xff,        /* 0x13 -> n/a */
  0xff,        /* 0x14 -> n/a */
  0xff,        /* 0x15 -> n/a */
  0xff,        /* 0x16 -> n/a */
  0xff,        /* 0x17 -> n/a */
  0xff,        /* 0x18 -> n/a */
  0xff,        /* 0x19 -> n/a */
  0xff,        /* 0x1a -> n/a */
  0xff,        /* 0x1b -> n/a */
  0xff,        /* 0x1c -> n/a */
  0xff,        /* 0x1d -> n/a */
  0xff,        /* 0x1e -> n/a */
  0xff,        /* 0x1f -> n/a */

  0x10,        /* 0x20 -> space */
  0x11,        /* 0x21 -> ! */
  0x12,        /* 0x22 -> " */
  0x13,        /* 0x23 -> # */
  0x14,        /* 0x24 -> $ */
  0x15,        /* 0x25 -> % */
  0x16,        /* 0x26 -> & */
  0x17,        /* 0x27 -> � */
  0x18,        /* 0x28 -> ( */
  0x19,        /* 0x29 -> ) */
  0x1a,        /* 0x2a -> * */
  0x1b,        /* 0x2b -> + */
  0x1c,        /* 0x2c -> , */
  0x1d,        /* 0x2d -> - */
  0x1e,        /* 0x2e -> . */
  0x1f,        /* 0x2f -> / */

  0x20,        /* 0x30 -> 0 */
  0x21,        /* 0x31 -> 1 */
  0x22,        /* 0x32 -> 2 */
  0x23,        /* 0x33 -> 3 */
  0x24,        /* 0x34 -> 4 */
  0x25,        /* 0x35 -> 5 */
  0x26,        /* 0x36 -> 6 */
  0x27,        /* 0x37 -> 7 */
  0x28,        /* 0x38 -> 8 */
  0x29,        /* 0x39 -> 9 */
  0x2a,        /* 0x3a -> : */
  0x2b,        /* 0x3b -> ; */
  0x2c,        /* 0x3c -> < */
  0x2d,        /* 0x3d -> = */
  0x2e,        /* 0x3e -> > */
  0x2f,        /* 0x3f -> ? */

  0x30,        /* 0x40 -> @ */
  0x31,        /* 0x41 -> A */
  0x32,        /* 0x42 -> B */
  0x33,        /* 0x43 -> C */
  0x34,        /* 0x44 -> D */
  0x35,        /* 0x45 -> E */
  0x36,        /* 0x46 -> F */
  0x37,        /* 0x47 -> G */
  0x38,        /* 0x48 -> H */
  0x39,        /* 0x49 -> I */
  0x3a,        /* 0x4a -> J */
  0x3b,        /* 0x4b -> K */
  0x3c,        /* 0x4c -> L */
  0x3d,        /* 0x4d -> M */
  0x3e,        /* 0x4e -> N */
  0x3f,        /* 0x4f -> O */

  0x40,        /* 0x50 -> P */
  0x41,        /* 0x51 -> Q */
  0x42,        /* 0x52 -> R */
  0x43,        /* 0x53 -> S */
  0x44,        /* 0x54 -> T */
  0x45,        /* 0x55 -> U */
  0x46,        /* 0x56 -> V */
  0x47,        /* 0x57 -> W */
  0x48,        /* 0x58 -> X */
  0x49,        /* 0x59 -> Y */
  0x4a,        /* 0x5a -> Z */
  0x4b,        /* 0x5b -> [ */
  0x4c,        /* 0x5c -> \ */
  0x4d,        /* 0x5d -> ] */
  0x4e,        /* 0x5e -> ^ */
  0x4f,        /* 0x5f -> _ */

  0x50,        /* 0x60 -> ` */
  0x51,        /* 0x61 -> a */
  0x52,        /* 0x62 -> b */
  0x53,        /* 0x63 -> c */
  0x54,        /* 0x64 -> d */
  0x55,        /* 0x65 -> e */
  0x56,        /* 0x66 -> f */
  0x57,        /* 0x67 -> g */
  0x58,        /* 0x68 -> h */
  0x59,        /* 0x69 -> i */
  0x5a,        /* 0x6a -> j */
  0x5b,        /* 0x6b -> k */
  0x5c,        /* 0x6c -> l */
  0x5d,        /* 0x6d -> m */
  0x5e,        /* 0x6e -> n */
  0x5f,        /* 0x6f -> o */

  0x60,        /* 0x70 -> p */
  0x61,        /* 0x71 -> q */
  0x62,        /* 0x72 -> r */
  0x63,        /* 0x73 -> s */
  0x64,        /* 0x74 -> t */
  0x65,        /* 0x75 -> u */
  0x66,        /* 0x76 -> v */
  0x67,        /* 0x77 -> w */
  0x68,        /* 0x78 -> x */
  0x69,        /* 0x79 -> y */
  0x6a,        /* 0x7a -> z */
  0x6b,        /* 0x7b -> { */
  0x6c,        /* 0x7c -> | */
  0x6d,        /* 0x7d -> } */
  0x6e,        /* 0x7e -> ~ */
  0xff,        /* 0x7f -> n/a */

  0xff,        /* 0x80 -> n/a */
  0xff,        /* 0x81 -> n/a */
  0xff,        /* 0x82 -> n/a */
  0xff,        /* 0x83 -> n/a */
  0xff,        /* 0x84 -> n/a */
  0xff,        /* 0x85 -> n/a */
  0xff,        /* 0x86 -> n/a */
  0xff,        /* 0x87 -> n/a */
  0xff,        /* 0x88 -> n/a */
  0xff,        /* 0x89 -> n/a */
  0xff,        /* 0x8a -> n/a */
  0xff,        /* 0x8b -> n/a */
  0xff,        /* 0x8c -> n/a */
  0xff,        /* 0x8d -> n/a */
  0xff,        /* 0x8e -> n/a */
  0xff,        /* 0x8f -> n/a */

  0xff,        /* 0x90 -> n/a */
  0xff,        /* 0x91 -> n/a */
  0xff,        /* 0x92 -> n/a */
  0xff,        /* 0x93 -> n/a */
  0xff,        /* 0x94 -> n/a */
  0xff,        /* 0x95 -> n/a */
  0xff,        /* 0x96 -> n/a */
  0xff,        /* 0x97 -> n/a */
  0xff,        /* 0x98 -> n/a */
  0xff,        /* 0x99 -> n/a */
  0xff,        /* 0x9a -> n/a */
  0xff,        /* 0x9b -> n/a */
  0xff,        /* 0x9c -> n/a */
  0xff,        /* 0x9d -> n/a */
  0xff,        /* 0x9e -> n/a */
  0xff,        /* 0x9f -> n/a */

  0xff,        /* 0xa0 -> n/a */
  0xff,        /* 0xa1 -> n/a */
  0xff,        /* 0xa2 -> n/a */
  0xff,        /* 0xa3 -> n/a */
  0xff,        /* 0xa4 -> n/a */
  0xff,        /* 0xa5 -> n/a */
  0xff,        /* 0xa6 -> n/a */
  0xff,        /* 0xa7 -> n/a */
  0x72,        /* 0xa8 -> � Cyr_Jo */
  0xff,        /* 0xa9 -> n/a */
  0xff,        /* 0xaa -> n/a */
  0xff,        /* 0xab -> n/a */
  0xff,        /* 0xac -> n/a */
  0xff,        /* 0xad -> n/a */
  0xff,        /* 0xae -> n/a */
  0xff,        /* 0xaf -> n/a */

  0x0f,        /* 0xb0 -> � (degree) */
  0xff,        /* 0xb1 -> n/a */
  0xff,        /* 0xb2 -> n/a */
  0xff,        /* 0xb3 -> n/a */
  0xff,        /* 0xb4 -> n/a */
  0x05,        /* 0xb5 -> � (micro) */
  0xff,        /* 0xb6 -> n/a */
  0xff,        /* 0xb7 -> n/a */
  0x85,        /* 0xb8 -> � Cyr_jo */
  0xff,        /* 0xb9 -> n/a */
  0xff,        /* 0xba -> n/a */
  0xff,        /* 0xbb -> n/a */
  0xff,        /* 0xbc -> n/a */
  0xff,        /* 0xbd -> n/a */
  0xff,        /* 0xbe -> n/a */
  0xff,        /* 0xbf -> n/a */

  0x31,        /* 0xc0 -> � */
  0x70,        /* 0xc1 -> � Cyr_B */
  0x32,        /* 0xc2 -> � */
  0x71,        /* 0xc3 -> � Cyr_G */
  0x08,        /* 0xc4 -> � */
  0x35,        /* 0xc5 -> � */
  0x73,        /* 0xc6 -> � Cyr_Zsch */
  0x74,        /* 0xc7 -> � Cyr_Z */
  0x75,        /* 0xc8 -> � Cyr_I */
  0x76,        /* 0xc9 -> � Cyr_J */
  0x3b,        /* 0xca -> � */
  0x77,        /* 0xcb -> � Cyr_L */
  0x3d,        /* 0xcc -> � */
  0x38,        /* 0xcd -> � */
  0x3f,        /* 0xce -> � */
  0x78,        /* 0xcf -> � Cyr_P */

  0x40,        /* 0xd0 -> � */
  0x33,        /* 0xd1 -> � */
  0x44,        /* 0xd2 -> � */
  0x79,        /* 0xd3 -> � Cyr_U */
  0x7a,        /* 0xd4 -> � Cyr_F */
  0x48,        /* 0xd5 -> � */
  0x09,        /* 0xd6 -> � */
  0x7b,        /* 0xd7 -> � Cyr_Tsch */
  0x7c,        /* 0xd8 -> � Cyr_Sch */
  0x9d,        /* 0xd9 -> � Cyr_Schtsch */
  0x7d,        /* 0xda -> � Cyr_HH */
  0x7e,        /* 0xdb -> � Cyr_Y */
  0x0a,        /* 0xdc -> � */
  0x7f,        /* 0xdd -> � Cyr_E */
  0x80,        /* 0xde -> � Cyr_Ju */
  0x81,        /* 0xdf -> � Cyr_Ja */

  0x51,        /* 0xe0 -> � */
  0x82,        /* 0xe1 -> � Cyr_b */
  0x83,        /* 0xe2 -> � Cyr_v */
  0x84,        /* 0xe3 -> � Cyr_g */
  0x0c,        /* 0xe4 -> � */
  0x55,        /* 0xe5 -> � */
  0x86,        /* 0xe6 -> � Cyr_zsch */
  0x87,        /* 0xe7 -> � Cyr_z */
  0x88,        /* 0xe8 -> � Cyr_i */
  0x89,        /* 0xe9 -> � Cyr_j */
  0x8a,        /* 0xea -> � Cyr_k */
  0x8b,        /* 0xeb -> � Cyr_l */
  0x8c,        /* 0xec -> � Cyr_m */
  0x8d,        /* 0xed -> � Cyr_n */
  0x5f,        /* 0xee -> � */
  0x8e,        /* 0xef -> � Cyr_p */

  0x60,        /* 0xf0 -> � */
  0x53,        /* 0xf1 -> � */
  0x8f,        /* 0xf2 -> � Cyr_t */
  0x69,        /* 0xf3 -> � */
  0x9c,        /* 0xf4 -> � Cyr_c */
  0x68,        /* 0xf5 -> � */
  0x0d,        /* 0xf6 -> � */
  0x90,        /* 0xf7 -> � Cyr_tsch */
  0x91,        /* 0xf8 -> � Cyr_sch */
  0x9e,        /* 0xf9 -> � Cyr_schtsch�*/
  0x92,        /* 0xfa -> � Cyr_hh */
  0x93,        /* 0xfb -> � Cyr_y */
  0x0e,        /* 0xfc -> � */
  0x95,        /* 0xfd -> � Cyr_e */
  0x96,        /* 0xfe -> � Cyr_ju */
  0x97         /* 0xff -> � Cyr_ja */
};

#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
