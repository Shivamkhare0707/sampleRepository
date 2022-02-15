#include<stdio.h>
#include<math.h>
int main()
{
    int i,n=10,sum=0,j=0,x;
    char str[n];
    printf("Enter a hexadecimal no. for convert into decimal:");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--)
   {
      if(str[i]<58)
      {
          x=str[i]-48;
          sum=sum+x*pow(16,j);
      }
      else
      {
        x=str[i]-55;
        sum=sum+x*pow(16,j);
      }
      j++;
   } 
   printf("%d",sum);
}