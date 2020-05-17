#include <bits/stdc++.h>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cin >> n;
    int b[n];
    for(int j=0;j<n;j++)
    {
        cin >> b[j];
    }
    int x=0;
    int a[n];
    a[0] =b[0];
    for(int j=1;j<n;j++)
    {
        x=max(x,a[j-1]);
        a[j]=b[j]+x;
    }
    for(int j=0;j<n;j++)
    {
        cout <<a[j]<<" ";
    }
    cout << "\n";
    return 0;
}
