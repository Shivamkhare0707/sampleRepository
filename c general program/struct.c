#include <stdio.h>
#include <string.h>
struct student // here i have declared student struct type data type
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}harry,ravi,shubham;
//struct student harry, ravi, shubham;//global variables
int main()
{
    //struct student harry, ravi, shubham;//local variabals
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 100;
    ravi.marks = 200;
    shubham.marks = 400;
    harry.fav_char = 'H';
    ravi.fav_char = 'M';
    shubham.fav_char = 'S';
    //strcpy(ravi.name, "ravi is a good boy");
    strcpy(harry.name, "harry is inteligent boy");
    strcpy(shubham.name, "shubham is vary nice person");
    printf("harry information id is %d\n", harry.id);
    printf("harry got %d markes\n", harry.marks);
    printf(" %s\n", harry.name);
    printf("harry's favourite character is %c\n", harry.fav_char);
     printf("ravi  %d markes \n",ravi.marks);
     printf("ravi got %d markes \n",ravi.marks);
     printf("ravi got %d markes \n",ravi.marks);
     printf("shubham got %d markes \n",shubham.marks);
     printf("shubham got %d markes \n",shubham.marks);
     printf("shubham got %d markes \n",shubham.marks);
    return 0;
}