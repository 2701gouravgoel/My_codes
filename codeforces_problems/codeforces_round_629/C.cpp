#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        string x;
        cin >> x;
        int u=n;
        for(int j=0;j<n;j++)
        {
            if(x[j]=='1')
            {
                u=j;
                break;
            }
        }
        string a,b;
            for(int j=0;j<u;j++)
            {
                if(x[j]=='2')
                {
                    a+='1';
                    b+='1';
                }
                else
                {
                    a+='0';
                    b+='0';
                }
            }
            if(u!=n){
            a+='1';
            b+='0';
            for(int j=u+1;j<n;j++)
            {
                a+='0';
                b+=x[j];
            }
            }
        cout <<a<<"\n";
        cout <<b<<"\n";
    }
    return 0;
}
