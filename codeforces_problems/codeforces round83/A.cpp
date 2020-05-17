#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long int
#include <string>

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll x,y;
        cin >> x>> y;
        ll a,b;
        cin >> a>> b;
        ll ans=0;
        if(2*a>b)
        {
            ll m = min(x,y);
            ll r= abs(x-y);
            ans+=b*m;
            ans+=a*r;
        }
        else
        {
            ans+=a*(x+y);
        }

        cout << ans <<"\n";
    }
    return 0;
}
