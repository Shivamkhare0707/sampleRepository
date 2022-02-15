//with the help of typedef we can change previous name of the data type into new name;
#include <stdio.h>//this header file is used to input & output operations
#include<malloc.h>//this header file is used to create dynamic memory location
#define null 0

typedef struct linkedlist{
    int data;
    struct linkedlist  *next;
}node;
node *temp,*ttemp,*first;
void createfirst(int d)
{
    first=(node*)malloc(sizeof(node));
     first->data=d;
     first->next=null;
}
void addnode(int d)
{
   temp=first;
   while(temp->next!=null)
   {
      temp=temp->next;
   }
    ttemp=(node*)malloc(sizeof(node));
       ttemp->data=d;
       ttemp->next=null;
       temp->next=ttemp;
}
int print()
{
    temp=first;
    while(temp!=null)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    print();
    /*typedef int integer;
    typedef unsigned long ul;
    integer i1=3,i2=4,i3=5;
    ul u1=5300,u2=383,u3=493;
    printf("%d %d %d\n",u1,u2,u3);
    printf("%d %d %d\n",i1,i2,i3);*/
    return 0;
}
