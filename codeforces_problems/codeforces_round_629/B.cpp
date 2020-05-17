#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin >> n>>k;

    int r=0;
    int u;
    int u1;
    for(int j=0;j<n-1;j++)
        {
            r=r+(j+1);
            if(r>k)
            {
                u=j;
                u1=k-r+j;
                break;
            }
            else if(r==k)
            {
                u=j;
                u1=j;
                break;
            }
        }
    for(int j=0;j<n;j++)
    {
        if(j==(n-2-u) || j==(n-1-u1))
        {
            cout<<'b';
        }
        else{cout<<'a';}
    }
    cout <<"\n";
    }
    return 0;
}
