#include "render.h"
#include "load_obj.h"

void load_obj_file(const char* path){
  // open obj file at path and load vertices and faces
  FILE* file = fopen(path,"r");
  char buff[512];
  while(fgets(buff,sizeof(buff)/sizeof(*buff),file)){
    printf("%s",buff);
  }
  
  fclose(file);
}
