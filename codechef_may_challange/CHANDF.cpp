#include <iostream>

#include<bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long int

#include<string>

int decToB(ll n,vector<ll>&vec)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 40; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            vec.push_back(1);
        else
            vec.push_back(0);
    }
}

ll decToBinary(ll n,ll m)
{
    ll binaryNum=0;
    ll a=1;
    while (n > 0 || m>0) {
        if(n%2==1||m%2==1)
        {
            binaryNum += a;

        }
        n = n / 2;
        m=m/2;
        a*=2;
    }
    return binaryNum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t=5;
    cin >> t;
    for(ll i=0;i<t;i++)
    {
        ll x,y,l,r;
        cin >> x>>y>>l>>r;


        vector<ll>nbin,mbin,rbin,lbin;
    vector<ll> cbin;
    decToB(x,nbin);
    decToB(y,mbin);
    decToB(r,rbin);
    decToB(l,lbin);

    for(ll j=0;j<41;j++)
    {
        cbin.push_back(nbin[j]||mbin[j]);
    }

    ll mm=INT_MIN;
    ll u=0;
    ll ww=0;
    for(ll jq=0;jq<41;jq++)
    {
        if(rbin[jq]==1)
        {
            for(ll j1=jq;j1<41;j1++)
            {
                    ll box[41];
                    ll j;
                    ll c=1;
                    for(j=0;j<j1;j++)
                    {
                        if(rbin[j]==0||cbin[j]==0)
                        {
                            box[j]=0;
                        }
                        else
                            box[j]=1;
                    }
                    if(j<41)
                    {
                        box[j]=0;
                    }
                    j++;
                    for(j;j<41;j++)
                    {
                        box[j]=cbin[j];
                    }


                    for(j=0;j<41;j++)
                    {
                        if(lbin[j]==0&&box[j]==1)
                        {
                            break;
                        }
                        else if(box[j]==0&&lbin[j]==1)
                        {
                            box[j]=1;
                        }
                    }


                    ll q=0;
                    ll a=1;
                    for(int j=40;j>=0;j--)
                    {
                        q+=a*box[j];
                        a*=2;
                        //cout << q <<"\n";
                    }
                    //cout << q<<"\n";
                    if(q>=l&&q<=r)
                    {
                            ll aa2 =  x&q;
                            ll ab1 = y&q;
                            ll re = aa2*ab1;
                            if(mm<re)
                            {
                                mm=re;
                                u = q;
                            }
                    }
                    //cout << q <<"\n";
            }
            break;
        }
    }
    ll box[41];
            ll j;
            ll c=1;

            for(j=0;j<41;j++)
            {
                    if(rbin[j]==0||cbin[j]==0)
                    {
                        box[j]=0;
                    }
                    else
                        box[j]=1;
            }

            for(j=0;j<41;j++)
            {
                if(box[j]==0&&lbin[j]==1)
                {
                    box[j]=1;
                }
                else if(lbin[j]==0&&box[j]==1)
                {
                    break;
                }
            }


                    ll q=0;
                    ll a=1;
                    for(int j=40;j>=0;j--)
                    {
                        q+=a*box[j];
                        a*=2;
                        //cout << q <<"\n";
                    }
                    if(q>=l&&q<=r)
                    {
                            ll aa2 =  x&q;
                            ll ab1 = y&q;
                            ll re = aa2*ab1;
                            if(mm<re)
                            {
                                mm=re;
                                u = q;
                            }
                    }
            ll rr = u;
           // cout << rr <<"\n";

        if(((x&rr)==0)||((y&rr)==0))
        {
            rr=l;
        }
        cout << rr <<"\n";
    }
    return 0;
}

