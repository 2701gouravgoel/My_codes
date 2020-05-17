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
        string s;
        cin >> s;
        int n = s.length();
        int a[n],b[n],c[n];
        int a1[n],b1[n],c1[n];
        int x=n+1,y=n+1,z=n+1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='1')
            {
                x++;
            }
            else
            {
                x=1;
            }
            //cout <<x<<" ";
            a[i]=x;

            if(s[i]!='2')
            {
                y++;
            }
            else
            {
                y=1;
            }
            b[i]=y;
            if(s[i]!='3')
            {
                z++;
            }
            else
            {
                z=1;
            }
            c[i]=z;
        }
        //cout <<"\n";
        x=n+1,y=n+1,z=n+1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!='1')
            {
                x++;
            }
            else
            {
                x=1;
            }
            a1[i]=x;

            if(s[i]!='2')
            {
                y++;
            }
            else
            {
                y=1;
            }
            b1[i]=y;
            if(s[i]!='3')
            {
                z++;
            }
            else
            {
                z=1;
            }
            c1[i]=z;
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            //cout <<a[i]<<" ";
            ans=min(ans,max(max(a[i],b[i]),c[i]));
            ans=min(ans,max(max(a1[i],b1[i]),c1[i]));
        }

        if(ans>n)
            cout <<0<<"\n";
        else
            cout << ans<<"\n";
    }

    return 0;
}
