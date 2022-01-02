#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    //here i have created a integer variable contaning the value 10 
    int* ptr = &a;
    int *b;
    //here i have created a pointer variable which is contating the address of the variable a
    printf("the value of the a is %d\n",a);
    //here i have printed the value of the variable a
    printf("the value of the a is %d\n",*ptr);
    //here i have again printed the value of the a with the help of pointer variable 
    printf("The value of a is %x\n",ptr);
    //in above statement i have printed the address of the variable a which is stored in the pointer variable 
    printf("The address of the varible a is %x\n",&a);
    //Here i am again printing the address of variable a
    printf("The address of the ptr is %p\n",&ptr);
    //Here i have printed the value of the pointer variable
    printf("%d",sizeof(b));
    return 0;
}
