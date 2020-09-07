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
const ll oo = 1e18;
struct node
{
    ll sum;
    ll prefix;
    ll suffix;
    ll best;
    node (){};
    node (ll a, ll b,ll c,ll d)
    {
        sum=a;
        prefix=b;
        suffix=c;
        best=d;
    }
};
node IT[4*N];
ll ar[N];
node mergeNode(node left, node right)
{
    node out;
    out.sum =left.sum + right.sum;
    out.prefix = max (left.prefix, left.sum + right.prefix);
    out.suffix = max (right.suffix, left.suffix + right.sum);
    out.best = max(max (left.best, right.best), left.suffix+right.prefix);
    return out;
}
void build(int id, int L, int R)
{
    if(R==L)
    {
        IT[id].sum= IT[id].prefix = IT[id].suffix=IT[id].best= ar[L];
        return;
    }
    int mid = (L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1, R);
    IT[id] = mergeNode(IT[id*2], IT[id*2+1]);
}
void update(int id, int L, int R, int u , ll val)
{
    if(R<u || L >u)return;
    if(R==L)
    {
        IT[id].sum= IT[id].prefix = IT[id].suffix=IT[id].best= val;
        return;
    }
    int mid = (L+R)/2;
    update(id*2, L, mid,u,val);
    update(id*2+1, mid+1, R,u,val );
    IT[id] = mergeNode(IT[id*2], IT[id*2+1]);
}
node get(int id, int L, int R, int u, int v)
{
    if(R<u || L>v) return {0,-oo,-oo,-oo};
    if(u<= L && R<=v)return IT[id];
    int mid=(L+R)/2;
    node left= get(id*2, L, mid ,u ,v);
    node right = get(id*2+1, mid+1, R ,u ,v);
    return mergeNode(left,right);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    for(int i=0;i<m;i++)
    {
        int k;
        ll x;
        cin>>k>>x;
        update(1,1,n,k,x);
        node ans= get(1,1,n,1,n);
        cout<<(ans.best<0?0 : ans.best)<<'\n';
    }
    return 0;
}
