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
struct node
{
    int id;
    int w;
    int b;
};
int n;
node ar[200005];
vector<int>dsk[200005];
bool visit[2000005];
int par[2000005];
int res[200005];
void dfs(int u,int &black,int &white)
{
    for(int v:dsk[u])
    {
        if(!visit[v])
        {
            par[v]=u;
            visit[v]=true;
            dfs(v,black,white);
        }
        res[u]=max(res[u],ar[v].w-ar[v].b);
    }
    /*ar[u].b+=black;
    ar[u].w+=white;
    black=ar[u].b;
    white=ar[u].w;*/
    for(int v:dsk[u])
    {
        if(v!=par[u])
        {
            ar[u].b+=ar[v].b;
            ar[u].w+=ar[v].w;
        }
    }
}

int main()
{
    cin>>n;
    for(int i= 1;i<=n;i++)
    {
        int tmp;
        cin>>tmp;
        ar[i].b=(tmp==1);
        ar[i].w=(tmp==0);
        ar[i].id=i;
    }
    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        dsk[u].push_back(v);
        dsk[v].push_back(u);
    }
    visit[1]=1;
    int a=0,b=0;
    for(int i=1;i<=n;i++)res[i]=INT_MIN;
    dfs(1,a,b);
   /* for(int i=1;i<=n;i++)
    {
        res[i]=ar[i].b-ar[i].w;
        int u=i;
        while(par[u]!=0)
        {
            res[i]=max(res[i],ar[u].b-ar[u].w);
            u=par[u];
        }
    }*/
    for(int i=1;i<=n;i++)cout<<res[i]<<" ";
    return 0;
}
