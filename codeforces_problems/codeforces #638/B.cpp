#include <iostream>

#include <vector>
#include <math.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin >> n>>k;
        int a;
        vector<int> as;
        int rr[101]={0};
        for(int j=0;j<n;j++)
        {
            cin >> a;
            rr[a]+=1;
            as.push_back(a);
        }
        int s=n-k;
        bool f = true;
        int c=0;
        int m=0;
        vector<int > e;
        for(int j=0;j<101;j++)
        {
            if(rr[j]>=1)
            {
                c+=1;
                e.push_back(j);
            }
            m=max(m,rr[a]);
        }

        if(c<=k)
        {
        int rt = k-e.size();
        int nn=1;
        while(rt>0)
        {
            if(rr[nn]==0)
            {
                e.push_back(nn);
                rt--;
            }
            else
            {
                nn++;
            }
        }
        }
        if(c<=k)
        {
        cout << (n)*e.size()<<"\n";
        std::vector<int>::iterator it;
        for(int j=0;j<n;j++)
        {
        for (it = e.begin(); it != e.end(); ++it)
            cout << *it << " ";
        }
        cout << "\n";
        }
        else
        {
            cout << -1<<"\n";
        }
    }
    return 0;
}
