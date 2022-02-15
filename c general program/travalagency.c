#include<stdio.h>
#include<string.h>
struct driver
{
    char name[30];
    char  drno[30];
    char route[50];
    int kms;
};
int main()
{
    struct driver d1,d2,d3;
    printf("Enter the details of the first driver\n");
    printf("Enter the name of the driver one:\n");
    scanf("%s\n", &d1.name);
    printf("Enter the dlno of the driver one\n");
    scanf("%s\n", &d1.drno);
    printf("Enter the route of the driver one\n");
    scanf("%s\n", &d1.route);
    printf("Enter the kms of the driver first\n");
    scanf("%d\n", &d1.kms); 

    printf("Enter the details of the first driver\n");
    printf("Enter the name of the driver one:\n");
    scanf("%s\n", &d2.name);
    printf("Enter the dlno of the driver one\n");
    scanf("%s\n", &d2.drno);
    printf("Enter the route of the driver one\n");
    scanf("%s\n", &d2.route);
    printf("Enter the kms of the driver first\n");
    scanf("%d\n", &d2.name);

    printf("Enter the details of the third driver\n");
    printf("Enter the name of the driver one:\n");
    scanf("%s\n", &d3.name);
    printf("Enter the dlno of the driver one\n");
    scanf("%s\n", &d3.drno);
    printf("Enter the route of the driver one\n");
    scanf("%s\n", &d3.route);
    printf("Enter the kms of the driver first\n");
    scanf("%d\n", &d3.name);
    
}