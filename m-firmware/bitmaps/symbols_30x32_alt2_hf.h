/* ************************************************************************
 *
 *   alternative 30x32 component symbols #2
 *   horizontally aligned, horizontal bit order flipped
 *
 *   (c) 2015-2022 by Markus Reschke
 *   modified by indman@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_30X32_ALT2_HF


/* source management */
#define SYMBOL_SET                 /* symbol set included */

/* symbol size */
#define SYMBOL_SIZE_X       30     /* width:  30 dots */
#define SYMBOL_SIZE_Y       32     /* height: 32 dots */

/* symbol data format */
#define SYMBOL_BYTES_N     128     /* 128 bytes per symbol */
#define SYMBOL_BYTES_X       4     /* 4 bytes in x direction */
#define SYMBOL_BYTES_Y      32     /* 32 bytes in y direction */


/*
 *  symbol bitmaps
 *  - format:
 *    - 128 bytes per symbol
 *    - first four bytes: first horizontal line (top to down)
 *      first byte: left part
 *    - bit #0: left / bit #7: right (horizontally flipped)
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0x00,0xE0,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0xE0,0x08,0x78,0x00,0x00,0x04,
  0x88,0x00,0x06,0x02,0x88,0x00,0x06,0x01,0x78,0x00,0x86,0x00,0x88,0x00,0x46,0x00,
  0x88,0x00,0x26,0x00,0x78,0x00,0x16,0x00,0x00,0x00,0x0E,0x00,0xFC,0xFF,0x07,0x00,
  0x00,0x00,0x0E,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x26,0x02,0x00,0x00,0x46,0x03,
  0x00,0x00,0x86,0x03,0x00,0x00,0xC6,0x03,0x00,0x00,0xE6,0x03,0x00,0x00,0x00,0x04,
  0x00,0x00,0xF0,0x09,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x11,0x00,0x00,0x00,0x00,   /* BJT npn */

  0x00,0x00,0xF0,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x09,0x78,0x00,0x00,0x04,
  0x88,0x00,0x26,0x02,0x88,0x00,0x66,0x01,0x78,0x00,0xE6,0x00,0x88,0x00,0xE6,0x01,
  0x88,0x00,0xE6,0x03,0x78,0x00,0x16,0x00,0x00,0x00,0x0E,0x00,0xFC,0xFF,0x07,0x00,
  0x00,0x00,0x0E,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x26,0x00,0x00,0x00,0x46,0x00,
  0x00,0x00,0x86,0x00,0x00,0x00,0x06,0x01,0x00,0x00,0x06,0x02,0x00,0x00,0x00,0x04,
  0x00,0x00,0xE0,0x08,0x00,0x00,0x10,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x36,0xE0,0x10,0x00,0x36,0x00,0x10,
  0x00,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x02,0x00,0x36,0x00,0x02,0x00,0x06,0x00,0x02,
  0x00,0x06,0x04,0x02,0x00,0x36,0x06,0x02,0x00,0x36,0xC7,0x1F,0x00,0xF6,0x1F,0x02,
  0x38,0x36,0x17,0x07,0x44,0x36,0x96,0x0F,0x04,0x06,0xD4,0x1F,0x64,0x06,0x10,0x02,
  0x44,0x36,0x10,0x02,0x44,0x36,0x10,0x02,0x38,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x10,
  0xFE,0x37,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* MOSFET enh n-ch */

  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0xFE,0x37,0xC0,0x11,0x00,0x36,0x00,0x10,
  0x38,0xF6,0xFF,0x1F,0x44,0x36,0x10,0x02,0x04,0x36,0x10,0x02,0x64,0x06,0x10,0x02,
  0x44,0x06,0x11,0x02,0x44,0x36,0x13,0x02,0x38,0x36,0xD7,0x1F,0x00,0xF6,0x1F,0x02,
  0x00,0x36,0x07,0x07,0x00,0x36,0x83,0x0F,0x00,0x06,0xC1,0x1F,0x00,0x06,0x00,0x02,
  0x00,0x36,0x00,0x02,0x00,0x36,0x00,0x02,0x00,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x10,
  0x00,0x36,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x36,0xE0,0x10,0x00,0x36,0x00,0x10,
  0x00,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x02,0x00,0x36,0x00,0x02,0x00,0x36,0x00,0x02,
  0x00,0x36,0x04,0x02,0x00,0x36,0x06,0x02,0x00,0x36,0xC7,0x1F,0x00,0xF6,0x1F,0x02,
  0x38,0x36,0x17,0x07,0x44,0x36,0x96,0x0F,0x04,0x36,0xD4,0x1F,0x64,0x36,0x10,0x02,
  0x44,0x36,0x10,0x02,0x44,0x36,0x10,0x02,0x38,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x10,
  0xFE,0x37,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* MOSFET dep n-ch */

  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0xFE,0x37,0xC0,0x11,0x00,0x36,0x00,0x10,
  0x38,0xF6,0xFF,0x1F,0x44,0x36,0x10,0x02,0x04,0x36,0x10,0x02,0x64,0x36,0x10,0x02,
  0x44,0x36,0x11,0x02,0x44,0x36,0x13,0x02,0x38,0x36,0xD7,0x1F,0x00,0xF6,0x1F,0x02,
  0x00,0x36,0x07,0x07,0x00,0x36,0x83,0x0F,0x00,0x36,0xC1,0x1F,0x00,0x36,0x00,0x02,
  0x00,0x36,0x00,0x02,0x00,0x36,0x00,0x02,0x00,0xF6,0xFF,0x1F,0x00,0x36,0x00,0x10,
  0x00,0x36,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x38,0x00,0xC0,0x11,0x44,0x00,0x20,0x12,0x04,0x00,0x20,0x10,0x64,0x00,0xC0,0x11,
  0x44,0x00,0x00,0x12,0x44,0x02,0x20,0x12,0x38,0x86,0xC1,0x11,0x00,0x8E,0x01,0x10,
  0xFE,0xFF,0xFF,0x1F,0x00,0x8E,0x01,0x00,0x00,0x86,0x01,0x00,0x00,0x82,0x01,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0xFF,0x1F,0x00,0x80,0x01,0x10,
  0x00,0x80,0xE1,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* JFET n-ch */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x80,0xE1,0x10,0x00,0x80,0x01,0x10,
  0x00,0x80,0xFF,0x1F,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x38,0x80,0x01,0x00,0x44,0x80,0x01,0x00,
  0x04,0x80,0x01,0x00,0x64,0x80,0x01,0x00,0x44,0x80,0x01,0x00,0x44,0x90,0x01,0x00,
  0x38,0x98,0x01,0x00,0x00,0x9C,0x01,0x00,0xFE,0xFF,0xFF,0x1F,0x00,0x9C,0x01,0x10,
  0x00,0x98,0xC1,0x11,0x00,0x10,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0x0E,0x10,0x00,0x00,0x11,0x10,0x00,0x00,0x01,0x10,0x00,0x00,0x01,0x10,
  0x00,0x00,0x01,0x11,0x00,0x00,0x11,0x0B,0x00,0x00,0x0E,0x07,0x00,0x00,0x00,0x0F,
  0x00,0x80,0x01,0x1F,0x00,0x80,0x8D,0x00,0x00,0x80,0x7D,0x00,0x00,0x80,0x0D,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x38,0x80,0x0D,0x00,0x44,0x80,0x3D,0x00,
  0x04,0x80,0x4D,0x00,0x64,0x80,0x81,0x00,0x44,0x80,0x01,0x00,0x44,0x80,0x0D,0x00,
  0x38,0x80,0x7D,0x04,0x00,0x80,0x8D,0x06,0xFE,0xFF,0x01,0x07,0x00,0x00,0x80,0x07,
  0x00,0x00,0xDF,0x07,0x00,0x00,0x01,0x08,0x00,0x00,0x01,0x10,0x00,0x00,0x0F,0x10,
  0x00,0x00,0x01,0x10,0x00,0x00,0x01,0x10,0x00,0x00,0x1F,0x10,0x00,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x38,0x00,0x1F,0x10,0x44,0x00,0x01,0x10,0x04,0x00,0x01,0x10,0x64,0x00,0x0F,0x10,
  0x44,0x00,0x01,0x11,0x44,0x00,0x01,0x0B,0x38,0x00,0x1F,0x07,0x00,0x00,0x00,0x0F,
  0xFE,0xFF,0x01,0x1F,0x00,0x80,0x8D,0x00,0x00,0x80,0x7D,0x00,0x00,0x80,0x0D,0x00,
  0x00,0x80,0x01,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x0D,0x00,0x00,0x80,0x3D,0x00,
  0x00,0x80,0x4D,0x00,0x00,0x80,0x81,0x00,0x00,0x80,0x01,0x00,0x00,0x80,0x0D,0x00,
  0x00,0x80,0x7D,0x04,0x00,0x80,0x8D,0x06,0x00,0x80,0x01,0x07,0x00,0x00,0x80,0x07,
  0x00,0x00,0xCE,0x07,0x00,0x00,0x11,0x08,0x00,0x00,0x01,0x10,0x00,0x00,0x01,0x10,
  0x00,0x00,0x01,0x10,0x00,0x00,0x11,0x10,0x00,0x00,0x0E,0x10,0x00,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x08,0x00,
  0x00,0x00,0x08,0x00,0x00,0xFC,0xFF,0x1F,0x00,0xF8,0xFF,0x0F,0x00,0xF0,0xFF,0x07,
  0x00,0xE0,0xFF,0x03,0x00,0xC0,0xFF,0x01,0x00,0x80,0xFF,0x00,0x00,0x00,0x7F,0x00,
  0x38,0x00,0x3E,0x00,0x44,0x00,0x1C,0x00,0x04,0x00,0x08,0x00,0x64,0xFC,0xFF,0x1F,
  0x44,0xFC,0xFF,0x1F,0x44,0x00,0x0C,0x00,0x38,0x00,0x0A,0x00,0x00,0x00,0x09,0x00,
  0xFE,0xFF,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x00,
  0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x04,0x00,0x00,0x88,0x03,0x00,0x00,0x00,0x00,   /* SCR */

  0x00,0x8E,0x09,0x00,0x00,0x51,0x0A,0x00,0x00,0x11,0x0A,0x00,0x00,0x1F,0x09,0x00,
  0x00,0x91,0x08,0x00,0x00,0x51,0x08,0x00,0x00,0xD1,0x0B,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x08,0x00,0x00,0xFF,0xFF,0x1F,0x00,0xFE,0x8F,0x00,0x00,0xFE,0xCF,0x01,
  0x00,0xFC,0xC7,0x01,0x00,0xFC,0xE7,0x03,0x00,0xF8,0xE3,0x03,0x00,0xF8,0xF3,0x07,
  0x38,0xF0,0xF1,0x07,0x44,0xF0,0xF9,0x0F,0x04,0xE0,0xF8,0x0F,0x64,0xE0,0xFC,0x1F,
  0x44,0x40,0xFC,0x1F,0x44,0xFE,0xFF,0x3F,0x38,0x20,0x08,0x00,0x00,0x10,0x08,0x00,
  0xFE,0x0F,0xC8,0x11,0x00,0x00,0x28,0x1A,0x00,0x00,0x28,0x12,0x00,0x00,0xE8,0x13,
  0x00,0x00,0x28,0x12,0x00,0x00,0x28,0x12,0x00,0x00,0x28,0x3A,0x00,0x00,0x00,0x00,   /* Triac */

  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0xFE,0xFF,0x48,0x04,0x00,0x00,0x09,0x00,
  0x38,0x00,0x0A,0x00,0x44,0x00,0x0C,0x00,0x04,0xFC,0xFF,0x1F,0x64,0xF8,0xFF,0x0F,
  0x44,0xF0,0xFF,0x07,0x44,0xE0,0xFF,0x03,0x38,0xC0,0xFF,0x01,0x00,0x80,0xFF,0x00,
  0x00,0x00,0x7F,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x08,0x00,
  0x00,0xFC,0xFF,0x1F,0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x00,
  0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x04,0x00,0x00,0x88,0x03,0x00,0x00,0x00,0x00,   /* PUT */

  0x00,0x00,0x1E,0x13,0x00,0x00,0xA2,0x14,0x00,0x00,0x22,0x14,0x00,0x00,0x1E,0x12,
  0x00,0x00,0x22,0x11,0x00,0x00,0xA2,0x10,0x1E,0xC0,0x9E,0x17,0x20,0xC0,0x00,0x10,
  0x40,0xC0,0xFF,0x1F,0x80,0xC8,0x00,0x00,0x3E,0xCD,0x00,0x00,0x02,0xCE,0x00,0x00,
  0x02,0xCF,0x00,0x00,0x9E,0xCF,0x00,0x00,0x02,0xD0,0x00,0x00,0x02,0xE0,0x00,0x00,
  0x3E,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,
  0x00,0xC0,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0xC0,0xFF,0x1F,0x00,0xC0,0x00,0x10,
  0x00,0xC0,0x1E,0x11,0x00,0x00,0xA2,0x11,0x00,0x00,0x22,0x11,0x00,0x00,0x1E,0x11,
  0x00,0x00,0x22,0x11,0x00,0x00,0x22,0x11,0x00,0x00,0x9E,0x13,0x00,0x00,0x00,0x00    /* UJT n-type */
     
  #ifdef SYMBOLS_EXTRA
  ,
  0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0xFE,0x03,0x00,0x00,0xFF,0x07,0x00,
  0x80,0x07,0x0F,0x00,0x80,0x73,0x0E,0x00,0xC0,0x09,0x1C,0x00,0xC0,0x05,0x5C,0x00,
  0xC0,0x05,0x5C,0x00,0x00,0x00,0x5C,0x00,0x00,0x00,0x4E,0x00,0x00,0x00,0x2F,0x00,
  0x00,0x80,0x27,0x00,0x00,0xC0,0x13,0x00,0x00,0xE0,0x09,0x00,0x00,0xF0,0x04,0x00,
  0x00,0x78,0x02,0x00,0x00,0x78,0x01,0x00,0x00,0x78,0x01,0x00,0x00,0x78,0x01,0x00,
  0x00,0x00,0x01,0x00,0x00,0xF0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x30,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x01,0x00,0x00,0x30,0x01,0x00,
  0x00,0x80,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* question mark */

  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x02,0x00,0x00,0x48,0x01,0x00,0x00,0xC8,0x00,
  0x00,0x00,0x48,0x01,0x00,0x00,0x48,0x02,0x00,0x04,0x48,0x04,0x00,0x04,0x08,0x00,
  0x00,0x04,0x08,0x00,0x00,0xFC,0xFF,0x1F,0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x10,
  0x00,0x00,0x1C,0x10,0x00,0x00,0x3E,0x10,0x00,0x00,0x7F,0x00,0x00,0x80,0xFF,0x00,
  0x00,0xC0,0xFF,0x01,0x00,0xE0,0xFF,0x03,0x00,0xF0,0xFF,0x07,0x00,0xF8,0xFF,0x0F,
  0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x00,0x00,   /* Zener diode */

  0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xFF,0x7F,0x00,0x00,0xFF,0x7F,0x00,
  0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,
  0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,
  0x00,0xFF,0x7F,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00    /* quartz crystal */
  #endif
};  



/*
 *  pin position lookup table
 *  - one byte per pin and 3 bytes (pins) for each symbol
 *  - cross reference for the Semi structure's pins:
 *
 *      BJT         FET         SCR         Triac       IGBT
 *  ------------------------------------------------------------------
 *  A   Base        Gate        Gate        Gate        Gate
 *  B   Collector   Drain       Anode       MT2         Collector
 *  C   Emitter     Source      Cathode     MT1         Emitter
 *
 *      PUT         UJT
 *  ------------------------------------------------------------------
 *  A   Gate        Emitter
 *  B   Anode       B2
 *  C   Cathode     B1
 */

const uint8_t PinTable[] PROGMEM = {
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* BJT npn */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* BJT pnp */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET dep n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET dep p-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,      /* JFET n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* Triac */
  PIN_LEFT | PIN_TOP,PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,       /* PUT */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* UJT n-type */
  #ifdef SYMBOLS_EXTRA
  ,
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* question mark */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* Zener diode */
  PIN_NONE, PIN_NONE, PIN_NONE                                          /* quartz crystal */
  #endif
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
