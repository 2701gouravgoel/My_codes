#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007
#include <set>

#include <cmath>


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        map<string,int> mp1;
        map<string,int> mp2;
        map<string,int> mp3;
        string s[n];
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
            cin >> a[i];
            mp1[s[i]]=0;
            mp2[s[i]]=0;
            mp3[s[i]]=0;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                mp1[s[i]]++;
            }
            if(a[i]==1)
            {
                mp2[s[i]]++;
            }
            mp3[s[i]]++;
        }
        map<string,int>::iterator it;
        int ans=0;
        for(it=mp3.begin();it!=mp3.end();it++)
        {
            ans+=max(mp1[it->first],mp2[it->first]);
        }
        cout << ans<<"\n";
    }
    return 0;
}
