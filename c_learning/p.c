#include <stdio.h>
int main(void)
{
    int i = 123;
    int *p;
    //float *f;
  //double *f; 
   // printf("%p \n",p);
   // p++;
    //printf("%p \n",p);
    p = &i;
    printf("%p\n",p);
    printf("%d\n",*p);
    
    return 0;
}
