/*
 * fntlat2_8.c - a font in standard format
 *
 * Automatically generated by fntconv.c
 */

#include "portab.h"
#include "fontdef.h"

static UWORD off_table[], dat_table[];

const struct font_head latin2_8x8 = {
    8859,  /* font_id */
    9,  /* point */
    "MiNT ISO-8859-2 8x8",  /*   BYTE name[32]  */
    0,  /* first_ade */
    255,  /* last_ade */
    6,  /* top */
    6,  /* ascent */
    4,  /* half */
    1,  /* descent */
    1,  /* bottom */
    8,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555,  /* lighten */
    0x5555,  /* skew */
    F_MONOSPACE,  /* flags */
    0,  /* hor_table */
    off_table,  /* off_table */
    dat_table,  /* dat_table */
    256,  /* form_width */
    8,  /* form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
};

static UWORD off_table[] =
{
    0x0000, 0x0008, 0x0010, 0x0018, 0x0020, 0x0028, 0x0030, 0x0038, 
    0x0040, 0x0048, 0x0050, 0x0058, 0x0060, 0x0068, 0x0070, 0x0078, 
    0x0080, 0x0088, 0x0090, 0x0098, 0x00a0, 0x00a8, 0x00b0, 0x00b8, 
    0x00c0, 0x00c8, 0x00d0, 0x00d8, 0x00e0, 0x00e8, 0x00f0, 0x00f8, 
    0x0100, 0x0108, 0x0110, 0x0118, 0x0120, 0x0128, 0x0130, 0x0138, 
    0x0140, 0x0148, 0x0150, 0x0158, 0x0160, 0x0168, 0x0170, 0x0178, 
    0x0180, 0x0188, 0x0190, 0x0198, 0x01a0, 0x01a8, 0x01b0, 0x01b8, 
    0x01c0, 0x01c8, 0x01d0, 0x01d8, 0x01e0, 0x01e8, 0x01f0, 0x01f8, 
    0x0200, 0x0208, 0x0210, 0x0218, 0x0220, 0x0228, 0x0230, 0x0238, 
    0x0240, 0x0248, 0x0250, 0x0258, 0x0260, 0x0268, 0x0270, 0x0278, 
    0x0280, 0x0288, 0x0290, 0x0298, 0x02a0, 0x02a8, 0x02b0, 0x02b8, 
    0x02c0, 0x02c8, 0x02d0, 0x02d8, 0x02e0, 0x02e8, 0x02f0, 0x02f8, 
    0x0300, 0x0308, 0x0310, 0x0318, 0x0320, 0x0328, 0x0330, 0x0338, 
    0x0340, 0x0348, 0x0350, 0x0358, 0x0360, 0x0368, 0x0370, 0x0378, 
    0x0380, 0x0388, 0x0390, 0x0398, 0x03a0, 0x03a8, 0x03b0, 0x03b8, 
    0x03c0, 0x03c8, 0x03d0, 0x03d8, 0x03e0, 0x03e8, 0x03f0, 0x03f8, 
    0x0400, 0x0408, 0x0410, 0x0418, 0x0420, 0x0428, 0x0430, 0x0438, 
    0x0440, 0x0448, 0x0450, 0x0458, 0x0460, 0x0468, 0x0470, 0x0478, 
    0x0480, 0x0488, 0x0490, 0x0498, 0x04a0, 0x04a8, 0x04b0, 0x04b8, 
    0x04c0, 0x04c8, 0x04d0, 0x04d8, 0x04e0, 0x04e8, 0x04f0, 0x04f8, 
    0x0500, 0x0508, 0x0510, 0x0518, 0x0520, 0x0528, 0x0530, 0x0538, 
    0x0540, 0x0548, 0x0550, 0x0558, 0x0560, 0x0568, 0x0570, 0x0578, 
    0x0580, 0x0588, 0x0590, 0x0598, 0x05a0, 0x05a8, 0x05b0, 0x05b8, 
    0x05c0, 0x05c8, 0x05d0, 0x05d8, 0x05e0, 0x05e8, 0x05f0, 0x05f8, 
    0x0600, 0x0608, 0x0610, 0x0618, 0x0620, 0x0628, 0x0630, 0x0638, 
    0x0640, 0x0648, 0x0650, 0x0658, 0x0660, 0x0668, 0x0670, 0x0678, 
    0x0680, 0x0688, 0x0690, 0x0698, 0x06a0, 0x06a8, 0x06b0, 0x06b8, 
    0x06c0, 0x06c8, 0x06d0, 0x06d8, 0x06e0, 0x06e8, 0x06f0, 0x06f8, 
    0x0700, 0x0708, 0x0710, 0x0718, 0x0720, 0x0728, 0x0730, 0x0738, 
    0x0740, 0x0748, 0x0750, 0x0758, 0x0760, 0x0768, 0x0770, 0x0778, 
    0x0780, 0x0788, 0x0790, 0x0798, 0x07a0, 0x07a8, 0x07b0, 0x07b8, 
    0x07c0, 0x07c8, 0x07d0, 0x07d8, 0x07e0, 0x07e8, 0x07f0, 0x07f8, 
    0x0800, 
};

static UWORD dat_table[] =
{
    0x0018, 0x3c18, 0x183c, 0xffe7, 0x017e, 0x1818, 0xf0f0, 0x05a0, 
    0x7c06, 0x7c7c, 0xc67c, 0x7c7c, 0x7c7c, 0x0078, 0x07f0, 0x1104, 
    0x0018, 0x6600, 0x1800, 0x3818, 0x0e70, 0x0000, 0x0000, 0x0002, 
    0x3c18, 0x3c7e, 0x0c7e, 0x3c7e, 0x3c3c, 0x0000, 0x0600, 0x603c, 
    0x3c18, 0x7c3c, 0x787e, 0x7e3e, 0x663c, 0x0666, 0x60c6, 0x663c, 
    0x7c3c, 0x7c3c, 0x7e66, 0x66c6, 0x6666, 0x7e1e, 0x4078, 0x1000, 
    0x0000, 0x6000, 0x0600, 0x1c00, 0x6018, 0x1860, 0x3800, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x000e, 0x1870, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0018, 0x6660, 0x816c, 0x0c0e, 0x6636, 0x3e24, 0x0c00, 0x2408, 
    0x0000, 0x0038, 0x0c76, 0x0c24, 0x0024, 0x0003, 0x0c36, 0x2408, 
    0x180c, 0x1866, 0x6666, 0x0c00, 0x240c, 0x0066, 0x240c, 0x1824, 
    0x780c, 0x240c, 0x1836, 0x6600, 0x3618, 0x0c36, 0x660c, 0x7e1c, 
    0x0c0c, 0x1824, 0x6676, 0x0c00, 0x240c, 0x0066, 0x240c, 0x180d, 
    0x060c, 0x240c, 0x1836, 0x6618, 0x2418, 0x0c36, 0x660c, 0x0008, 
    0x003c, 0x241c, 0x3899, 0xffc3, 0x03c3, 0x3c1c, 0xc0c0, 0x05a0, 
    0xc606, 0x0606, 0xc6c0, 0xc006, 0xc6c6, 0x0060, 0x0ff8, 0x0b28, 
    0x0018, 0x666c, 0x3e66, 0x6c18, 0x1c38, 0x6618, 0x0000, 0x0006, 
    0x6638, 0x660c, 0x1c60, 0x6006, 0x6666, 0x1818, 0x0c00, 0x3066, 
    0x663c, 0x6666, 0x6c60, 0x6060, 0x6618, 0x066c, 0x60ee, 0x7666, 
    0x6666, 0x6666, 0x1866, 0x66c6, 0x6666, 0x0618, 0x6018, 0x3800, 
    0xc000, 0x6000, 0x0600, 0x3000, 0x6000, 0x0060, 0x1800, 0x0000, 
    0x0000, 0x0000, 0x1800, 0x0000, 0x0000, 0x0018, 0x1818, 0x6018, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x003c, 0x3c60, 0x5a64, 0x3e1b, 0x003e, 0x6018, 0x7e00, 0x7e7e, 
    0x3800, 0x0018, 0x1832, 0x1818, 0x0018, 0x0019, 0x186c, 0x1800, 
    0x7c18, 0x243c, 0x006c, 0x183c, 0x1818, 0x7e00, 0x1818, 0x2418, 
    0x6c18, 0x1818, 0x246c, 0x0000, 0x7c24, 0x186c, 0x0018, 0x1836, 
    0x1818, 0x6618, 0x0034, 0x1800, 0x1818, 0x0000, 0x1818, 0x240d, 
    0x1f18, 0x1818, 0x666c, 0x0018, 0x1824, 0x186c, 0x0018, 0x1800, 
    0x0066, 0x24f6, 0x6fc3, 0xfe99, 0x06d3, 0x3c16, 0xfedf, 0x05a0, 
    0xc606, 0x0606, 0xc6c0, 0xc006, 0xc6c6, 0x3c78, 0x1fec, 0x0dd8, 
    0x0018, 0x66fe, 0x606c, 0x3818, 0x1818, 0x3c18, 0x0000, 0x000c, 
    0x6e18, 0x0618, 0x3c7c, 0x600c, 0x6666, 0x1818, 0x187e, 0x1806, 
    0x6e66, 0x6660, 0x6660, 0x6060, 0x6618, 0x0678, 0x60fe, 0x7e66, 
    0x6666, 0x6660, 0x1866, 0x66c6, 0x3c66, 0x0c18, 0x3018, 0x6c00, 
    0x603c, 0x7c3c, 0x3e3c, 0x7c3e, 0x7c38, 0x1866, 0x18ec, 0x7c3c, 
    0x7c3e, 0x7c3e, 0x7e66, 0x66c6, 0x6666, 0x7e18, 0x1818, 0xf218, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0066, 0x0070, 0x2468, 0x603c, 0x0060, 0x3c7e, 0x0c00, 0x0c0c, 
    0x6c3c, 0x0018, 0x0034, 0x3e00, 0x003e, 0x3e7e, 0x7e00, 0x7e7e, 
    0x6618, 0x5a18, 0x1860, 0x3c66, 0x3c7e, 0x607e, 0x7e3c, 0x3c7c, 
    0x6666, 0x663c, 0x3c3c, 0x3c44, 0x667e, 0x6666, 0x6666, 0x1866, 
    0x0000, 0x0000, 0x3c30, 0x003c, 0x003c, 0x3c3c, 0x3c00, 0x007c, 
    0x0600, 0x0000, 0x0000, 0x0000, 0x0018, 0x0000, 0x0066, 0x7e00, 
    0x00c3, 0xe783, 0xc1e7, 0xfc3c, 0x8cd3, 0x3c10, 0xd8db, 0x0db0, 
    0x0000, 0x7c7c, 0x7c7c, 0x7c00, 0x7c7c, 0x0660, 0x1804, 0x0628, 
    0x0018, 0x006c, 0x3c18, 0x7000, 0x1818, 0xff7e, 0x007e, 0x0018, 
    0x7618, 0x0c0c, 0x6c06, 0x7c18, 0x3c3e, 0x0000, 0x3000, 0x0c0c, 
    0x6a66, 0x7c60, 0x667c, 0x7c6e, 0x7e18, 0x0670, 0x60d6, 0x7e66, 
    0x7c66, 0x7c3c, 0x1866, 0x66d6, 0x183c, 0x1818, 0x1818, 0xc600, 
    0x3006, 0x6660, 0x6666, 0x3066, 0x6618, 0x186c, 0x18fe, 0x6666, 
    0x6666, 0x6660, 0x1866, 0x66c6, 0x3c66, 0x0c30, 0x180c, 0x9e34, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x0066, 0x00e0, 0x5a60, 0x3c66, 0x003c, 0x0618, 0x187c, 0x1818, 
    0x6c06, 0x003c, 0x0030, 0x6000, 0x0060, 0x6018, 0x0c00, 0x0c0c, 
    0x663c, 0x3c3c, 0x3c60, 0x6660, 0x6660, 0x7c60, 0x6018, 0x1866, 
    0xf676, 0x7666, 0x6666, 0x6628, 0x6666, 0x6666, 0x6666, 0x187c, 
    0x7c3c, 0x3c3c, 0x0630, 0x3c60, 0x3c66, 0x7e66, 0x6638, 0x38cc, 
    0x3e7c, 0x7c3c, 0x3c3c, 0x3c7e, 0x7c66, 0x6666, 0x6666, 0x1800, 
    0x00e7, 0xc383, 0xc1c3, 0xf999, 0xd8db, 0x7e10, 0xdeff, 0x0db0, 
    0xc606, 0xc006, 0x0606, 0xc606, 0xc606, 0x7e7e, 0x1804, 0x07d0, 
    0x0018, 0x006c, 0x0630, 0xde00, 0x1818, 0x3c18, 0x0000, 0x0030, 
    0x6618, 0x1806, 0x7e06, 0x6630, 0x6606, 0x1818, 0x1800, 0x1818, 
    0x6e7e, 0x6660, 0x6660, 0x6066, 0x6618, 0x0678, 0x60c6, 0x6e66, 
    0x6076, 0x6c06, 0x1866, 0x66fe, 0x3c18, 0x3018, 0x0c18, 0x0000, 
    0x003e, 0x6660, 0x667e, 0x3066, 0x6618, 0x1878, 0x18d6, 0x6666, 
    0x6666, 0x603c, 0x1866, 0x66d6, 0x1866, 0x1818, 0x1818, 0x0c34, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x007e, 0x0060, 0x5a60, 0x0666, 0x0006, 0x6618, 0x3000, 0x3030, 
    0x383e, 0x0018, 0x0030, 0x3c00, 0x003c, 0x3c18, 0x1800, 0x1818, 
    0x7c66, 0x6666, 0x6660, 0x6066, 0x607c, 0x607c, 0x7c18, 0x1866, 
    0x667e, 0x7e66, 0x6666, 0x6610, 0x7c66, 0x6666, 0x663c, 0x1866, 
    0x6606, 0x0606, 0x3e30, 0x6060, 0x607e, 0x607e, 0x7e18, 0x18cc, 
    0x6666, 0x6666, 0x6666, 0x6600, 0x6666, 0x6666, 0x6666, 0x1800, 
    0x0024, 0x66f6, 0x6f99, 0xf3c3, 0x70c3, 0x1070, 0x181e, 0x1998, 
    0xc606, 0xc006, 0x0606, 0xc606, 0xc606, 0x6618, 0x1004, 0x2e10, 
    0x0000, 0x00fe, 0x7c66, 0xcc00, 0x1c38, 0x6618, 0x3000, 0x1860, 
    0x6618, 0x3066, 0x0c66, 0x6630, 0x660c, 0x1818, 0x0c7e, 0x3000, 
    0x6066, 0x6666, 0x6c60, 0x6066, 0x6618, 0x666c, 0x60c6, 0x6666, 
    0x606c, 0x6666, 0x1866, 0x3cee, 0x6618, 0x6018, 0x0618, 0x0000, 
    0x0066, 0x6660, 0x6660, 0x303e, 0x6618, 0x186c, 0x18c6, 0x6666, 
    0x6666, 0x6006, 0x1866, 0x3c7c, 0x3c3e, 0x3018, 0x1818, 0x0062, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x0066, 0x0060, 0x2460, 0x663c, 0x0066, 0x3c18, 0x6000, 0x6060, 
    0x0066, 0x0018, 0x0030, 0x0600, 0x0006, 0x0618, 0x3000, 0x3030, 
    0x6c7e, 0x7e7e, 0x7e60, 0x663c, 0x6660, 0x7e60, 0x6018, 0x1866, 
    0x6c6e, 0x6e66, 0x6666, 0x6628, 0x6c66, 0x6666, 0x6618, 0x1866, 
    0x607e, 0x7e7e, 0x6630, 0x603c, 0x6060, 0x3c60, 0x6018, 0x18cc, 
    0x6666, 0x6666, 0x6666, 0x6618, 0x6066, 0x6666, 0x663e, 0x1800, 
    0x0024, 0x3c1c, 0x383c, 0xe7e7, 0x20c3, 0x38f0, 0x181b, 0x799e, 
    0x7c06, 0x7c7c, 0x067c, 0x7c06, 0x7c7c, 0x3c1e, 0x1e3c, 0x39e0, 
    0x0018, 0x006c, 0x1846, 0x7600, 0x0e70, 0x0000, 0x3000, 0x1840, 
    0x3c7e, 0x7e3c, 0x0c3c, 0x3c30, 0x3c38, 0x0030, 0x0600, 0x6018, 
    0x3e66, 0x7c3c, 0x787e, 0x603e, 0x663c, 0x3c66, 0x7ec6, 0x663c, 
    0x6036, 0x663c, 0x183e, 0x18c6, 0x6618, 0x7e1e, 0x0278, 0x00fe, 
    0x003e, 0x7c3c, 0x3e3c, 0x3006, 0x663c, 0x1866, 0x3cc6, 0x663c, 
    0x7c3e, 0x607c, 0x0e3e, 0x186c, 0x6606, 0x7e0e, 0x1870, 0x007e, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 0x7878, 
    0x0066, 0x007e, 0x5a7e, 0x3cd8, 0x003c, 0x0818, 0x7e00, 0x7e7e, 
    0x003e, 0x183c, 0x0078, 0x7c00, 0x087c, 0x7c0e, 0x7e00, 0x7e7e, 
    0x6666, 0x6666, 0x667e, 0x3c08, 0x3c7e, 0x307e, 0x7e3c, 0x3c7c, 
    0x7866, 0x663c, 0x3c66, 0x3c44, 0x663e, 0x3e3e, 0x3e18, 0x187c, 
    0x603e, 0x3e3e, 0x3e78, 0x3c08, 0x3c3c, 0x183c, 0x3c3c, 0x3c7c, 
    0x3e66, 0x663c, 0x3c3c, 0x3c18, 0x603e, 0x3e3e, 0x3e06, 0x0e00, 
    0x003c, 0x1818, 0x1800, 0x0000, 0x007e, 0x1060, 0x0000, 0x718e, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1754, 0x3800, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x007c, 0x0000, 0x7000, 0x0000, 0x0000, 
    0x6006, 0x0000, 0x0000, 0x0000, 0x007c, 0x0000, 0x1800, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x000c, 0x0000, 0x8100, 0x0070, 0x0000, 0x3800, 0x0000, 0x0000, 
    0x000c, 0x0c00, 0x0000, 0x0000, 0x3800, 0x0c00, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0038, 0x0000, 0x1800, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x003c, 0x0000, 0x0000, 0x0000, 0x0000, 0x3060, 
    0x0000, 0x0000, 0x0000, 0x0018, 0x0000, 0x0c00, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x007c, 0x1800, 
    
};
