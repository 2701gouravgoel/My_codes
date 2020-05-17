#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007
#include <set>



int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll a,b,c,d;
        cin >> a>>b >>c>>d;
        ll total=0;
        total+=b;
        if(a<=b)
        {
            cout << b<<"\n";
        }
        else
        {
        if(c>d)
        {
            ll u=(a-b);
            int e=0;
            if(u%(c-d)!=0)
            {
                e=1;
            }
            u=u/(c-d);
            if(e==1)
            {
                u++;
            }
            b+=u*(c-d);
            total+=u*(c);
        }
        if(c<=d)
        {
            cout << -1<<"\n";
        }
        else
        {
            cout <<total <<"\n";
        }
        }

    }

    return 0;
}
