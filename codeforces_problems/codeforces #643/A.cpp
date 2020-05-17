#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define mod 1000000007
#include <set>
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void Digits(ll n,int *largest,int *smallest)
{

    while (n) {
        int r = n % 10;

        // Find the largest digit
        *largest = max(r, *largest);

        // Find the smallest digit
        *smallest = min(r, *smallest);

        n = n / 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a1 ,k;
        cin >>a1>>k;
        for(int i=1;i<k;i++)
        {
            int m=INT_MAX;
            int M=INT_MIN;
            Digits(a1,&M,&m);
            a1+=m*M;
            if(m==0)
            {
                break;
            }
        }
        cout << a1<<"\n";
    }

    return 0;
}
