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
#define N 1e5

using namespace std;
vector<int> dsk[2005];
int visit[2005];
void dfs(int u)
{
    for (int i(0); i<dsk[u].size(); i++)
    {
        int v = dsk[u][i];
        if ( !visit[v])
        {
            visit[v] = visit[u] + 1;
            dfs(v);
        }
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int>root;
    FOR(i,1,n+1)
    {
        int x;
        cin>>x;
        if(x!=-1)
        {
            dsk[x].push_back(i);
        }
        else root.push_back(i);
    }
    int ans=0;
    FOR(i,0,root.size())
    {
        int u=root[i];
        visit[u]=1;
        dfs(u);
    }
    FOR(i,1,n+1)ans=max(ans,visit[i]);
    cout<<ans;
    return 0;
}
