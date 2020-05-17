#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include <map>
#define ll long long int
using namespace std;

#define mod 998244353

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,n,q;
    cin >> m>>n>>q;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }
    ll p=1;
    for(ll i=0;i<n;i++)
    {
        p=(p*a[i]%mod)%mod;
    }
    ll ok[n+1];
    ll aaja[m-1];
    ll r=0;
    ll i;
    for( i=0;i<n;i++)
    {
        ok[i]=a[i]%mod;
        r=(r+a[i]%mod)%mod;
    }
    ok[n]=r;
    aaja[0]=ok[n];
    for(ll j=1;j<m-1;j++)
    {
        ll ss=0;
        ll s=ok[n];
        for(int j1=0;j1<n;j1++)
        {
            int yy = ok[j1];
            ok[j1]=((a[j1]%mod)*s%mod)%mod;
            ss=(ss%mod+ok[j1]%mod)%mod;
            s=((s%mod-yy%mod)+mod)%mod;
        }
        ok[n]=ss;
        aaja[j]=ok[n];
    }

    for(ll qnum=0;qnum<q;qnum++)
    {
        ll k;
        cin>>k;
        ll ans=0;
        if(k>1)
        {
            ans=((p%mod)*(aaja[k-2]%mod))%mod;
        }
        if(k==1)
        {
            ans=p%mod;
        }
        cout << ans <<"\n";
    }
}
