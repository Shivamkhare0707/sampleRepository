#include <stdio.h>
int main()
{
  int i, j, n, m, k;
  printf("Enter the no. of rows:");
  scanf("%d", &n);
  m = n;
  for (i = 1; i <= n; i++) // this loop we are using for rows
  {
    for (j = 1; j <= m-1; j++) // this row we are using for printing spaces
    {
      printf(" ");
    }
    for (k = 1; k <= 2 * i - 1; k++) // this loop will print stars in every row
    {
      printf("*");
    }
    m--;
    printf("\n");
  }
}