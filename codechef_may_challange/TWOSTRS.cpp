#include <iostream>

#include<bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long int

#include<string>


int ss(string s, string key)
{
    int count = 0;
    size_t pos=0;
    while ((pos = s.find(key, pos)) != std::string::npos) {
        ++count;
        ++pos;
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        int n;
        cin >> n;
        vector<string > SS;
        ll B[n];
        for(int j=0;j<n;j++)
        {
            string s;
            cin >> s;
            SS.push_back(s);
            cin >> B[j];
        }
        ll uu=0;
        for(int j2=1;j2<a.length()+1;j2++)
        {
        for(int j1=0;j1<b.length();j1++)
        {
            string comb1 = a.substr(0, j2)+b.substr(j1, b.length());
            ll re1=0;
            for(int j=0;j<n;j++)
            {
                re1+=B[j]*ss(comb1,SS[j]);
            }
            uu=max(uu,re1);
        }
        }

         cout << uu<< "\n";
    }
    return 0;
}

