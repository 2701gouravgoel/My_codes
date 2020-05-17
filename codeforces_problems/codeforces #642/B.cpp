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
        int n,k;
        cin >> n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int i=0;
        int i1=0;
        int i2=n-1;
        while(i<k)
        {
            if(a[i1]<b[i2])
            {
                a[i1]=b[i2];
                i1++;
                i2--;
                i++;
            }
            else
            {
                break;
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
     {
            ans+=a[i];

     }

        cout << ans<<"\n";
    }



    return 0;
}
