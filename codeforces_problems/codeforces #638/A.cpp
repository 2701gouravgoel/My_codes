#include <iostream>

#include <math.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll n;
        cin >>n;
        ll p=n/2-1;
        ll r=0;
        ll a=2;
        for(ll j=0;j<p;j++)
        {
            r+=a;
            a*=2;
        }
        for(ll j=0;j<p+1;j++)
        {
            r-=a;
            a*=2;
        }
        r+=a;
        cout << r<<"\n";

    }
    return 0;
}
