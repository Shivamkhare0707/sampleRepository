#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10],i;
    printf("Enter the value in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("maximum value is %d",max(a));//array ko sirf uske name likhkar pass kar sakte hai
}
    int max(int a[])
{
    int max=a[0],i;
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else{
            continue;
        }
    }
    
    return max;
}
