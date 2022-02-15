#include <stdio.h>  
int *getarray(int *arr)  
{  
  
    printf("Enter the elements in an array : ");  
    for(int i=0;i<5;i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    return arr;  
}  
int main()  
{  
  int *n;   
  int arr[5];  
  n=getarray(arr);  
  printf("\nElements of array are :");  
  for(int i=0;i<5;i++)  
    {  
        printf("%d", n[i]);  
    }  
    return 0;  
}  
//here i have learnt how to resolve segmented fault error