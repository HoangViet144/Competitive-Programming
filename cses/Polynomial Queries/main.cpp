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
struct node
{
    ll sum;
    ll lazy;
    ll lazy1;
    node()
    {
        lazy=0;
        lazy1=0;
    };
    node(ll a, ll b, ll c)
    {
        sum=a;
        lazy=b;
        lazy1=c;
    }
};
node A[4*N];
ll ar[N];
void build(int id, int L, int R)
{
    if(L==R)
    {
        A[id]= node(ar[L],0,0);
        return;
    }
    int mid =(L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1, R);
    A[id].sum = A[id*2].sum + A[id*2+1].sum;
}
void pushDown(int id, int L, int R)
{
    A[id].sum += A[id].lazy1*(R-L)*(R-L+1)/2 + A[id].lazy*(R-L+1);
    if(L!=R)
    {
        A[id*2].lazy += A[id].lazy;
        A[id*2].lazy1 += A[id].lazy1;

        int mid= (L+R)/2;
        ll dLazy = A[id].lazy + (mid-L+1)*A[id].lazy1;
        A[id*2+1].lazy += dLazy;
        A[id*2+1].lazy1 += A[id].lazy1;
    }
    A[id].lazy1=0;
    A[id].lazy =0;
}
void update(int id,int L, int R, int u,int v)
{
    pushDown(id,L,R);
    if( R< u || L>v)return;
    if(u<=L && R<=v)
    {
        ll dLazy = L-u+1;
        A[id].lazy += dLazy;
        A[id].lazy1 += 1;
        pushDown(id, L, R);
        return;
    }
    int mid=(L+R)/2;
    update(id*2, L, mid, u,v);
    update(id*2+1, mid+1, R, u,v);
    A[id].sum = A[id*2].sum + A[id*2+1].sum;
}
ll get(int id, int L,int R,int u, int v)
{
    pushDown(id, L, R);
    if(R<u || L>v)return 0;
    if(u<= L && R<=v)return A[id].sum;
    int mid=(L+R)/2;
    ll left= get(id*2, L, mid, u,v);
    ll right= get(id*2+1, mid+1,R ,u,v);
    return left+right;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    for(int i=0;i<q;i++)
    {
        int type,a,b;
        cin>>type>>a>>b;
        if(type==1)update(1,1,n,a,b);
        else cout<<get(1,1,n,a,b)<<'\n';
    }
    return 0;
}
