#include<bits/stdc++.h>
using namespace std;
int rotatearray(vector<int> a,int n,int d)
{
  int i;
   reverse(a.begin(),a.begin()+2);
   reverse(a.begin()+2,a.end());
   reverse(a.begin(),a.end());
   for(i=0;i<a.size();i++)
   {
     printf("%d ",a[i]);
   }
   return 0;
}
int main()
{
    vector<int> a{1,2,3,4,5,6,7};
    int n,d=2,i;
    n=sizeof(a)/sizeof(int);
    rotatearray(a,n,d);
}