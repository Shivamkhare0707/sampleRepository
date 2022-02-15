// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int search(int A[], int l, int h, int key)
    {
        // complete the function here
        int i, j, temp = 0, n, mid;
        n = h + 1;
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (A[i] <= A[j])
                {
                    continue;
                }
                else
                {
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        while (l <= h)
        {
            mid = l + h / 2;
            if (key == A[mid])
            {
                return mid;
            }
            if (key < A[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (l > h)
        {
            printf("There is no element that has value %d", key);
        }
        // return mid;
    }
};
    // { Driver Code Starts.
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            int A[n];
            for (int i = 0; i < n; i++)
                cin >> A[i];
            int key;
            cin >> key;
            Solution ob;
            cout << ob.search(A, 0, n - 1, key) << endl;
        }
        return 0;
    } // } Driver Code Ends