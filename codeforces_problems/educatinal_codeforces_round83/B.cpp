#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int n,m;
        cin >>n >> m;
        if(n%m==0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
