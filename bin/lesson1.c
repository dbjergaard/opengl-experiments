#include "stdlib.h"
#include "bitmap.h"
#include "pngwriter.h"

int main(int argc, const char* argv[]){
  bitmap_t image;
  image.width = 100;
  image.height = 100;
  image.pixels = calloc(sizeof(pixel_t),image.width*image.height);
  pixel_t red;
  red.red=255;
  red.green=0;
  red.blue=0;
  set_pixel(&image,52,41,&red);
  save_png_to_file(&image,"output.png");
  return 0;
}
