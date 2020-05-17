#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long int a,b;
        cin >> a>>b;
        long long int q=a/b;
        if((q)*b==a)
        {
            cout <<0<<"\n";
        }
        else
        {
            cout << (q+1)*b-a<<"\n";
        }
    }
    return 0;
}
