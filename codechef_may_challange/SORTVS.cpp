#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include <map>
#define ll long long int
using namespace std;


class graph
{
    int V;    // No. of vertices

    // Pointer to an array containing adjacency lists
    list<int> *adj;

    // A function used by DFS
    void DFSUtil(int v, bool visited[],vector<int> &vect);
public:
    graph(int V);   // Constructor
    ~graph();
    void addEdge(int v, int w);
    void connectedComponents(vector<int> &vect,int smarty);
};

// Method to print connected components in an
// undirected graph
void graph::connectedComponents(vector<int> &vect,int smarty)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int v = 0; v < V; v++)
        visited[v] = false;

    DFSUtil(smarty, visited,vect);
    delete[] visited;
}

void graph::DFSUtil(int v, bool visited[],vector<int> &vect)
{
    // Mark the current node as visited and print it
    visited[v] = true;
    vect.push_back(v);

    // Recur for all the vertices
    // adjacent to this vertex
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited,vect);
}

graph::graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

graph::~graph()
{
    delete[] adj;
}

// method to add an undirected edge
void graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
public:
    Graph(int V);  // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    bool isReachable(int s, int d);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// A BFS based function to check whether d is reachable from s.
bool Graph::isReachable(int s, int d)
{
    if (s == d)
      return true;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    list<int>::iterator i;

    while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (*i == d)
                return true;
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    return false;
}



