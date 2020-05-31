#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define mod 998244353

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.length();
        int a[n];
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                a[i]=-1;
            }
            else
            {
                a[i]=s[i]-'0';
            }
        }
        string ans="safe";
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(a[j]!=-1)
                    {
                        if(i+a[i]>=j-a[j])
                        {
                            ans= "unsafe";
                        }
                    }
                }
            }
        }
        cout << ans<<"\n";
    }
    return 0;
}
