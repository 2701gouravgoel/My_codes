#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin >>n;
        ll s=0;
        ll a=1;
        ll b=0;
        if(n<2)
        {
            cout <<0<<"\n";
        }
        else
        {
        vector<int >gg;
        while(s<n)
        {
           b++;
           a=b*b;
           s=(3*a+b)/2;
            gg.push_back(s);
        }
        if(s==n)
        {
            cout <<1<<"\n";
        }
        else
        {
        ll j1=gg.size()-2;
        ll r=1;
        n-=gg[j1];
        while(n>=2)
        {
            if(n>=gg[j1])
            {
                n-=gg[j1];
                r+=1;
            }
            else
            {
            j1--;
            }
        }
        cout << r<<"\n";
        }
        }
    }
    return 0;
}
