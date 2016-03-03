#include <stdlib.h>
#include "bitmap.h"
#include <stdbool.h>
void swap(int* a, int* b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void line(bitmap_t* image, int x0, int y0, 
	  int x1, int y1,
	  const pixel_t *color){
  bool steep = false;
  if(abs(x0-x1) < abs(y0-y1)){
    swap(&x0,&y0);
    swap(&x1,&y1);
    steep = true;
  }
  if( x0 > x1) {
    swap(&x0,&x1);
    swap(&y0,&y1);
  }
  int dx=x1-x0,dy=y1-y0;
  int D = 2*abs(dy);
  int err = 0;
  int y = y0;
  for( int x=x0; x <= x1; x++){
    if(steep){
      set_pixel(image,y,x,color);
    } else {
      set_pixel(image,x,y,color);
    }
    err += D;
    if(err > dx){
      y +=( y1 > y0 ? 1 : -1);
      err -= 2*dx;
    }
  }
}
