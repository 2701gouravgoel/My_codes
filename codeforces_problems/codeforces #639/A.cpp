#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#define ll long long int
using namespace std;

int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin >> n>>m;
        if(m==1||n==1)
        {
            cout << "YES\n";
        }
        else if(m==2&&n==2)
        {
            cout <<"YES\n";
        }
        else
        {
            cout <<"NO\n";
        }
    }
}
