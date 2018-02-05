#include <stdio.h>

int main(){
  char str[] = "hello,world!!";
  int len = sizeof(str)/sizeof(char);
  char *p = str;
  int i;

    for(i=0;i<len;i++){
      printf("%c",*(p+i));
      printf("\n");
      printf("%p",(p+i));
      printf("\n");
    }
    printf("\n");

}
