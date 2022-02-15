#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *arr, n, i;
    printf("Enter how many elements you want to enter");
    scanf("%d", &n);
    // allocate memory dynamically with of
    // total size = NoOfElements* size of 1 integer i.e. sizeof(int)
    // malloc returns void pointer,means points to nothing
    // typecast it to int* as we want to store int values
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arrrev(arr, n);
    return 0;
}
int arrrev(int arr[], int n)
{
    int j, i, mid, a;
    mid = n / 2;
    j = n - 1;
    {
        for (i = 0; i < mid; i++)
        {
            a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
            j--;
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }
   
}