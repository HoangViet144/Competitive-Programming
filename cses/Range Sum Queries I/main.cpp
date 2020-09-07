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
#define N 200005

using namespace std;
ll IT[4*N];
ll ar[N];
void build(ll id, ll L, ll R)
{
    if(L==R)
    {
        IT[id]= ar[L];
        return;
    }
    ll mid = (L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1, R);
    IT[id] =  IT[id*2] + IT[id*2+1];
}
ll get(ll id, ll L, ll R, ll u ,ll v)
{
    if(R<u || L>v)return 0;
    if(u <= L && R <=v) return IT[id];
    ll mid=(L+R)/2;
    return get(id*2, L ,mid, u,v) + get(id*2+1, mid+1, R, u, v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    FOR(i,1,n+1)cin>>ar[i];
    build(1,1,n);
    FOR(i,0,q)
    {
        ll a,b;
        cin>>a>>b;
        cout<<get(1,1,n,a,b)<<'\n';
    }
    return 0;
}
