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
struct iii
{
    ll cap;
    ll cur;
    iii(){};
    iii(ll a,ll b)
    {
        cap=a;
        cur=b;
    }
};
const ll N= 2e5+7;
const ll oo= 1e15;
ll w,n;
vector<int>dsk[N];
iii infor[N];
ll waterNeeded[N];

void dfs (int u,int par)
{
    for(int v: dsk[u])
    {
        if(v!=par)
        {
            waterNeeded[v]= infor[v].cap-infor[v].cur + max(0ll, waterNeeded[u] - infor[v].cap);
            dfs(v,u);
        }
    }
}
int main()
{
    cin>>n>>w;
    for(int i=1;i<=n;i++)
    {
        ll d,c,u;
        cin>>d>>c>>u;
        infor[i]=iii(c,u);
        //dsk[i].push_back(d);
        dsk[d].push_back(i);
    }
    waterNeeded[0]=w;
    dfs(0,-1);
    ll ans=oo;
    for(int i=0;i<=n;i++)
    {
        ans=min(ans,waterNeeded[i]);
    }
    cout<<ans;
    return 0;
}
