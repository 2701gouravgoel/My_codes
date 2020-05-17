#include <iostream>

#include<bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long int

#include<string>
#define mod 1000000007

ll smallestDivisor(ll n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;

    // iterate from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }

    return n;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        int s[n];
        for(int j=0;j<n;j++)
            cin >> s[j];
        int p=1;
        int a=s[0];
        int ca=1;
        int check[n]={0};
        int an=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j+=(i+1))
            {
                if(i!=j&&s[j]>s[i])
                    check[j]=max(check[i]+1,check[j]);
            }
        }
        int r=0;
        for(int j=0;j<n;j++)
            r=max(r,check[j]);
        cout << r+1<<"\n";
    }
     return 0;
}
