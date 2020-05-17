#include<bits/stdc++.h>
#include <math.h>
#include <sstream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        string n;
        cin >> n;
        int len = n.length();
        int a[len];
        for(int j=0;j<len;j++)
        {
            a[j]=int(n[j]);
        }
        if(n[1]=='0')
        {
            string s="";
            for(int j=1;j<len;j++){
            s=s+n[j];
        }
            stringstream geek(s);
            int x = 0;
            geek >> x;
            cout << x<<"\n";
        }
        else{
        string s="";
        bool h=false;
        int r;
        for(int j=1;j<len;j++)
        {
            if(a[j]-a[j-1]<0)
            {
                r=j-1;
                h=true;
                break;
            }
        }
        if(h==false)
        {
            for(int j=0;j<len-1;j++)
        {
            s=s+n[j];
        }
        }
        else{
        for(int j=0;j<len;j++)
        {
            if(j!=r)
            {
                s=s+n[j];
            }
        }
        }
            stringstream geek(s);
            int x = 0;
            geek >> x;
            cout << x<<"\n";
        }
    }
    return 0;
}
