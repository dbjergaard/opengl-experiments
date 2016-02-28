#include "bitmap.h"

pixel_t * pixel_at (bitmap_t * bitmap, const int x, const int y){
  return bitmap->pixels + bitmap->width * y + x;
}
void set_pixel(bitmap_t* bitmap, const int x, const int y, const pixel_t* pixel){
  pixel_t* bitmap_pix = pixel_at(bitmap, x,y);
  bitmap_pix->red = pixel->red;
  bitmap_pix->green = pixel->green;
  bitmap_pix->blue = pixel->blue;
}
