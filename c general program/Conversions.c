#include <stdio.h>

double conversion()
{
    int i;
    double km, m, miles, inch, foot, cm, pound, kg, l, ml,f,c;
    printf("\n1. meter to kilometer conversion:-");
    printf("\n2. kilometer to miles conversion:-");
    printf("\n3. inches to feet conversion:-");
    printf("\n4. centimeter to inche conversion:-");
    printf("\n5. kilogram to pound conversion:-");
    printf("\n6. milileter to leter conversion:-");
    printf("\n7. degree to farenhight conversion");
    printf("\nChoose which conversion you wanted to perform:");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("\n Enter the value of meter");
        scanf("\n%Lf", &m);
        km = (1.0 / 1000.0) * m;
        printf("%.2Lf meter = %.2Lf kilometer", m, km);
        return km;
        break;
    case 2:
          printf("Enter the value of kilometer:");
          scanf("%Lf",&km);
          miles=(0.62135*km);
          return miles;
          break;
    case 3:
          printf("Enter the value of inches:");
          scanf("%Lf",&inch);
          foot=(1.0/12.0)*inch;
          return foot;
          break;
    case 4:
          printf("Enter the value of cemtimeter:");
          scanf("%Lf",&cm);
          inch=(2.54*cm);
          return inch;
          break;
    case 5:
          printf("Enter the value of kilometer");
          scanf("%Lf",&kg);
          pound=(2.20462*kg);
          return pound;
          break;
    case 6:
          printf("Enter the value of mililitter");
          scanf("%Lf",ml);
          l=(1.0/1000.0)*ml;
          return l;
          break;    
    case 7:
         printf("Enter the value of degree");
         scanf("%Lf",&c);
         f=(c*9.0/5.0)+32;
         return f;
         break;   
    default:
        printf("Invalid choice");
        break;
    }
}
int main()
{
    printf("%.2Lf", conversion());
    return 0;
}