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

using namespace std;
int n,t;
//int a[n];
vector<vector<int> > DSK(500000);
int visit[500000];
void dfs(int u)
{
    visit[u]=1;
    FOR(i,0,DSK[u].size())
    {
        int v=DSK[u][i];
        if(!visit[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    cin>>n>>t;
    int a[n];
    FOR(i,0,n)visit[i]=0;
    FOR(i,0,n-1)cin>>a[i];
    FOR(i,0,n-1)DSK[i].push_back(a[i]+i);
    visit[0]=1;
    dfs(0);
    if(visit[t-1])cout<<"YES";
    else cout<<"NO";
    return 0;
}
