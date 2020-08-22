#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 1000100

using namespace std;
vector<int>dsk[N];
int visit[N];
int n,m;
int main()
{
    cin>>n>>m;
    FOR(i,0,m)
    {
        int sizee;cin>>sizee;
        FOR(j,0,sizee)
        {
            int x;cin>>x;--x;
            dsk[x].push_back(i+n);
            dsk[i+n].push_back(x);
        }
    }
    FOR(i,0,n)
    {
        if(!visit[i])
        {
            vector<int>connect;
            visit[i] = 1;
            queue<int>Q;
            Q.push(i);
            while (!Q.empty())
            {
                int u = Q.front();
                if(u<n)connect.push_back(u);
                Q.pop();
                for (int j(0); j<dsk[u].size(); j++)
                {
                    int v = dsk[u][j];
                    if (!visit[v])
                    {
                        visit[v] = visit[u] + 1;
                        Q.push(v);
                    }
                }
            }
            FOR(j,0,connect.size())visit[connect[j]]=connect.size();
        }
    }
    FOR(i,0,n)cout<<visit[i]<<" ";

    return 0;
}
