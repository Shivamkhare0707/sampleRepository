#include<stdio.h>
#include <stddef.h>
#define NULL 10
int main()
{
  int n;
  //#undef NULL;
  #ifdef NULL
   printf("dffdfadffdf"); 
  #endif
  return 0;
}