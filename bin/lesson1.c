#include "stdlib.h"
#include "bitmap.h"
#include "pngwriter.h"
#include "render.h"

int main(int argc, const char* argv[]){
  bitmap_t image;
  image.width = 100;
  image.height = 100;
  image.pixels = calloc(sizeof(pixel_t),image.width*image.height);
  pixel_t red={255,0,0};
  pixel_t white={255,255,255};
  line(&image,13, 20, 80, 40, &white); 
  line(&image,20, 13, 40, 80, &red); 
  line(&image,80, 40, 13, 20, &red);
  save_png_to_file(&image,"lesson1.png");
  return 0;
}
