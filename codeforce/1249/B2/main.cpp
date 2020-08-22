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
#define N 200001

using namespace std;

int  parent[N], visit[N];
vector<int> arr[N];
void dfs(int u)
{
    for (int i(0); i<arr[u].size(); i++)
    {
        int v = arr[u][i];
        if (v!=parent[u] && !visit[v])
        {
            parent[v] = u;
            visit[v] = visit[u] + 1;
            dfs(v);
        }

    }
    visit[parent[u]]=visit[u];
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        FOR(i,1,n+1)
        {
            int x;
            cin>>x;
            arr[i].push_back(x);
            arr[x].push_back(i);
        }
        FOR(i,1,n+1)
        {
            if(!visit[i])
            {
                visit[i]=1;
                dfs(i);
            }

        }
        FOR(i,1,n+1)cout<<visit[i]<<" ";
        cout<<endl;
        FOR(i,0,N)
        {
            visit[i]=0;
            parent[i]=0;
            arr[i].resize(0);
        }
    }
    return 0;
}
