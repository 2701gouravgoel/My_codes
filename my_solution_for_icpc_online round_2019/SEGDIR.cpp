#include<bits/stdc++.h>
using namespace std;
#include <vector>

int overlap(vector<pair<int, int> > v)
{
    int ans = 0;
    int coun = 0;
    vector<pair<int, char> > data;
   for (int i = 0; i < v.size(); i++) {
        data.push_back({ v[i].first, 'x' });
        data.push_back({ v[i].second, 'y' });
    }
    sort(data.begin(), data.end());
    for (int i = 0; i < data.size(); i++) {
        if (data[i].second == 'x')
            coun++;
        if (data[i].second == 'y')
            coun--;
        ans = max(ans, coun);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        int l[n],r[n],v1[n],v2[n];
        for(int j=0;j<n;j++)
        {
            cin >>l[j]>>r[j]>>v1[j];
            v2[j]=v1[j];
        }
        vector<vector<pair<int,int> > > v;
        sort(v1,v1+n);
        for(int j=0;j<n;j++)
        {
            vector<pair<int,int> > vect;
            for(int j1=j;j1<n;j1++)
            {
                if(v1[j]==v2[j1])
                {
                    int g=v2[j1];
                    v2[j1]=v2[j];
                    v2[j]=g;
                    vect.push_back(make_pair(l[j1],r[j1]));
                }
            }
            v.push_back(vect);
            vect.clear();
        }
        bool dd=true;;
        for(int j1=0;j1<v.size();j1++)
        {
            if(overlap(v[j1])>2)
            {
                dd=false;
            }

        }
        if(dd==true)
        {
          cout <<"YES\n";
        }
        else{cout <<"NO\n";}
    }
    return 0;
}
