#pragma once
#include <stdint.h>
#include <stddef.h>
/* A coloured pixel. */

typedef struct {
    uint8_t red;
    uint8_t green;
    uint8_t blue;
} pixel_t;

/* A picture. */
    
typedef struct  {
    pixel_t *pixels;
    size_t width;
    size_t height;
} bitmap_t;
    
/* Given "bitmap", this returns the pixel of bitmap at the point 
   ("x", "y"). */
pixel_t * pixel_at (bitmap_t * bitmap, int x, int y);
/* Sets a pixel at x,y of bitmap to RGB values of pixel */
void set_pixel(bitmap_t* bitmap, const int x, const int y, const pixel_t* pixel);
