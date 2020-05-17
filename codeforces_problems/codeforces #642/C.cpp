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
       int n;
       cin >> n;
       if(n==1)
       {
           cout << 0<<"\n";
       }
       else
       {
           ll ans=0;
           ll i=2;
           ll l=8;
           ll c=1;
           while(i<n)
           {
               ans+=c*(l);
               l+=8;
               i+=2;
               c+=1;
           }
           cout << ans<<"\n";
       }
    }



    return 0;
}
