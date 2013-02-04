#include <stdio.h>
#include "file.h"

int readFile(char* file_name){
  printf("foo %s\n",file_name );
  FILE *f = fopen(file_name,"r");
  int count = 0;
  if (f==NULL){
    printf("it is nil\n");
  }
  while(fgetc(f)!= EOF){
    count++;
  }
  return count;
}