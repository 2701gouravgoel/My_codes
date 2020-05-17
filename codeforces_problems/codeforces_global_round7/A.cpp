#include <bits/stdc++.h>
using namespace std;

#include <math.h>
// Function to check if given number is divisible
// by any of its digits
string isDivisible(int n)
{
    int temp = n;

    // check if any of digit divides n
    while (n) {
        int k = n % 10;

        // check if K divides N
        if (temp % k == 0)
            return "YES";

        n /= 10;
    }

    return "NO";
}

int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        if(n==1)
        {
            cout << -1 <<"\n";
        }
        else
        {
            cout << 2;
            for(int j=0;j<n-1;j++)
            {
                cout << 3;
            }
            cout << "\n";
        }
    }
    return 0;
}
