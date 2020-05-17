#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n>>m;
        if(n==1)
        {
            cout <<0<<"\n";
        }
        if(n==2)
            cout <<m<<"\n";
        if(n>2)
        cout << 2*m<<"\n";
    }



    return 0;
}