void func(vector<int>bb,vector<int>ma,vector<int>mb,int n,int m,int s,vector<int>&ass,vector<int>mystyle)
{
    int i1=0;
            int hg=0;

            Graph g(n);
        graph gg(n);

        for(int j=0;j<m;j++)
        {
            int aa,bb;
            aa=ma[j];
            bb=mb[j];
            g.addEdge(aa-1,bb-1);
            g.addEdge(bb-1,aa-1);
            gg.addEdge(aa-1,bb-1);
            gg.addEdge(bb-1,aa-1);
        }
            int mmin=INT_MAX;
            bool d1=true;
            int ww=0;
            int ww1;
            int mbn=INT_MAX;
            int mcn=INT_MAX;
            int mdn=INT_MAX;
            int ww4=0;
            int wqqe;
            int wqe;
            bool d2=true;
            bool d3=true;
            for(int ee=0;ee<mystyle.size();ee++)
            {
                    int hh=mystyle[ee];
                    int w=0;
                    if(hh!=bb[hh]-1)
                    {

                    vector<int>a;
                    for(int gf=0;gf<n;gf++)
                    {
                        a.push_back(bb[gf]);
                    }

                    int r1=a[hh]-1;
                    a[hh]=a[r1];
                    a[r1]=r1+1;
                    ww4=hh;
                    int i=0;
                    while(i<n)
                    {
                        if(a[i]==i+1)
                        {
                            i++;

                        }
                        else
                        {

                        vector<int> aa;
                        gg.connectedComponents(aa,a[i]-1);
                        vector<int> bb;
                        gg.connectedComponents(bb,i);

                        bool f=false;
                        for(int j2=0;j2<aa.size();j2++)
                        {
                            for(int j1=0;j1<bb.size();j1++)
                            {
                                if(a[aa[j2]]==bb[j1]+1)
                                {
                                    a[aa[j2]]=a[i];
                                    a[i]=bb[j1]+1;

                                    f=true;
                                    break;
                                }
                            }
                            if(f==true)
                            {
                                break;
                            }
                        }
                        if(f==false)
                        {

                           i++;
                        }
                        int i2=0;
                         while(i2<n)
                        {
                            if(a[i2]-1!=i2)
                            {
                                int r1=a[i2]-1;
                                if(g.isReachable(i2,r1))
                                {
                                    a[i2]=a[r1];
                                    a[r1]=r1+1;

                                }
                                else
                                {
                                    i2++;
                                }
                            }
                            else
                            {
                                i2++;
                            }
                        }

                        }

                    }

                        for(int ee1=0;ee1<mystyle.size();ee1++)
                        {


                                int hh1 = mystyle[ee1];
                                int w1=0;

                                if(hh1!=a[hh1]-1)
                                {

                                vector<int>a1;
                                for(int gf=0;gf<n;gf++)
                                {
                                    a1.push_back(a[gf]);
                                }

                                d1=false;
                                int r1=a1[hh1]-1;
                                a1[hh1]=a1[r1];
                                a1[r1]=r1+1;
                                w1=hh1;
                                int i=0;
                                while(i<n)
                                {
                                    if(a1[i]==i+1)
                                    {
                                        i++;

                                    }
                                    else
                                    {

                                    vector<int> aa;
                                    gg.connectedComponents(aa,a1[i]-1);
                                    vector<int> bb;
                                    gg.connectedComponents(bb,i);

                                    bool f=false;
                                    for(int j2=0;j2<aa.size();j2++)
                                    {
                                        for(int j1=0;j1<bb.size();j1++)
                                        {
                                            if(a1[aa[j2]]==bb[j1]+1)
                                            {
                                                a1[aa[j2]]=a1[i];
                                                a1[i]=bb[j1]+1;

                                                hg+=1;
                                                f=true;
                                                break;
                                            }
                                        }
                                        if(f==true)
                                        {
                                            break;
                                        }
                                    }
                                    if(f==false)
                                    {

                                       i++;
                                    }

                                    int i2=0;
                                     while(i2<n)
                                    {
                                        if(a1[i2]-1!=i2)
                                        {
                                            int r1=a1[i2]-1;
                                            if(g.isReachable(i2,r1))
                                            {
                                                a1[i2]=a1[r1];
                                                a1[r1]=r1+1;
                                            }
                                            else
                                            {
                                                i2++;
                                            }
                                        }
                                        else
                                        {
                                            i2++;
                                        }

                                    }

                                    }

                                }
                                 int www=0;
                                            for(int je=0;je<n;je++)
                                            {
                                                if(je!=a1[je]-1)
                                                {
                                                    www+=1;
                                                }
                                            }
                                            mcn=min(mbn,www);
                                            if(www==mcn)
                                            {
                                                ww1=hh1;
                                                ww=hh;
                                            }


                                for(int eee1=0;eee1<mystyle.size();eee1++)
                                {


                                        int hhh1 = mystyle[eee1];
                                        int w1=0;

                                        if(hhh1!=a1[hhh1]-1)
                                        {


                                        vector<int>a2;
                                        for(int gf=0;gf<n;gf++)
                                        {
                                            a2.push_back(a1[gf]);
                                        }
                                        d2=false;
                                        int r1=a2[hhh1]-1;
                                        a2[hhh1]=a2[r1];
                                        a2[r1]=r1+1;
                                        w1=hhh1;
                                        int i=0;
                                        while(i<n)
                                        {
                                            if(a2[i]==i+1)
                                            {
                                                i++;
                                            }
                                            else
                                            {
                                            vector<int> aa;
                                            gg.connectedComponents(aa,a2[i]-1);
                                            vector<int> bb;
                                            gg.connectedComponents(bb,i);

                                            bool f=false;
                                            for(int j2=0;j2<aa.size();j2++)
                                            {
                                                for(int j1=0;j1<bb.size();j1++)
                                                {
                                                    if(a2[aa[j2]]==bb[j1]+1)
                                                    {
                                                        a2[aa[j2]]=a2[i];
                                                        a2[i]=bb[j1]+1;
                                                        hg+=1;
                                                        f=true;
                                                        break;
                                                    }
                                                }
                                                if(f==true)
                                                {
                                                    break;
                                                }
                                            }
                                            if(f==false)
                                            {

                                               i++;
                                            }
                                            int i2=0;
                                             while(i2<n)
                                            {
                                                if(a2[i2]-1!=i2)
                                                {
                                                    int r1=a2[i2]-1;
                                                    if(g.isReachable(i2,r1))
                                                    {
                                                        a2[i2]=a2[r1];
                                                        a2[r1]=r1+1;
                                                    }
                                                    else
                                                    {
                                                        i2++;
                                                    }
                                                }
                                                else
                                                {
                                                    i2++;

                                                }
                                            }

                                            }

                                        }
                                            int www=0;
                                            for(int je=0;je<n;je++)
                                            {
                                                if(je!=a2[je]-1)
                                                {
                                                    www+=1;
                                                }
                                            }
                                            mbn=min(mbn,www);
                                            if(www==mbn)
                                            {
                                                ww1=hh1;
                                                ww=hh;
                                                wqe=hhh1;
                                            }

                                            for(int eeee1=0;eeee1<mystyle.size();eeee1++)
                                            {


                                                    int hhhh1 = mystyle[eeee1];
                                                    int w1=0;

                                                    if(hhhh1!=a2[hhhh1]-1)
                                                    {

                                                    d3=false;
                                                    vector<int>a3;
                                                    for(int gf=0;gf<n;gf++)
                                                    {
                                                        a3.push_back(a2[gf]);
                                                    }
                                                    int r1=a3[hhhh1]-1;
                                                    a3[hhhh1]=a3[r1];
                                                    a3[r1]=r1+1;
                                                    w1=hhhh1;
                                                    int i=0;
                                                    while(i<n)
                                                    {
                                                        if(a3[i]==i+1)
                                                        {
                                                            i++;

                                                        }
                                                        else
                                                        {

                                                        vector<int> aa;
                                                        gg.connectedComponents(aa,a3[i]-1);
                                                        vector<int> bb;
                                                        gg.connectedComponents(bb,i);

                                                        bool f=false;
                                                        for(int j2=0;j2<aa.size();j2++)
                                                        {
                                                            for(int j1=0;j1<bb.size();j1++)
                                                            {
                                                                if(a3[aa[j2]]==bb[j1]+1)
                                                                {
                                                                    a3[aa[j2]]=a3[i];
                                                                    a3[i]=bb[j1]+1;
                                                                    hg+=1;
                                                                    f=true;
                                                                    break;
                                                                }
                                                            }
                                                            if(f==true)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        if(f==false)
                                                        {

                                                           i++;
                                                        }
                                                        int i2=0;
                                                         while(i2<n)
                                                        {
                                                            if(a3[i2]-1!=i2)
                                                            {
                                                                int r1=a2[i2]-1;
                                                                if(g.isReachable(i2,r1))
                                                                {
                                                                    a3[i2]=a3[r1];
                                                                    a3[r1]=r1+1;
                                                                }
                                                                else
                                                                {
                                                                    i2++;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                i2++;
                                                            }
                                                        }

                                                        }

                                                    }
                                                        int www=0;
                                                        for(int je=0;je<n;je++)
                                                        {
                                                            if(je!=a3[je]-1)
                                                            {
                                                                www+=1;
                                                            }
                                                        }
                                                        mdn=min(mdn,www);
                                                        if(www==mdn)
                                                        {
                                                            ww1=hh1;
                                                            ww=hh;
                                                            wqe=hhh1;
                                                            wqqe=hhhh1;
                                                        }
                                                    }

                                            }



                                        }

                                }


                                }

                        }

                    }

            }

        if(d3==false)
        {
            ass.push_back(ww);
            ass.push_back(ww1);
            ass.push_back(wqe);
            ass.push_back(wqqe);
        }
        else if(d2==false)
        {
             ass.push_back(ww);
            ass.push_back(ww1);
            ass.push_back(wqe);
        }
        else if(d1==false)
        {

            ass.push_back(ww);
            ass.push_back(ww1);
        }
        else
        {
            ass.push_back(ww4);
        }

}


int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin >> n>>m;

            vector<int> a;
        for(int j=0;j<n;j++)
        {
            int as;
            cin >>as;
            a.push_back(as);
        }

        Graph g(n);
        graph gg(n);
        vector<int> ma;
        vector<int> mb;

        for(int j=0;j<m;j++)
        {
            int aa,bb;
            cin >>aa>>bb;
            ma.push_back(aa);
            mb.push_back(bb);
            g.addEdge(aa-1,bb-1);
            g.addEdge(bb-1,aa-1);
            gg.addEdge(aa-1,bb-1);
            gg.addEdge(bb-1,aa-1);
        }
        int ff[n][n]={0};
        for(int j1=0;j1<=n;j1++)
        {
            for(int j2=j1+1;j2<=n;j2++)
            {
                if(g.isReachable(j1,j2))
                {
                    ff[j1][j2]=1;
                    ff[j2][j1]=1;
                }
            }
        }



            int i=0;
            int c=0;
             while(i<n)
            {
                if(a[i]-1!=i)
                {
                    int r1=a[i]-1;
                    if(g.isReachable(r1,i ))
                    {
                        a[i]=a[r1];
                        a[r1]=r1+1;
                        //cout << i<<" "<<r1<<" 1st\n";
                    }
                    else
                    {
                        i++;
                        //cout << "2st\n";
                    }
                }
                else
                {
                    i++;

                      //  cout << "3st\n";
                }
            }
            i=0;
            int r=0;
            while(i<n)
            {
                if(a[i]==i+1)
                {
                    i++;

                    //    cout << "4st\n";
                }
                else
                {

                  //      cout << "5st\n";
                vector<int> aa;
                gg.connectedComponents(aa,a[i]-1);
                //cout <<"\n";
                vector<int> bb;
                //cout <<"\n";
                gg.connectedComponents(bb,i);

                bool f=false;
                for(int j=0;j<aa.size();j++)
                {
                    //cout << aa[j]<<" ";
                    for(int j1=0;j1<bb.size();j1++)
                    {
                    //    cout << bb[j1]<<" ";
                        if(a[aa[j]]==bb[j1]+1)
                        {
                            a[aa[j]]=a[i];
                            a[i]=bb[j1]+1;
                            r+=1;
                            f=true;
                            break;
                        }
                    }
                  //  cout <<"\n";
                    if(f==true)
                    {
                        break;
                    }
                }
                //cout <<"end\n";
                if(f==false)
                {

                  //      cout << "6st\n";
                   i++;
                }
                //cout << "\n\n\n";
                int i1=0;
                for(int j4=0;j4<n;j4++)
                {
                  //  cout << a[j4]<<" ";
                }

                //cout <<"gfn\n";
                 while(i1<n)
                {
                    if(a[i1]-1!=i1)
                    {
                        int r1=a[i1]-1;
                        if(g.isReachable(i1,r1))
                        {
                            //cout << i1<<" "<<r1<<"\n";
                            a[i1]=a[r1];
                            a[r1]=r1+1;
                            //cout << "1st\n";
                        }
                        else
                        {
                            i1++;
                          //  cout << "2st\n";
                        }
                    }
                    else
                    {
                        i1++;

                        //    cout << "3st\n";
                    }

                    for(int j4=0;j4<n;j4++)
                    {
                      //  cout << a[j4]<<" ";
                    }

                    //cout <<"gfn\n";
                    //cout <<"\n";
                }

                }

            }

            int i1=0;
             while(i1<n)
            {
                    if(a[i1]-1!=i1)
                    {

                    int ygf=0;
                    int ab[n];
                    int ac[n];
                    int mic=INT_MIN;
                    int mini=INT_MAX;
                    for(int jj=0;jj<n;jj++)
                    {
                        int f4=0;
                        int fg=0;
                        int rq;
                        int rd= a[jj]-1;
                       // cout << rd<<" ";
                        while(1)
                        {
                            f4++;

                             vector<int> aa;
                            gg.connectedComponents(aa,rd);
                            //cout <<"\n";
                            vector<int> bb;
                            //cout <<"\n";
                            gg.connectedComponents(bb,jj);

                            bool f=false;
                            rq=0;
                            for(int j=0;j<aa.size();j++)
                            {
                                //cout << aa[j]<<" ";
                                for(int j1=0;j1<bb.size();j1++)
                                {
                                //    cout << bb[j1]<<" ";
                                    if(f4>=mini||rd==jj||a[aa[j]]==bb[j1]+1)
                                    {

                                        f=true;
                                        rq+=1;
                                    }

                                    if(f4>=mini||rd==jj||a[bb[j1]]==aa[j]+1)
                                    {
                                        if(f4==1&&(j1==0&&j==0))
                                        {

                                        }
                                        else
                                        {
                                        rq+=1;
                                        f=true;
                                        }
                                    }
                                }
                              //  cout <<"\n";

                            }

                            if(f==true)
                            {
                                break;
                            }

                            rd=a[rd]-1;

                        }
                        //cout <<"\n";
                        ab[jj]=f4;
                        ac[jj]=fg;
                    }
                    for(int jj=0;jj<n;jj++)
                    {
                        if(mini>=ab[jj]&&a[jj]-1!=jj)
                        {
                            mini = ab[jj];
                            ygf=jj;
                        }
                    }
                     for(int jj=0;jj<n;jj++)
                    {
                        if((mini==ab[jj]&&a[jj]-1!=jj)&&ac[jj]>mic)
                        {
                            mini = ab[jj];
                            ygf=jj;
                            mic=ac[jj];
                        }
                    }
                    int qs=0;
                    vector<int>mystyle;
                    for(int jj=0;jj<n;jj++)
                    {
                        if(mini==ab[jj]&&a[jj]-1!=jj)
                        {
                            qs+=1;
                            mystyle.push_back(jj);
                            //cout << jj <<" "<<a[jj]-1<<"\n";
                        }
                    }
                    int queen=0;
                    for(int jj=0;jj<n;jj++)
                    {
                       //cout << a[jj]-1<<" ";
                        if(a[jj]-1!=jj)
                        {
                            queen+=1;
                        }
                    }
                    //cout << "\n";

                    if(qs>1&&queen>1)
                    {

                        vector<int>ant;
                        func(a,ma,mb,n,m,0,ant,mystyle);
                       // cout <<ant.size()<<"\n";

                        for(int hjt=0;hjt<ant.size();hjt++)
                        {

                            for(int jj=0;jj<n;jj++)
                            {
                              // cout << a[jj]-1<<" ";
                            }
                            //cout << "\n";
                            ygf=ant[hjt];
                            int r1=a[ygf]-1;
                            //cout << ygf<<" "<<r1<<"\n";
                            a[ygf]=a[r1];
                            a[r1]=r1+1;
                            r++;
                            int i=0;
                            while(i<n)
                            {
                                if(a[i]==i+1)
                                {
                                    i++;

                                    //    cout << "4st\n";
                                }
                                else
                                {

                                  //      cout << "5st\n";
                                vector<int> aa;
                                gg.connectedComponents(aa,a[i]-1);
                                //cout <<"\n";
                                vector<int> bb;
                                //cout <<"\n";
                                gg.connectedComponents(bb,i);

                                bool f=false;
                                for(int j=0;j<aa.size();j++)
                                {
                                    //cout << aa[j]<<" ";
                                    for(int j1=0;j1<bb.size();j1++)
                                    {
                                    //    cout << bb[j1]<<" ";
                                        if(a[aa[j]]==bb[j1]+1)
                                        {
                                            a[aa[j]]=a[i];
                                            a[i]=bb[j1]+1;
                                            r+=1;
                                            f=true;
                                            break;
                                        }
                                    }
                                  //  cout <<"\n";
                                    if(f==true)
                                    {
                                        break;
                                    }
                                }
                                //cout <<"end\n";
                                if(f==false)
                                {

                                  //      cout << "6st\n";
                                   i++;
                                }
                                //cout << "\n\n\n";
                                for(int j4=0;j4<n;j4++)
                                {
                                  //  cout << a[j4]<<" ";
                                }

                                //cout <<"gfn\n";
                                int i2=0;
                                 while(i2<n)
                                {
                                    if(a[i2]-1!=i2)
                                    {
                                        int r1=a[i2]-1;
                                        if(g.isReachable(i2,r1))
                                        {
                                            //cout << i1<<" "<<r1<<"\n";
                                            a[i2]=a[r1];
                                            a[r1]=r1+1;
                                            //cout << "1st\n";
                                        }
                                        else
                                        {
                                            i2++;
                                          //  cout << "2st\n";
                                        }
                                    }
                                    else
                                    {
                                        i2++;

                                        //    cout << "3st\n";
                                    }

                                    for(int j4=0;j4<n;j4++)
                                    {
                                      //  cout << a[j4]<<" ";
                                    }

                                    //cout <<"gfn\n";
                                    //cout <<"\n";
                                }

                                }

                            }
                    }
                    }
                    else
                    {
                    //cout  <<"\n";
                    //cout << ygf<<"\n";

                    int r1=a[ygf]-1;
                    //cout << i1<<" "<<r1<<"\n";
                    a[ygf]=a[r1];
                    a[r1]=r1+1;
                    r++;
                    int i=0;
                    while(i<n)
                    {
                        if(a[i]==i+1)
                        {
                            i++;

                            //    cout << "4st\n";
                        }
                        else
                        {

                          //      cout << "5st\n";
                        vector<int> aa;
                        gg.connectedComponents(aa,a[i]-1);
                        //cout <<"\n";
                        vector<int> bb;
                        //cout <<"\n";
                        gg.connectedComponents(bb,i);

                        bool f=false;
                        for(int j=0;j<aa.size();j++)
                        {
                            //cout << aa[j]<<" ";
                            for(int j1=0;j1<bb.size();j1++)
                            {
                            //    cout << bb[j1]<<" ";
                                if(a[aa[j]]==bb[j1]+1)
                                {
                                    a[aa[j]]=a[i];
                                    a[i]=bb[j1]+1;
                                    r+=1;
                                    f=true;
                                    break;
                                }
                            }
                          //  cout <<"\n";
                            if(f==true)
                            {
                                break;
                            }
                        }
                        //cout <<"end\n";
                        if(f==false)
                        {

                          //      cout << "6st\n";
                           i++;
                        }
                        //cout << "\n\n\n";
                        for(int j4=0;j4<n;j4++)
                        {
                          //  cout << a[j4]<<" ";
                        }

                        //cout <<"gfn\n";
                        int i2=0;
                         while(i2<n)
                        {
                            if(a[i2]-1!=i2)
                            {
                                int r1=a[i2]-1;
                                if(g.isReachable(i2,r1))
                                {
                                    //cout << i1<<" "<<r1<<"\n";
                                    a[i2]=a[r1];
                                    a[r1]=r1+1;
                                    //cout << "1st\n";
                                }
                                else
                                {
                                    i2++;
                                  //  cout << "2st\n";
                                }
                            }
                            else
                            {
                                i2++;

                                //    cout << "3st\n";
                            }

                            for(int j4=0;j4<n;j4++)
                            {
                              //  cout << a[j4]<<" ";
                            }

                            //cout <<"gfn\n";
                            //cout <<"\n";
                        }

                        }

                    }
                    //cout << "1st\n";
                }
                    }
                else
                {
                    i1++;

                   //     cout << "3st\n";
                }


               // cout <<"gfn\n";
            }


            cout << r<<"\n";
    }
    return 0;
}

/*
1
11 3
11 6 9 10 5 8 4 7 3 2 1

11 8
8 4
4 3
*/
