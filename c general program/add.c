// { Driver Code Starts
#include <stdio.h>

// } Driver Code Ends
// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n)
{
    int arr1[5], j = 0;
    for (int i = 0; i < d; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (d + i >= n)
        {
            arr[i] = arr1[j];
            j++;
        }
        else
            arr[i] = arr[d + i];
    }
}

// { Driver Code Starts.

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n, d;
    // calling rotateArr() function
    rotateArr(arr, d, n);

    // printing the elements of the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } // } Driver Code Ends
}