/*
 * lineainit.c - linea graphics initialization
 *
 * Copyright (c) 2001 by Authors:
 *
 *  MAD  Martin Doering
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 *
 */

#include "config.h"
#include "tosvars.h"
#include "lineavars.h"
#include "font.h"
#include "kprint.h"
#include "screen.h"
#include "machine.h"

#define DBG_LINEA 0


BYTE shft_off;                  /* once computed Offset into a Scan Line */


/* Settings for the different video modes */
struct video_mode {
    UBYTE       planes;         // count of color planes (v_planes)
    UWORD       hz_rez;         // screen horizontal resolution (v_hz_rez)
    UWORD       vt_rez;         // screen vertical resolution (v_vt_rez)
};


static const struct video_mode video_mode[] = {
    {4, 320, 200},        // 16 color mode
    {2, 640, 200},         // 4 color mode
    {1, 640, 400}          // monochrome mode
};



/*
 * linea_init - init linea variables
 */

void linea_init(void)
{
    int n;
    WORD vmode;                         /* video mode */

    vmode = (sshiftmod & 3);            /* Get video mode from hardware */
#if DBG_LINEA
    kprintf("vmode : %d\n", vmode);
#endif

    /* set parameters for video mode */
    if (vmode > 2) {                    /* Mode 3 == unvalid for ST (MAD) */
        kprintf("video mode was: %d !\n", vmode);
        vmode=2;                        /* Falcon should be handled special? */
    }

#if CONF_WITH_VIDEL
    if (has_videl) {
        v_planes = get_videl_bpp();
        v_hz_rez = get_videl_width();
        v_vt_rez = get_videl_height();
    }
    else
#endif
    {
        v_planes = video_mode[vmode].planes;
        v_hz_rez = video_mode[vmode].hz_rez;
        v_vt_rez = video_mode[vmode].vt_rez;
    }
    v_lin_wr = v_hz_rez / 8 * v_planes;     /* bytes per line */
    v_bytes_lin = v_lin_wr;       /* I think v_bytes_lin = v_lin_wr (joy) */

    /* Calculate the shift offset
     * (used for screen modes that have the planes arranged in an
     *  interleaved fashion with a word for each plane). */
    for (n = v_planes, shft_off = 3; n > 1; n >>= 1)
        shft_off--;

#if DBG_LINEA
    kprintf("planes: %d\n", v_planes);
    kprintf("lin_wr: %d\n", v_lin_wr);
    kprintf("hz_rez: %d\n", v_hz_rez);
    kprintf("vt_rez: %d\n", v_vt_rez);
#endif
}
