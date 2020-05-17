#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        sort(a,a+n);
        for(int j=n-1;j>=0;j--)
        {
            cout << a[j]<<" ";
        }
        cout <<"\n";
    }
    return 0;
}
