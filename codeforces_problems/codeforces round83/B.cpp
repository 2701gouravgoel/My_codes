#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long int
#include <string>

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin >> s;
        int z=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='0')
            {
                z+=1;
            }
        }
        int n = s.length();
        int o=n-z;


        if(z==0||z==n)
        {
            cout << s<<"\n";
        }
        else
        {
            string r;
            if(s[0]=='0')
            {
                for(int j=0;j<n;j++)
                {
                    r+='0';
                    r+='1';
                }
            }
            else if(s[0]=='1')
            {
                for(int j=0;j<n;j++)
                {
                    r+='1';
                    r+='0';
                }
            }
            cout << r<<"\n";
        }

    }
    return 0;
}
