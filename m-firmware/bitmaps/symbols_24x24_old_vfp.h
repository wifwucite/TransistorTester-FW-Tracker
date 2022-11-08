/* ************************************************************************
 *
 *   old 24x24 component symbols 
 *   vertically aligned, vertical bit order flipped
 *   with bank/page-wise grouping
 *
 *   (c) 2015-2022 by Markus Reschke
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_24X24_OLD_VFP


/* source management */
#define SYMBOL_SET                 /* symbol set included */

/* symbol size */
#define SYMBOL_SIZE_X       24     /* width:  24 dots */
#define SYMBOL_SIZE_Y       24     /* height: 24 dots */

/* symbol data format */
#define SYMBOL_BYTES_N      72     /* 72 bytes per symbol */
#define SYMBOL_BYTES_X      24     /* 24 bytes in x direction */
#define SYMBOL_BYTES_Y       3     /* 3 bytes in y direction */


/*
 *  symbol bitmaps
 *  - format:
 *    - 72 bytes per symbol
 *    - first byte: first vertical line of top 8 rows (left to right)
 *    - first 24 bytes: all vertical lines of top 8 rows
 *      next 24 bytes: all vertical lines of next 8 rows
 *      last 24 bytes: all vertical lines of last 8 rows
 *    - bit #0: top / bit #7: bottom (vertically flipped)
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0x08,0xC8,0xC4,0x04,0x04,0x04,0x84,0x48,
  0x28,0x1F,0x10,0x60,0x80,0x00,0x00,0x00,0x08,0x08,0x08,0x3E,0xC9,0x08,0x08,0x08,
  0x08,0xFF,0xFF,0x14,0x22,0x41,0x80,0xC0,0x00,0x00,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x09,0x11,0x10,0x10,0x11,0x11,0x09,
  0x0A,0x7C,0x04,0x03,0x00,0x00,0x00,0x00,   /* BJT npn */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0x08,0xC8,0xC4,0x04,0x04,0xC4,0x84,0x48,
  0x28,0x1F,0x10,0x60,0x80,0x00,0x00,0x00,0x08,0x08,0x08,0x3E,0xC9,0x08,0x08,0x08,
  0x08,0xFF,0xFF,0x14,0x22,0x41,0x81,0x01,0x00,0x00,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x09,0x11,0x10,0x10,0x10,0x10,0x09,
  0x0A,0x7C,0x04,0x03,0x00,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0xC8,0x08,0xE4,0x44,0x44,0x44,0x44,0x48,
  0x48,0x7F,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x00,
  0xFF,0x00,0x9C,0x08,0x08,0x1C,0x3E,0x08,0x08,0xF8,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x01,0x01,0x01,0x01,0x01,0x03,0x05,0x05,0x09,0x08,0x13,0x11,0x11,0x11,0x11,0x09,
  0x09,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* MOSFET enh n-ch */

  0x40,0x40,0x40,0x40,0xC0,0x60,0x50,0x50,0xC8,0x08,0xE4,0x44,0x44,0x44,0x44,0x48,
  0x48,0xFF,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x00,
  0xFF,0x00,0x9C,0x08,0x08,0x3E,0x1C,0x08,0x08,0x0F,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x09,0x08,0x13,0x11,0x11,0x11,0x11,0x09,
  0x09,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0xC8,0x08,0xE4,0x44,0x44,0x44,0x44,0x48,
  0x48,0x7F,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x08,0x08,0x1C,0x3E,0x08,0x08,0xF8,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x01,0x01,0x01,0x01,0x01,0x03,0x05,0x05,0x09,0x08,0x13,0x11,0x11,0x11,0x11,0x09,
  0x09,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* MOSFET dep n-ch */

  0x40,0x40,0x40,0x40,0xC0,0x60,0x50,0x50,0xC8,0x08,0xE4,0x44,0x44,0x44,0x44,0x48,
  0x48,0xFF,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x00,
  0xFF,0x00,0xFF,0x08,0x08,0x3E,0x1C,0x08,0x08,0x0F,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x09,0x08,0x13,0x11,0x11,0x11,0x11,0x09,
  0x09,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0x08,0x08,0x04,0xE4,0x84,0x84,0x84,0x88,
  0x88,0xFF,0x10,0x60,0x80,0x00,0x00,0x00,0x80,0x80,0x80,0xBE,0xC1,0x80,0x80,0x80,
  0xE0,0xC0,0x80,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x0B,0x09,0x10,0x13,0x10,0x10,0x10,0x08,
  0x08,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* JFET n-ch */

  0x80,0x80,0x80,0x80,0x80,0xE0,0x90,0x90,0xC8,0xE8,0x84,0xE4,0x84,0x84,0x84,0x88,
  0x88,0xFF,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x00,
  0x01,0x03,0x00,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x08,0x10,0x13,0x10,0x10,0x10,0x08,
  0x08,0x7F,0x04,0x03,0x00,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0x88,0x08,0xC4,0x04,0x04,0x04,0x84,0x48,
  0x28,0x1F,0x10,0x60,0x80,0x00,0x00,0x00,0x08,0x08,0x08,0x3E,0xC9,0x08,0x08,0x08,
  0xFF,0x00,0xFF,0x14,0x22,0x41,0x80,0xC0,0x00,0x00,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x08,0x11,0x10,0x10,0x11,0x11,0x09,
  0x0A,0x7C,0x04,0x03,0x00,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x00,0x00,0x00,0x00,0x80,0x60,0x10,0x10,0x88,0x08,0xC4,0x04,0x04,0xC4,0x84,0x48,
  0x28,0x1F,0x10,0x60,0x80,0x00,0x00,0x00,0x08,0x08,0x08,0x3E,0xC9,0x08,0x08,0x08,
  0xFF,0x00,0xFF,0x14,0x22,0x41,0x81,0x01,0x00,0x00,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x08,0x11,0x10,0x10,0x10,0x10,0x09,
  0x0A,0x7C,0x04,0x03,0x00,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xE0,0xE0,0xE0,0xE0,0xFE,0xE0,0xE0,0xE0,
  0xE0,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
  0x80,0x83,0x8F,0xBF,0xFF,0xBF,0x8F,0x83,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x04,0x02,0x01,0x7F,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* SCR */

  0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFE,0x80,0x80,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0xE0,0xF8,0xFE,0xFF,
  0xFE,0xF8,0xE0,0x80,0x00,0x01,0x07,0x1F,0x7F,0xFF,0x7F,0x1F,0x07,0x01,0x00,0x00,
  0x10,0x10,0x10,0x11,0x11,0x09,0x05,0x03,0x01,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,    /* Triac */

  0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x80,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
  0x07,0x1F,0x7F,0xFF,0xFF,0xFF,0x7F,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x05,0x7F,0x05,0x04,0x04,
  0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00     /* PUT */

  #ifdef SYMBOLS_EXTRA
  ,
  0x40,0x40,0x40,0x40,0xC0,0x60,0x90,0x10,0x08,0x08,0x04,0xE4,0x84,0x84,0x84,0x88,
  0x88,0xFF,0x10,0x60,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0xC1,0x00,0x00,0x05,
  0x06,0x07,0x08,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0xC1,0x3E,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x04,0x04,0x08,0x08,0x10,0x13,0x10,0x10,0x10,0x08,
  0x08,0x7F,0x04,0x03,0x00,0x00,0x00,0x00     /* UJT n-type */
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
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* JFET n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* Triac */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* PUT */
  #ifdef SYMBOLS_EXTRA
  ,
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* UJT n-type */
  #endif
};



#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
