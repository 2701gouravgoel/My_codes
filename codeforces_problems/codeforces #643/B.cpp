#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define mod 1000000007
#include <set>

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int e[n];
        map<int ,int>mp;
        for(int i=0;i< n;i++)
        {
            cin >> e[i];
            mp[e[i]]=0;
        }
        sort(e,e+n);
        for(int i=0;i< n;i++)
        {
            mp[e[i]]++;
        }
        vector<int> b;
        b.push_back(e[0]);
        for(int i=1;i<n;i++)
        {
            if(e[i]!=e[i-1])
            {
                b.push_back(e[i]);
            }
        }
        long long int ans=0;
        int r=0;
        for(int i=0;i<b.size();i++)
        {
            int u=mp[b[i]]+r;
            ans+=u/b[i];
            r=u%b[i];
        }

        cout << ans <<"\n";
    }

    return 0;
}
