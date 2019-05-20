#ifndef FIRMWARE_H
#define FIRMWARE_H
#include <stdint.h>

#define FIRMWARE_ADDR 0x8030000
#define FIRMWARE_SIZE (4912)

static const uint8_t firm_array[FIRMWARE_SIZE] __attribute__((section (".ARM.__at_0x8030000"))) = {
0x50, 0x4, 0x0, 0x20, 0x9d, 0x1, 0x3, 0x8, 0xa5, 0x1, 0x3, 0x8, 0xa7, 0x1, 0x3, 0x8, 0xa9, 
0x1, 0x3, 0x8, 0xab, 0x1, 0x3, 0x8, 0xad, 0x1, 0x3, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x67, 0x10, 0x3, 0x8, 0xb1, 
0x1, 0x3, 0x8, 0x0, 0x0, 0x0, 0x0, 0x65, 0x10, 0x3, 0x8, 0xb5, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0x85, 0x11, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0x0, 0x0, 0x0, 0x0, 0xb7, 
0x1, 0x3, 0x8, 0xb7, 0x1, 0x3, 0x8, 0xdf, 0xf8, 0xc, 0xd0, 0x0, 0xf0, 0x7a, 0xf8, 0x0, 
0x48, 0x0, 0x47, 0xc5, 0x12, 0x3, 0x8, 0x50, 0x4, 0x0, 0x20, 0x6, 0x48, 0x80, 0x47, 0x6, 
0x48, 0x0, 0x47, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 
0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0xfe, 0xe7, 0x21, 0x11, 0x3, 0x8, 0x89, 0x1, 0x3, 0x8, 0x2d, 
0xe9, 0xf0, 0x5f, 0x5, 0x46, 0x0, 0x20, 0x92, 0x46, 0x9b, 0x46, 0x88, 0x46, 0x6, 0x46, 0x81, 
0x46, 0x40, 0x24, 0x1b, 0xe0, 0x28, 0x46, 0x41, 0x46, 0x47, 0x46, 0x22, 0x46, 0x0, 0xf0, 0x41, 
0xf8, 0x53, 0x46, 0x5a, 0x46, 0xc0, 0x1a, 0x91, 0x41, 0x10, 0xd3, 0x11, 0x46, 0x18, 0x46, 0x22, 
0x46, 0x0, 0xf0, 0x28, 0xf8, 0x2d, 0x1a, 0x67, 0xeb, 0x1, 0x8, 0x4f, 0x46, 0x22, 0x46, 0x1, 
0x20, 0x0, 0x21, 0x0, 0xf0, 0x1f, 0xf8, 0x17, 0xeb, 0x0, 0x9, 0x4e, 0x41, 0x20, 0x1e, 0xa4, 
0xf1, 0x1, 0x4, 0xdf, 0xdc, 0x48, 0x46, 0x31, 0x46, 0x2a, 0x46, 0x43, 0x46, 0xbd, 0xe8, 0xf0, 
0x9f, 0xd2, 0xb2, 0x1, 0xe0, 0x0, 0xf8, 0x1, 0x2b, 0x49, 0x1e, 0xfb, 0xd2, 0x70, 0x47, 0x0, 
0x22, 0xf6, 0xe7, 0x10, 0xb5, 0x13, 0x46, 0xa, 0x46, 0x4, 0x46, 0x19, 0x46, 0xff, 0xf7, 0xf0, 
0xff, 0x20, 0x46, 0x10, 0xbd, 0x20, 0x2a, 0x4, 0xdb, 0x20, 0x3a, 0x0, 0xfa, 0x2, 0xf1, 0x0, 
0x20, 0x70, 0x47, 0x91, 0x40, 0xc2, 0xf1, 0x20, 0x3, 0x20, 0xfa, 0x3, 0xf3, 0x19, 0x43, 0x90, 
0x40, 0x70, 0x47, 0x20, 0x2a, 0x4, 0xdb, 0x20, 0x3a, 0x21, 0xfa, 0x2, 0xf0, 0x0, 0x21, 0x70, 
0x47, 0x21, 0xfa, 0x2, 0xf3, 0xd0, 0x40, 0xc2, 0xf1, 0x20, 0x2, 0x91, 0x40, 0x8, 0x43, 0x19, 
0x46, 0x70, 0x47, 0x6, 0x4c, 0x7, 0x4d, 0x6, 0xe0, 0xe0, 0x68, 0x40, 0xf0, 0x1, 0x3, 0x94, 
0xe8, 0x7, 0x0, 0x98, 0x47, 0x10, 0x34, 0xac, 0x42, 0xf6, 0xd3, 0xff, 0xf7, 0x78, 0xff, 0x0, 
0x13, 0x3, 0x8, 0x20, 0x13, 0x3, 0x8, 0x70, 0x47, 0x0, 0x0, 0x70, 0xb5, 0x4, 0x46, 0x0, 
0xf0, 0x20, 0xf9, 0x6, 0x46, 0x25, 0x46, 0x68, 0x1c, 0x10, 0xb1, 0x4, 0x48, 0x0, 0x78, 0x5, 
0x44, 0x0, 0xbf, 0x0, 0xf0, 0x16, 0xf9, 0x80, 0x1b, 0xa8, 0x42, 0xfa, 0xd3, 0x70, 0xbd, 0x8, 
0x0, 0x0, 0x20, 0xf8, 0xb5, 0x2, 0x46, 0xb, 0x46, 0x0, 0x25, 0x0, 0x24, 0x0, 0x20, 0x0, 
0x21, 0xdc, 0xe0, 0x1, 0x26, 0x6, 0xfa, 0x1, 0xf5, 0x1e, 0x68, 0x6, 0xea, 0x5, 0x4, 0xac, 
0x42, 0x73, 0xd1, 0x5e, 0x68, 0x2, 0x2e, 0x2, 0xd0, 0x5e, 0x68, 0x12, 0x2e, 0x13, 0xd1, 0xcf, 
0x8, 0x2, 0xf1, 0x20, 0x6, 0x56, 0xf8, 0x27, 0x0, 0x4e, 0x7, 0xf7, 0xe, 0xf, 0x26, 0xbe, 
0x40, 0xb0, 0x43, 0x4f, 0x7, 0xff, 0xe, 0x1e, 0x69, 0xbe, 0x40, 0x30, 0x43, 0xcf, 0x8, 0x2, 
0xf1, 0x20, 0x6, 0x46, 0xf8, 0x27, 0x0, 0x10, 0x68, 0x4f, 0x0, 0x3, 0x26, 0xbe, 0x40, 0xb0, 
0x43, 0x1e, 0x79, 0x6, 0xf0, 0x3, 0x6, 0x4f, 0x0, 0xbe, 0x40, 0x30, 0x43, 0x10, 0x60, 0x5e, 
0x68, 0x1, 0x2e, 0x8, 0xd0, 0x5e, 0x68, 0x2, 0x2e, 0x5, 0xd0, 0x5e, 0x68, 0x11, 0x2e, 0x2, 
0xd0, 0x5e, 0x68, 0x12, 0x2e, 0x13, 0xd1, 0x90, 0x68, 0x4f, 0x0, 0x3, 0x26, 0xbe, 0x40, 0xb0, 
0x43, 0x4f, 0x0, 0xde, 0x68, 0xbe, 0x40, 0x30, 0x43, 0x90, 0x60, 0x50, 0x68, 0x1, 0x26, 0x8e, 
0x40, 0xb0, 0x43, 0x1e, 0x79, 0xc6, 0xf3, 0x0, 0x16, 0x8e, 0x40, 0x30, 0x43, 0x50, 0x60, 0xd0, 
0x68, 0x4f, 0x0, 0x3, 0x26, 0xbe, 0x40, 0xb0, 0x43, 0x4f, 0x0, 0x9e, 0x68, 0xbe, 0x40, 0x30, 
0x43, 0xd0, 0x60, 0x5e, 0x68, 0x6, 0xf0, 0x80, 0x56, 0xb6, 0xf1, 0x80, 0x5f, 0x7d, 0xd1, 0x0, 
0xbf, 0x0, 0x26, 0x0, 0x96, 0x40, 0x4e, 0x36, 0x68, 0x46, 0xf4, 0x80, 0x46, 0x3e, 0x4f, 0x3e, 
0x60, 0x3e, 0x46, 0x36, 0x68, 0x6, 0xf4, 0x80, 0x46, 0x0, 0x96, 0x0, 0xbf, 0x0, 0xbf, 0x3a, 
0x4e, 0x8f, 0x8, 0x56, 0xf8, 0x27, 0x0, 0x8e, 0x7, 0x37, 0xf, 0xf, 0x26, 0xbe, 0x40, 0xb0, 
0x43, 0x37, 0x4e, 0xb2, 0x42, 0x2, 0xd1, 0x0, 0x26, 0x24, 0xe0, 0x5e, 0xe0, 0x35, 0x4e, 0xb2, 
0x42, 0x1, 0xd1, 0x1, 0x26, 0x1e, 0xe0, 0x33, 0x4e, 0xb2, 0x42, 0x1, 0xd1, 0x2, 0x26, 0x19, 
0xe0, 0x32, 0x4e, 0xb2, 0x42, 0x1, 0xd1, 0x3, 0x26, 0x14, 0xe0, 0x30, 0x4e, 0xb2, 0x42, 0x1, 
0xd1, 0x4, 0x26, 0xf, 0xe0, 0x2f, 0x4e, 0xb2, 0x42, 0x1, 0xd1, 0x5, 0x26, 0xa, 0xe0, 0x2d, 
0x4e, 0xb2, 0x42, 0x1, 0xd1, 0x6, 0x26, 0x5, 0xe0, 0x2c, 0x4e, 0xb2, 0x42, 0x1, 0xd1, 0x7, 
0x26, 0x0, 0xe0, 0x8, 0x26, 0x8f, 0x7, 0x3f, 0xf, 0xbe, 0x40, 0x30, 0x43, 0x1f, 0x4e, 0x8f, 
0x8, 0x46, 0xf8, 0x27, 0x0, 0x26, 0x4e, 0x30, 0x68, 0xa0, 0x43, 0x5e, 0x68, 0x6, 0xf4, 0x80, 
0x36, 0xb6, 0xf5, 0x80, 0x3f, 0x0, 0xd1, 0x20, 0x43, 0x21, 0x4e, 0x30, 0x60, 0x36, 0x1d, 0x30, 
0x68, 0xa0, 0x43, 0x5e, 0x68, 0x6, 0xf4, 0x0, 0x36, 0xb6, 0xf5, 0x0, 0x3f, 0x0, 0xd1, 0x20, 
0x43, 0x1b, 0x4e, 0x36, 0x1d, 0x30, 0x60, 0x36, 0x1d, 0x30, 0x68, 0xa0, 0x43, 0x5e, 0x68, 0x6, 
0xf4, 0x80, 0x16, 0xb6, 0xf5, 0x80, 0x1f, 0x0, 0xd1, 0x20, 0x43, 0x14, 0x4e, 0x8, 0x36, 0x30, 
0x60, 0x36, 0x1d, 0x30, 0x68, 0xa0, 0x43, 0x5e, 0x68, 0x6, 0xf4, 0x0, 0x16, 0xb6, 0xf5, 0x0, 
0x1f, 0x0, 0xd1, 0x20, 0x43, 0xe, 0x4e, 0xc, 0x36, 0x30, 0x60, 0x49, 0x1c, 0x10, 0x29, 0xff, 
0xf4, 0x20, 0xaf, 0xf8, 0xbd, 0x0, 0x0, 0x44, 0x38, 0x2, 0x40, 0x8, 0x38, 0x1, 0x40, 0x0, 
0x0, 0x2, 0x40, 0x0, 0x4, 0x2, 0x40, 0x0, 0x8, 0x2, 0x40, 0x0, 0xc, 0x2, 0x40, 0x0, 
0x10, 0x2, 0x40, 0x0, 0x14, 0x2, 0x40, 0x0, 0x18, 0x2, 0x40, 0x0, 0x1c, 0x2, 0x40, 0x0, 
0x3c, 0x1, 0x40, 0x42, 0x69, 0xa, 0x40, 0x8a, 0x42, 0x2, 0xd1, 0xa, 0x4, 0x82, 0x61, 0x0, 
0xe0, 0x81, 0x61, 0x70, 0x47, 0xa, 0xb1, 0x81, 0x61, 0x1, 0xe0, 0xb, 0x4, 0x83, 0x61, 0x70, 
0x47, 0x0, 0x0, 0x1, 0x48, 0x0, 0x68, 0x70, 0x47, 0x0, 0x0, 0x0, 0x0, 0x0, 0x20, 0x3, 
0x48, 0x0, 0x68, 0x3, 0x49, 0x9, 0x78, 0x8, 0x44, 0x1, 0x49, 0x8, 0x60, 0x70, 0x47, 0x0, 
0x0, 0x0, 0x20, 0x8, 0x0, 0x0, 0x20, 0x10, 0xb5, 0xd, 0x48, 0x0, 0x68, 0x40, 0xf4, 0x0, 
0x70, 0xb, 0x49, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x60, 0x8, 0x60, 0x8, 
0x46, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x70, 0x8, 0x60, 0x3, 0x20, 0x0, 0xf0, 0xc2, 0xf8, 0x0, 
0x20, 0x0, 0xf0, 0x7, 0xf8, 0x0, 0xf0, 0x4b, 0xf8, 0x0, 0x20, 0x10, 0xbd, 0x0, 0x0, 0x0, 
0x3c, 0x2, 0x40, 0x70, 0xb5, 0x88, 0xb0, 0x4, 0x46, 0x0, 0x25, 0x0, 0x26, 0x0, 0x22, 0x21, 
0x46, 0x2d, 0x20, 0x0, 0xf0, 0x70, 0xf8, 0x2d, 0x20, 0x0, 0xf0, 0x5d, 0xf8, 0x0, 0xbf, 0x0, 
0x20, 0x1, 0x90, 0x16, 0x48, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x70, 0x14, 0x49, 0x8, 0x60, 0x8, 
0x46, 0x0, 0x68, 0x0, 0xf4, 0x80, 0x70, 0x1, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x2, 0xa9, 0x3, 
0xa8, 0x0, 0xf0, 0x6b, 0xf9, 0x0, 0xf0, 0x91, 0xf9, 0x45, 0x0, 0xd, 0x48, 0xb5, 0xfb, 0xf0, 
0xf0, 0x46, 0x1e, 0xc, 0x48, 0xd, 0x49, 0x8, 0x60, 0x40, 0xf2, 0xe7, 0x31, 0xb, 0x48, 0xc1, 
0x60, 0x46, 0x60, 0x0, 0x21, 0x1, 0x61, 0x81, 0x60, 0x0, 0xf0, 0xd, 0xfc, 0x20, 0xb9, 0x6, 
0x48, 0x0, 0xf0, 0x24, 0xfc, 0x8, 0xb0, 0x70, 0xbd, 0x1, 0x20, 0xfb, 0xe7, 0x0, 0x0, 0x40, 
0x38, 0x2, 0x40, 0x40, 0x42, 0xf, 0x0, 0x0, 0x20, 0x0, 0x40, 0x10, 0x0, 0x0, 0x20, 0x8, 
0xb5, 0x0, 0xbf, 0x0, 0x20, 0x0, 0x90, 0xe, 0x48, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x40, 0xc, 
0x49, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x0, 0xf4, 0x80, 0x40, 0x0, 0x90, 0x0, 0xbf, 0x0, 
0xbf, 0x0, 0xbf, 0x0, 0x20, 0x0, 0x90, 0x8, 0x1f, 0x0, 0x68, 0x40, 0xf0, 0x80, 0x50, 0x9, 
0x1f, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x0, 0xf0, 0x80, 0x50, 0x0, 0x90, 0x0, 0xbf, 0x0, 
0xbf, 0x8, 0xbd, 0x44, 0x38, 0x2, 0x40, 0x1, 0x46, 0x8, 0x46, 0x0, 0x28, 0x9, 0xdb, 0x0, 
0xf0, 0x1f, 0x3, 0x1, 0x22, 0x9a, 0x40, 0x43, 0x9, 0x9b, 0x0, 0x3, 0xf1, 0xe0, 0x23, 0xc3, 
0xf8, 0x0, 0x21, 0x0, 0xbf, 0x70, 0x47, 0x2d, 0xe9, 0xf0, 0x5f, 0x80, 0x46, 0xd, 0x46, 0x16, 
0x46, 0x0, 0x27, 0x0, 0xf0, 0xa, 0xfe, 0x7, 0x46, 0x39, 0x46, 0x2a, 0x46, 0x33, 0x46, 0x1, 
0xf0, 0x7, 0x0, 0xc0, 0xf1, 0x7, 0xa, 0xba, 0xf1, 0x4, 0xf, 0x2, 0xd9, 0x4f, 0xf0, 0x4, 
0xa, 0x1, 0xe0, 0xc0, 0xf1, 0x7, 0xa, 0xd1, 0x46, 0x0, 0xf1, 0x4, 0xa, 0xba, 0xf1, 0x7, 
0xf, 0x2, 0xd2, 0x4f, 0xf0, 0x0, 0xa, 0x1, 0xe0, 0xa0, 0xf1, 0x3, 0xa, 0xd4, 0x46, 0x4f, 
0xf0, 0x1, 0xa, 0xa, 0xfa, 0x9, 0xfa, 0xaa, 0xf1, 0x1, 0xa, 0xa, 0xea, 0x2, 0xa, 0xa, 
0xfa, 0xc, 0xfa, 0x4f, 0xf0, 0x1, 0xb, 0xb, 0xfa, 0xc, 0xfb, 0xab, 0xf1, 0x1, 0xb, 0xb, 
0xea, 0x3, 0xb, 0x4a, 0xea, 0xb, 0x4, 0x21, 0x46, 0x40, 0x46, 0x0, 0xf0, 0xde, 0xfd, 0xbd, 
0xe8, 0xf0, 0x9f, 0x0, 0xbf, 0x0, 0xf0, 0x7, 0x2, 0x6, 0x4b, 0x19, 0x68, 0x4f, 0xf6, 0xff, 
0x3, 0x19, 0x40, 0x4, 0x4b, 0xb, 0x43, 0x43, 0xea, 0x2, 0x21, 0x1, 0x4b, 0x19, 0x60, 0x0, 
0xbf, 0x70, 0x47, 0xc, 0xed, 0x0, 0xe0, 0x0, 0x0, 0xfa, 0x5, 0x70, 0xb5, 0x4, 0x46, 0xd, 
0x46, 0xc, 0xb9, 0x1, 0x20, 0x70, 0xbd, 0x58, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xf, 0x0, 0xa8, 
0x42, 0x9, 0xd2, 0x55, 0x49, 0xd, 0x70, 0x8, 0x46, 0x0, 0x68, 0x0, 0xf0, 0xf, 0x0, 0xa8, 
0x42, 0x1, 0xd0, 0x1, 0x20, 0xee, 0xe7, 0x20, 0x78, 0x0, 0xf0, 0x2, 0x0, 0x2, 0x28, 0x1d, 
0xd1, 0x20, 0x78, 0x0, 0xf0, 0x4, 0x0, 0x4, 0x28, 0x5, 0xd1, 0x4c, 0x48, 0x0, 0x68, 0x40, 
0xf4, 0xe0, 0x50, 0x4a, 0x49, 0x8, 0x60, 0x20, 0x78, 0x0, 0xf0, 0x8, 0x0, 0x8, 0x28, 0x5, 
0xd1, 0x47, 0x48, 0x0, 0x68, 0x40, 0xf4, 0x60, 0x40, 0x45, 0x49, 0x8, 0x60, 0x44, 0x48, 0x0, 
0x68, 0x20, 0xf0, 0xf0, 0x0, 0xa1, 0x68, 0x8, 0x43, 0x41, 0x49, 0x8, 0x60, 0x20, 0x78, 0x0, 
0xf0, 0x1, 0x0, 0xa8, 0xb3, 0x60, 0x68, 0x1, 0x28, 0x7, 0xd1, 0x3c, 0x48, 0x8, 0x38, 0x0, 
0x68, 0xc0, 0xf3, 0x40, 0x40, 0xb8, 0xb9, 0x1, 0x20, 0xbc, 0xe7, 0x60, 0x68, 0x2, 0x28, 0x2, 
0xd0, 0x60, 0x68, 0x3, 0x28, 0x7, 0xd1, 0x35, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 
0x60, 0x48, 0xb9, 0x1, 0x20, 0xae, 0xe7, 0x31, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 
0x0, 0x8, 0xb9, 0x1, 0x20, 0xa6, 0xe7, 0x2d, 0x48, 0x0, 0x68, 0x20, 0xf0, 0x3, 0x0, 0x61, 
0x68, 0x8, 0x43, 0x2a, 0x49, 0x8, 0x60, 0xff, 0xf7, 0x9c, 0xfe, 0x6, 0x46, 0x9, 0xe0, 0xff, 
0xf7, 0x98, 0xfe, 0x80, 0x1b, 0x41, 0xf2, 0x88, 0x31, 0x88, 0x42, 0x2, 0xd9, 0x3, 0x20, 0x91, 
0xe7, 0x7, 0xe0, 0x22, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xc, 0x0, 0x61, 0x68, 0xb0, 0xeb, 0x81, 
0xf, 0xed, 0xd1, 0x1d, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xf, 0x0, 0xa8, 0x42, 0x9, 0xd9, 0x1a, 
0x49, 0xd, 0x70, 0x8, 0x46, 0x0, 0x68, 0x0, 0xf0, 0xf, 0x0, 0xa8, 0x42, 0x1, 0xd0, 0x1, 
0x20, 0x78, 0xe7, 0x20, 0x78, 0x0, 0xf0, 0x4, 0x0, 0x4, 0x28, 0x7, 0xd1, 0x14, 0x48, 0x0, 
0x68, 0x20, 0xf4, 0xe0, 0x50, 0xe1, 0x68, 0x8, 0x43, 0x11, 0x49, 0x8, 0x60, 0x20, 0x78, 0x0, 
0xf0, 0x8, 0x0, 0x8, 0x28, 0x8, 0xd1, 0xd, 0x48, 0x0, 0x68, 0x20, 0xf4, 0x60, 0x40, 0x21, 
0x69, 0x40, 0xea, 0xc1, 0x0, 0xa, 0x49, 0x8, 0x60, 0x0, 0xf0, 0x4f, 0xf8, 0x8, 0x49, 0x9, 
0x68, 0xc1, 0xf3, 0x3, 0x11, 0x7, 0x4a, 0x51, 0x5c, 0xc8, 0x40, 0x6, 0x49, 0x8, 0x60, 0x0, 
0x20, 0xff, 0xf7, 0x7f, 0xfe, 0x0, 0x20, 0x4d, 0xe7, 0x0, 0x0, 0x0, 0x3c, 0x2, 0x40, 0x8, 
0x38, 0x2, 0x40, 0xe8, 0x12, 0x3, 0x8, 0xc, 0x0, 0x0, 0x20, 0xf, 0x22, 0x2, 0x60, 0xd, 
0x4a, 0x12, 0x68, 0x2, 0xf0, 0x3, 0x2, 0x42, 0x60, 0xb, 0x4a, 0x12, 0x68, 0x2, 0xf0, 0xf0, 
0x2, 0x82, 0x60, 0x8, 0x4a, 0x12, 0x68, 0x2, 0xf4, 0xe0, 0x52, 0xc2, 0x60, 0x6, 0x4a, 0x12, 
0x68, 0x2, 0xf4, 0x60, 0x42, 0xd2, 0x8, 0x2, 0x61, 0x4, 0x4a, 0x12, 0x68, 0x2, 0xf0, 0xf, 
0x2, 0xa, 0x60, 0x70, 0x47, 0x0, 0x0, 0x8, 0x38, 0x2, 0x40, 0x0, 0x3c, 0x2, 0x40, 0x1, 
0x48, 0x0, 0x68, 0x70, 0x47, 0x0, 0x0, 0xc, 0x0, 0x0, 0x20, 0x0, 0xb5, 0xff, 0xf7, 0xf7, 
0xff, 0x4, 0x49, 0x9, 0x68, 0xc1, 0xf3, 0x82, 0x21, 0x3, 0x4a, 0x51, 0x5c, 0xc8, 0x40, 0x0, 
0xbd, 0x0, 0x0, 0x8, 0x38, 0x2, 0x40, 0xf8, 0x12, 0x3, 0x8, 0x2d, 0xe9, 0xf0, 0x47, 0x0, 
0x24, 0x0, 0x25, 0x0, 0x26, 0xa1, 0x46, 0x25, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xc, 0x0, 0x20, 
0xb1, 0x4, 0x28, 0x5, 0xd0, 0x8, 0x28, 0x3a, 0xd1, 0x5, 0xe0, 0xdf, 0xf8, 0x84, 0x90, 0x39, 
0xe0, 0xdf, 0xf8, 0x84, 0x90, 0x36, 0xe0, 0x1d, 0x48, 0x0, 0x1f, 0x0, 0x68, 0x0, 0xf0, 0x3f, 
0x4, 0x1b, 0x48, 0x0, 0x1f, 0x0, 0x68, 0x0, 0xf4, 0x80, 0x0, 0x78, 0xb1, 0x1a, 0x48, 0x17, 
0x49, 0x9, 0x1f, 0x9, 0x68, 0xc1, 0xf3, 0x88, 0x11, 0xa0, 0xfb, 0x1, 0x70, 0x1, 0x46, 0x22, 
0x46, 0x0, 0x23, 0x38, 0x46, 0xff, 0xf7, 0x43, 0xfc, 0x5, 0x46, 0xe, 0xe0, 0x11, 0x48, 0xf, 
0x49, 0x9, 0x1f, 0x9, 0x68, 0xc1, 0xf3, 0x88, 0x11, 0xa0, 0xfb, 0x1, 0x70, 0x1, 0x46, 0x22, 
0x46, 0x0, 0x23, 0x38, 0x46, 0xff, 0xf7, 0x33, 0xfc, 0x5, 0x46, 0x8, 0x48, 0x0, 0x1f, 0x0, 
0x68, 0xc0, 0xf3, 0x1, 0x40, 0x40, 0x1c, 0x46, 0x0, 0xb5, 0xfb, 0xf6, 0xf9, 0x2, 0xe0, 0xdf, 
0xf8, 0x10, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x48, 0x46, 0xbd, 0xe8, 0xf0, 0x87, 0x0, 0x0, 0x8, 
0x38, 0x2, 0x40, 0x0, 0x24, 0xf4, 0x0, 0x40, 0x78, 0x7d, 0x1, 0xf8, 0xb5, 0x4, 0x46, 0xc, 
0xb9, 0x1, 0x20, 0xf8, 0xbd, 0x20, 0x78, 0x0, 0xf0, 0x1, 0x0, 0x0, 0x28, 0x74, 0xd0, 0xf9, 
0x48, 0x0, 0x68, 0x0, 0xf0, 0xc, 0x0, 0x4, 0x28, 0xd, 0xd0, 0xf6, 0x48, 0x0, 0x68, 0x0, 
0xf0, 0xc, 0x0, 0x8, 0x28, 0x13, 0xd1, 0xf3, 0x48, 0x0, 0x1f, 0x0, 0x68, 0x0, 0xf4, 0x80, 
0x0, 0xb0, 0xf5, 0x80, 0xf, 0xb, 0xd1, 0xef, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 
0x40, 0x0, 0x28, 0x59, 0xd0, 0x60, 0x68, 0x0, 0x28, 0x56, 0xd1, 0x1, 0x20, 0xd9, 0xe7, 0x0, 
0xbf, 0x60, 0x68, 0xb0, 0xf5, 0x80, 0x3f, 0x8, 0xd1, 0xe7, 0x48, 0x8, 0x38, 0x0, 0x68, 0x40, 
0xf4, 0x80, 0x30, 0xe4, 0x49, 0x8, 0x39, 0x8, 0x60, 0x1e, 0xe0, 0x60, 0x68, 0xb0, 0xf5, 0xa0, 
0x2f, 0xd, 0xd1, 0xe0, 0x48, 0x8, 0x38, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x20, 0xde, 0x49, 0x8, 
0x39, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x30, 0x8, 0x60, 0xc, 0xe0, 0xd9, 
0x48, 0x8, 0x38, 0x0, 0x68, 0x20, 0xf4, 0x80, 0x30, 0xd7, 0x49, 0x8, 0x39, 0x8, 0x60, 0x8, 
0x46, 0x0, 0x68, 0x20, 0xf4, 0x80, 0x20, 0x8, 0x60, 0x0, 0xbf, 0x60, 0x68, 0x90, 0xb1, 0xff, 
0xf7, 0x58, 0xfd, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0x54, 0xfd, 0x40, 0x1b, 0x64, 0x28, 0x1, 
0xd9, 0x3, 0x20, 0x9e, 0xe7, 0xcc, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x40, 0x0, 
0x28, 0xf1, 0xd0, 0x11, 0xe0, 0xff, 0xf7, 0x45, 0xfd, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0x41, 
0xfd, 0x40, 0x1b, 0x64, 0x28, 0x1, 0xd9, 0x3, 0x20, 0x8b, 0xe7, 0xc2, 0x48, 0x8, 0x38, 0x0, 
0x68, 0xc0, 0xf3, 0x40, 0x40, 0x0, 0x28, 0xf1, 0xd1, 0x20, 0x78, 0x0, 0xf0, 0x2, 0x0, 0x2, 
0x28, 0x5f, 0xd1, 0xbc, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xc, 0x0, 0x58, 0xb1, 0xba, 0x48, 0x0, 
0x68, 0x0, 0xf0, 0xc, 0x0, 0x8, 0x28, 0x1c, 0xd1, 0xb7, 0x48, 0x0, 0x1f, 0x0, 0x68, 0x0, 
0xf4, 0x80, 0x0, 0xb0, 0xb9, 0xb4, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x20, 
0xb1, 0xe0, 0x68, 0x1, 0x28, 0x1, 0xd0, 0x1, 0x20, 0x63, 0xe7, 0xae, 0x48, 0x8, 0x38, 0x0, 
0x68, 0x20, 0xf0, 0xf8, 0x0, 0x21, 0x69, 0x40, 0xea, 0xc1, 0x0, 0xaa, 0x49, 0x8, 0x39, 0x8, 
0x60, 0x37, 0xe0, 0xe0, 0x68, 0x0, 0xb3, 0x1, 0x20, 0xa8, 0x49, 0x8, 0x60, 0xff, 0xf7, 0x1, 
0xfd, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0xfd, 0xfc, 0x40, 0x1b, 0x2, 0x28, 0x1, 0xd9, 0x3, 
0x20, 0x47, 0xe7, 0xa0, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x0, 0x28, 0xf1, 
0xd0, 0x9d, 0x48, 0x8, 0x38, 0x0, 0x68, 0x20, 0xf0, 0xf8, 0x0, 0x21, 0x69, 0x40, 0xea, 0xc1, 
0x0, 0x99, 0x49, 0x8, 0x39, 0x8, 0x60, 0x14, 0xe0, 0x0, 0x20, 0x97, 0x49, 0x8, 0x60, 0xff, 
0xf7, 0xe0, 0xfc, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0xdc, 0xfc, 0x40, 0x1b, 0x2, 0x28, 0x1, 
0xd9, 0x3, 0x20, 0x26, 0xe7, 0x90, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x0, 
0x28, 0xf1, 0xd1, 0x20, 0x78, 0x0, 0xf0, 0x8, 0x0, 0x8, 0x28, 0x2c, 0xd1, 0x60, 0x69, 0xa8, 
0xb1, 0x1, 0x20, 0x8a, 0x49, 0x8, 0x60, 0xff, 0xf7, 0xc4, 0xfc, 0x5, 0x46, 0x6, 0xe0, 0xff, 
0xf7, 0xc0, 0xfc, 0x40, 0x1b, 0x2, 0x28, 0x1, 0xd9, 0x3, 0x20, 0xa, 0xe7, 0x82, 0x48, 0x6c, 
0x30, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x0, 0x28, 0xf1, 0xd0, 0x14, 0xe0, 0x0, 0x20, 0x7f, 
0x49, 0x8, 0x60, 0xff, 0xf7, 0xae, 0xfc, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0xaa, 0xfc, 0x40, 
0x1b, 0x2, 0x28, 0x1, 0xd9, 0x3, 0x20, 0xf4, 0xe6, 0x77, 0x48, 0x6c, 0x30, 0x0, 0x68, 0xc0, 
0xf3, 0x40, 0x0, 0x0, 0x28, 0xf1, 0xd1, 0x20, 0x78, 0x0, 0xf0, 0x4, 0x0, 0x4, 0x28, 0x70, 
0xd1, 0x0, 0x26, 0x70, 0x48, 0x38, 0x30, 0x0, 0x68, 0x0, 0xf0, 0x80, 0x50, 0x90, 0xb9, 0x0, 
0xbf, 0x0, 0x20, 0x0, 0x90, 0x6c, 0x48, 0x38, 0x30, 0x0, 0x68, 0x40, 0xf0, 0x80, 0x50, 0x69, 
0x49, 0x38, 0x31, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x0, 0xf0, 0x80, 0x50, 0x0, 0x90, 0x0, 
0xbf, 0x0, 0xbf, 0x1, 0x26, 0x67, 0x48, 0x0, 0x68, 0x0, 0xf4, 0x80, 0x70, 0xb0, 0xb9, 0x64, 
0x48, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x70, 0x62, 0x49, 0x8, 0x60, 0xff, 0xf7, 0x72, 0xfc, 0x5, 
0x46, 0x6, 0xe0, 0xff, 0xf7, 0x6e, 0xfc, 0x40, 0x1b, 0x2, 0x28, 0x1, 0xd9, 0x3, 0x20, 0xb8, 
0xe6, 0x5c, 0x48, 0x0, 0x68, 0x0, 0xf4, 0x80, 0x70, 0x0, 0x28, 0xf2, 0xd0, 0x0, 0xbf, 0xa0, 
0x68, 0x1, 0x28, 0x8, 0xd1, 0x54, 0x48, 0x68, 0x30, 0x0, 0x68, 0x40, 0xf0, 0x1, 0x0, 0x51, 
0x49, 0x68, 0x31, 0x8, 0x60, 0x1d, 0xe0, 0xa0, 0x68, 0x5, 0x28, 0xd, 0xd1, 0x4e, 0x48, 0x68, 
0x30, 0x0, 0x68, 0x40, 0xf0, 0x4, 0x0, 0x4b, 0x49, 0x68, 0x31, 0x8, 0x60, 0x8, 0x46, 0x0, 
0x68, 0x40, 0xf0, 0x1, 0x0, 0x8, 0x60, 0xc, 0xe0, 0x47, 0x48, 0x68, 0x30, 0x0, 0x68, 0x20, 
0xf0, 0x1, 0x0, 0x44, 0x49, 0x68, 0x31, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x20, 0xf0, 0x4, 
0x0, 0x8, 0x60, 0x0, 0xbf, 0xa0, 0x68, 0xa8, 0xb1, 0xff, 0xf7, 0x33, 0xfc, 0x5, 0x46, 0x9, 
0xe0, 0xff, 0xf7, 0x2f, 0xfc, 0x40, 0x1b, 0x41, 0xf2, 0x88, 0x31, 0x88, 0x42, 0x2, 0xd9, 0x3, 
0x20, 0x77, 0xe6, 0x26, 0xe0, 0x38, 0x48, 0x68, 0x30, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x0, 
0x28, 0xee, 0xd0, 0x13, 0xe0, 0xff, 0xf7, 0x1d, 0xfc, 0x5, 0x46, 0x8, 0xe0, 0xff, 0xf7, 0x19, 
0xfc, 0x40, 0x1b, 0x41, 0xf2, 0x88, 0x31, 0x88, 0x42, 0x1, 0xd9, 0x3, 0x20, 0x61, 0xe6, 0x2d, 
0x48, 0x68, 0x30, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0x0, 0x28, 0xef, 0xd1, 0x1, 0x2e, 0x7, 
0xd1, 0x29, 0x48, 0x38, 0x30, 0x0, 0x68, 0x20, 0xf0, 0x80, 0x50, 0x26, 0x49, 0x38, 0x31, 0x8, 
0x60, 0x0, 0xbf, 0xa0, 0x69, 0xb8, 0xb3, 0x23, 0x48, 0x0, 0x68, 0x0, 0xf0, 0xc, 0x0, 0x8, 
0x28, 0x5e, 0xd0, 0xa0, 0x69, 0x2, 0x28, 0x46, 0xd1, 0x0, 0x20, 0x1f, 0x49, 0x8, 0x66, 0xff, 
0xf7, 0xf0, 0xfb, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0xec, 0xfb, 0x40, 0x1b, 0x2, 0x28, 0x1, 
0xd9, 0x3, 0x20, 0x36, 0xe6, 0x18, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x60, 0x0, 
0x28, 0xf1, 0xd1, 0xd4, 0xe9, 0x7, 0x1, 0x8, 0x43, 0x61, 0x6a, 0x40, 0xea, 0x81, 0x11, 0x1, 
0x22, 0xa0, 0x6a, 0xc2, 0xeb, 0x50, 0x0, 0x41, 0xea, 0x0, 0x41, 0x2c, 0x20, 0x0, 0x5d, 0x41, 
0xea, 0x0, 0x60, 0xc, 0x49, 0x9, 0x1f, 0x8, 0x60, 0x1, 0x20, 0xb, 0x49, 0x8, 0x66, 0xff, 
0xf7, 0xc8, 0xfb, 0x5, 0x46, 0x7, 0xe0, 0x2d, 0xe0, 0xff, 0xf7, 0xc3, 0xfb, 0x40, 0x1b, 0x2, 
0x28, 0x1, 0xd9, 0x3, 0x20, 0xd, 0xe6, 0x3, 0x48, 0x8, 0x38, 0x0, 0x68, 0xc0, 0xf3, 0x40, 
0x60, 0x0, 0x28, 0xf1, 0xd0, 0x1e, 0xe0, 0x8, 0x38, 0x2, 0x40, 0x0, 0x0, 0x47, 0x42, 0x80, 
0xe, 0x47, 0x42, 0x0, 0x70, 0x0, 0x40, 0x0, 0x20, 0xc, 0x49, 0x8, 0x66, 0xff, 0xf7, 0xa9, 
0xfb, 0x5, 0x46, 0x6, 0xe0, 0xff, 0xf7, 0xa5, 0xfb, 0x40, 0x1b, 0x2, 0x28, 0x1, 0xd9, 0x3, 
0x20, 0xef, 0xe5, 0x6, 0x48, 0x0, 0x68, 0xc0, 0xf3, 0x40, 0x60, 0x0, 0x28, 0xf2, 0xd1, 0x1, 
0xe0, 0x1, 0x20, 0xe6, 0xe5, 0x0, 0x20, 0xe4, 0xe5, 0x0, 0x0, 0x0, 0x0, 0x47, 0x42, 0x0, 
0x38, 0x2, 0x40, 0x70, 0x47, 0x70, 0x47, 0x10, 0xb5, 0x4, 0x46, 0xc, 0xb9, 0x1, 0x20, 0x10, 
0xbd, 0x94, 0xf8, 0x3d, 0x0, 0x28, 0xb9, 0x0, 0x20, 0x84, 0xf8, 0x3c, 0x0, 0x20, 0x46, 0x0, 
0xf0, 0xc, 0xf8, 0x2, 0x20, 0x84, 0xf8, 0x3d, 0x0, 0x21, 0x1d, 0x20, 0x68, 0x0, 0xf0, 0xc9, 
0xf9, 0x1, 0x20, 0x84, 0xf8, 0x3d, 0x0, 0x0, 0x20, 0xe9, 0xe7, 0x70, 0x47, 0x1, 0x46, 0x8, 
0x68, 0xc0, 0x68, 0x40, 0xf0, 0x1, 0x0, 0xb, 0x68, 0xd8, 0x60, 0x8, 0x68, 0x80, 0x68, 0x0, 
0xf0, 0x7, 0x2, 0x6, 0x2a, 0x5, 0xd0, 0x8, 0x68, 0x0, 0x68, 0x40, 0xf0, 0x1, 0x0, 0xb, 
0x68, 0x18, 0x60, 0x0, 0x20, 0x70, 0x47, 0x70, 0x47, 0x10, 0xb5, 0x4, 0x46, 0x20, 0x68, 0x0, 
0x69, 0xc0, 0xf3, 0x40, 0x0, 0xd8, 0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 0xf3, 0x40, 0x0, 0xb0, 
0xb1, 0x6f, 0xf0, 0x2, 0x0, 0x21, 0x68, 0x8, 0x61, 0x1, 0x20, 0x20, 0x77, 0x20, 0x68, 0x80, 
0x69, 0x0, 0xf0, 0x3, 0x0, 0x18, 0xb1, 0x20, 0x46, 0xff, 0xf7, 0xe5, 0xff, 0x5, 0xe0, 0x20, 
0x46, 0x0, 0xf0, 0xad, 0xf8, 0x20, 0x46, 0x0, 0xf0, 0xab, 0xf8, 0x0, 0x20, 0x20, 0x77, 0x20, 
0x68, 0x0, 0x69, 0xc0, 0xf3, 0x80, 0x0, 0xd8, 0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 0xf3, 0x80, 
0x0, 0xb0, 0xb1, 0x6f, 0xf0, 0x4, 0x0, 0x21, 0x68, 0x8, 0x61, 0x2, 0x20, 0x20, 0x77, 0x20, 
0x68, 0x80, 0x69, 0x0, 0xf4, 0x40, 0x70, 0x18, 0xb1, 0x20, 0x46, 0xff, 0xf7, 0xc4, 0xff, 0x5, 
0xe0, 0x20, 0x46, 0x0, 0xf0, 0x8c, 0xf8, 0x20, 0x46, 0x0, 0xf0, 0x8a, 0xf8, 0x0, 0x20, 0x20, 
0x77, 0x20, 0x68, 0x0, 0x69, 0xc0, 0xf3, 0xc0, 0x0, 0xd8, 0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 
0xf3, 0xc0, 0x0, 0xb0, 0xb1, 0x6f, 0xf0, 0x8, 0x0, 0x21, 0x68, 0x8, 0x61, 0x4, 0x20, 0x20, 
0x77, 0x20, 0x68, 0xc0, 0x69, 0x0, 0xf0, 0x3, 0x0, 0x18, 0xb1, 0x20, 0x46, 0xff, 0xf7, 0xa3, 
0xff, 0x5, 0xe0, 0x20, 0x46, 0x0, 0xf0, 0x6b, 0xf8, 0x20, 0x46, 0x0, 0xf0, 0x69, 0xf8, 0x0, 
0x20, 0x20, 0x77, 0x20, 0x68, 0x0, 0x69, 0xc0, 0xf3, 0x0, 0x10, 0xd8, 0xb1, 0x20, 0x68, 0xc0, 
0x68, 0xc0, 0xf3, 0x0, 0x10, 0xb0, 0xb1, 0x6f, 0xf0, 0x10, 0x0, 0x21, 0x68, 0x8, 0x61, 0x8, 
0x20, 0x20, 0x77, 0x20, 0x68, 0xc0, 0x69, 0x0, 0xf4, 0x40, 0x70, 0x18, 0xb1, 0x20, 0x46, 0xff, 
0xf7, 0x82, 0xff, 0x5, 0xe0, 0x20, 0x46, 0x0, 0xf0, 0x4a, 0xf8, 0x20, 0x46, 0x0, 0xf0, 0x48, 
0xf8, 0x0, 0x20, 0x20, 0x77, 0x20, 0x68, 0x0, 0x69, 0x0, 0xf0, 0x1, 0x0, 0x58, 0xb1, 0x20, 
0x68, 0xc0, 0x68, 0x0, 0xf0, 0x1, 0x0, 0x30, 0xb1, 0x6f, 0xf0, 0x1, 0x0, 0x21, 0x68, 0x8, 
0x61, 0x20, 0x46, 0x0, 0xf0, 0x36, 0xf8, 0x20, 0x68, 0x0, 0x69, 0xc0, 0xf3, 0xc0, 0x10, 0x58, 
0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 0xf3, 0xc0, 0x10, 0x30, 0xb1, 0x6f, 0xf0, 0x80, 0x0, 0x21, 
0x68, 0x8, 0x61, 0x20, 0x46, 0xff, 0xf7, 0x25, 0xff, 0x20, 0x68, 0x0, 0x69, 0xc0, 0xf3, 0x80, 
0x10, 0x58, 0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 0xf3, 0x80, 0x10, 0x30, 0xb1, 0x6f, 0xf0, 0x40, 
0x0, 0x21, 0x68, 0x8, 0x61, 0x20, 0x46, 0x0, 0xf0, 0x20, 0xf8, 0x20, 0x68, 0x0, 0x69, 0xc0, 
0xf3, 0x40, 0x10, 0x58, 0xb1, 0x20, 0x68, 0xc0, 0x68, 0xc0, 0xf3, 0x40, 0x10, 0x30, 0xb1, 0x6f, 
0xf0, 0x20, 0x0, 0x21, 0x68, 0x8, 0x61, 0x20, 0x46, 0xff, 0xf7, 0x4, 0xff, 0x10, 0xbd, 0x70, 
0x47, 0x70, 0x47, 0x10, 0xb5, 0x4, 0x46, 0x3, 0x49, 0x20, 0x68, 0x88, 0x42, 0x1, 0xd1, 0xff, 
0xf7, 0x8e, 0xfa, 0x10, 0xbd, 0x0, 0x0, 0x0, 0x20, 0x0, 0x40, 0x70, 0x47, 0x0, 0x0, 0x0, 
0xb5, 0x87, 0xb0, 0x14, 0x21, 0x2, 0xa8, 0xff, 0xf7, 0x1a, 0xf9, 0x0, 0xbf, 0x0, 0x20, 0x1, 
0x90, 0x16, 0x48, 0x0, 0x68, 0x40, 0xf0, 0x1, 0x0, 0x14, 0x49, 0x8, 0x60, 0x8, 0x46, 0x0, 
0x68, 0x0, 0xf0, 0x1, 0x0, 0x1, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x0, 0xbf, 0x0, 0x20, 0x1, 
0x90, 0x8, 0x46, 0x0, 0x68, 0x40, 0xf0, 0x10, 0x0, 0x8, 0x60, 0x8, 0x46, 0x0, 0x68, 0x0, 
0xf0, 0x10, 0x0, 0x1, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x0, 0x22, 0x1, 0x21, 0x8, 0x48, 0xff, 
0xf7, 0x51, 0xfa, 0x1, 0x20, 0x2, 0x90, 0x3, 0x90, 0x0, 0x20, 0x4, 0x90, 0x5, 0x90, 0x2, 
0xa9, 0x3, 0x48, 0xff, 0xf7, 0x3e, 0xf9, 0x7, 0xb0, 0x0, 0xbd, 0x30, 0x38, 0x2, 0x40, 0x0, 
0x10, 0x2, 0x40, 0x70, 0x47, 0x70, 0x47, 0x0, 0xb5, 0x93, 0xb0, 0x30, 0x21, 0x7, 0xa8, 0xff, 
0xf7, 0xde, 0xf8, 0x14, 0x21, 0x2, 0xa8, 0xff, 0xf7, 0xda, 0xf8, 0x0, 0xbf, 0x0, 0x20, 0x1, 
0x90, 0x25, 0x48, 0x0, 0x68, 0x40, 0xf0, 0x80, 0x50, 0x23, 0x49, 0x8, 0x60, 0x8, 0x46, 0x0, 
0x68, 0x0, 0xf0, 0x80, 0x50, 0x1, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x0, 0xbf, 0x0, 0x20, 0x1, 
0x90, 0x1e, 0x48, 0x0, 0x68, 0x40, 0xf4, 0x80, 0x40, 0x1c, 0x49, 0x8, 0x60, 0x8, 0x46, 0x0, 
0x68, 0x0, 0xf4, 0x80, 0x40, 0x1, 0x90, 0x0, 0xbf, 0x0, 0xbf, 0x2, 0x20, 0x7, 0x90, 0x1, 
0x20, 0xa, 0x90, 0x10, 0x20, 0xb, 0x90, 0x2, 0x20, 0xd, 0x90, 0x0, 0x21, 0xe, 0x91, 0x8, 
0x21, 0xf, 0x91, 0xa8, 0x21, 0x10, 0x91, 0x2, 0x21, 0x11, 0x91, 0x4, 0x21, 0x12, 0x91, 0x7, 
0xa8, 0xff, 0xf7, 0x53, 0xfc, 0x8, 0xb1, 0xff, 0xf7, 0xde, 0xf8, 0xf, 0x20, 0x2, 0x90, 0x2, 
0x20, 0x3, 0x90, 0x0, 0x20, 0x4, 0x90, 0x4f, 0xf4, 0xa0, 0x50, 0x5, 0x90, 0x4f, 0xf4, 0x80, 
0x50, 0x6, 0x90, 0x5, 0x21, 0x2, 0xa8, 0xff, 0xf7, 0xf0, 0xfa, 0x8, 0xb1, 0xff, 0xf7, 0xcb, 
0xf8, 0x13, 0xb0, 0x0, 0xbd, 0x0, 0x0, 0x40, 0x38, 0x2, 0x40, 0x0, 0x70, 0x0, 0x40, 0x13, 
0x48, 0x0, 0x68, 0x40, 0xf4, 0x70, 0x0, 0x11, 0x49, 0x8, 0x60, 0x11, 0x48, 0x0, 0x68, 0x40, 
0xf0, 0x1, 0x0, 0xf, 0x49, 0x8, 0x60, 0x0, 0x20, 0xe, 0x49, 0x8, 0x31, 0x8, 0x60, 0xc, 
0x48, 0x0, 0x68, 0xc, 0x49, 0x8, 0x40, 0xa, 0x49, 0x8, 0x60, 0xb, 0x48, 0x9, 0x1d, 0x8, 
0x60, 0x8, 0x1f, 0x0, 0x68, 0x20, 0xf4, 0x80, 0x20, 0x9, 0x1f, 0x8, 0x60, 0x0, 0x20, 0x4, 
0x49, 0xc, 0x31, 0x8, 0x60, 0x6, 0x48, 0x1, 0x49, 0x80, 0x39, 0x8, 0x60, 0x70, 0x47, 0x88, 
0xed, 0x0, 0xe0, 0x0, 0x38, 0x2, 0x40, 0xff, 0xff, 0xf6, 0xfe, 0x10, 0x30, 0x0, 0x24, 0x0, 
0x0, 0x3, 0x8, 0x10, 0xb5, 0x2, 0x48, 0xff, 0xf7, 0x57, 0xfe, 0x10, 0xbd, 0x0, 0x0, 0x10, 
0x0, 0x0, 0x20, 0x10, 0xb5, 0x2, 0x68, 0x29, 0x4b, 0x98, 0x42, 0xe, 0xd0, 0xb0, 0xf1, 0x80, 
0x4f, 0xb, 0xd0, 0x27, 0x4b, 0x98, 0x42, 0x8, 0xd0, 0x27, 0x4b, 0x98, 0x42, 0x5, 0xd0, 0x26, 
0x4b, 0x98, 0x42, 0x2, 0xd0, 0x26, 0x4b, 0x98, 0x42, 0x3, 0xd1, 0x22, 0xf0, 0x70, 0x2, 0x4b, 
0x68, 0x1a, 0x43, 0x1e, 0x4b, 0x98, 0x42, 0x20, 0xd0, 0xb0, 0xf1, 0x80, 0x4f, 0x1d, 0xd0, 0x1c, 
0x4b, 0x98, 0x42, 0x1a, 0xd0, 0x1c, 0x4b, 0x98, 0x42, 0x17, 0xd0, 0x1b, 0x4b, 0x98, 0x42, 0x14, 
0xd0, 0x1b, 0x4b, 0x98, 0x42, 0x11, 0xd0, 0x1a, 0x4b, 0x98, 0x42, 0xe, 0xd0, 0x1a, 0x4b, 0x98, 
0x42, 0xb, 0xd0, 0x19, 0x4b, 0x98, 0x42, 0x8, 0xd0, 0x19, 0x4b, 0x98, 0x42, 0x5, 0xd0, 0x18, 
0x4b, 0x98, 0x42, 0x2, 0xd0, 0x18, 0x4b, 0x98, 0x42, 0x3, 0xd1, 0x22, 0xf4, 0x40, 0x72, 0xcb, 
0x68, 0x1a, 0x43, 0x22, 0xf0, 0x80, 0x3, 0x4c, 0x69, 0x43, 0xea, 0x4, 0x2, 0x2, 0x60, 0x8b, 
0x68, 0xc3, 0x62, 0xb, 0x68, 0x83, 0x62, 0x5, 0x4b, 0x98, 0x42, 0x2, 0xd0, 0x8, 0x4b, 0x98, 
0x42, 0x1, 0xd1, 0xb, 0x69, 0x3, 0x63, 0x1, 0x23, 0x43, 0x61, 0x10, 0xbd, 0x0, 0x0, 0x0, 
0x0, 0x1, 0x40, 0x0, 0x4, 0x0, 0x40, 0x0, 0x8, 0x0, 0x40, 0x0, 0xc, 0x0, 0x40, 0x0, 
0x4, 0x1, 0x40, 0x0, 0x40, 0x1, 0x40, 0x0, 0x44, 0x1, 0x40, 0x0, 0x48, 0x1, 0x40, 0x0, 
0x18, 0x0, 0x40, 0x0, 0x1c, 0x0, 0x40, 0x0, 0x20, 0x0, 0x40, 0x2, 0x48, 0x0, 0x68, 0xc0, 
0xf3, 0x2, 0x20, 0x70, 0x47, 0x0, 0x0, 0xc, 0xed, 0x0, 0xe0, 0x10, 0xb5, 0x0, 0x28, 0x4, 
0xdb, 0xa, 0x7, 0x13, 0xe, 0x5, 0x4a, 0x13, 0x54, 0x6, 0xe0, 0xa, 0x7, 0x14, 0xe, 0x3, 
0x4a, 0x0, 0xf0, 0xf, 0x3, 0x1b, 0x1f, 0xd4, 0x54, 0x10, 0xbd, 0x0, 0xe4, 0x0, 0xe0, 0x18, 
0xed, 0x0, 0xe0, 0x2, 0xe0, 0x8, 0xc8, 0x12, 0x1f, 0x8, 0xc1, 0x0, 0x2a, 0xfa, 0xd1, 0x70, 
0x47, 0x70, 0x47, 0x0, 0x20, 0x1, 0xe0, 0x1, 0xc1, 0x12, 0x1f, 0x0, 0x2a, 0xfb, 0xd1, 0x70, 
0x47, 0x0, 0x0, 0xff, 0xf7, 0x28, 0xf9, 0xff, 0xf7, 0xce, 0xfe, 0xff, 0xf7, 0x90, 0xfe, 0x6, 
0xe0, 0x1, 0x21, 0x3, 0x48, 0xff, 0xf7, 0xfd, 0xf8, 0x64, 0x20, 0xfe, 0xf7, 0xe6, 0xff, 0xf7, 
0xe7, 0x0, 0x0, 0x0, 0x10, 0x2, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 
0x2, 0x3, 0x4, 0x6, 0x7, 0x8, 0x9, 0x0, 0x0, 0x0, 0x0, 0x1, 0x2, 0x3, 0x4, 0x20, 
0x13, 0x3, 0x8, 0x0, 0x0, 0x0, 0x20, 0x10, 0x0, 0x0, 0x0, 0xa4, 0x12, 0x3, 0x8, 0x30, 
0x13, 0x3, 0x8, 0x10, 0x0, 0x0, 0x20, 0x40, 0x4, 0x0, 0x0, 0xb4, 0x12, 0x3, 0x8, 0x0, 
0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x24, 0xf4, 0x0
};
#endif // FIRMWARE_H'

