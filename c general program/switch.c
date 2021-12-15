#include<stdio.h>
int main()
{
  int distance;
  printf("Enter distance from your home  to your school");
scanf("%d ",&distance);
switch(distance)
{
  case 1:
                printf("you can come by walking ");
                      break;
   case 2:
                   printf("you can by bicycle");
                    break;
 case 3:
             printf("you can come by auto");
               break;
case 4:
                 printf("you can come by bus");
                    break;
default: 
                printf("you should come by your personal vheical");
                break;
}  }                                           