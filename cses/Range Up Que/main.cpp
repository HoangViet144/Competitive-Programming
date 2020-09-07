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
const int N=2e5+7;
struct node{
    ll val;
    ll lazy;
    node(ll a, ll c)
    {
        val = a;
        lazy = c;
    }
    node()
    {
        val=0;
        lazy=0;
    };
};
node IT[4*N];
ll ar[N];
void build(ll id,ll L, ll R)
{
    if(L == R)
    {
        IT[id] = node(ar[L],0);
        return;
    }
    ll mid = (L+R) /2;
    build(id*2 , L, mid);
    build(id*2+1 , mid+1 , R);
    IT[id].val = IT[id*2].val + IT[id*2+1].val;
}
void pushDown(ll id, ll L, ll R)
{
    if(IT[id].lazy == 0) return;
    IT[id].val += IT[id].lazy;
    if(L!=R)
    {
        IT[id*2].lazy += IT[id].lazy;
        IT[id*2+1].lazy += IT[id].lazy;
    }
    IT[id].lazy=0;
}
void updateLazy(ll val, ll id, ll L, ll R, ll u , ll v )
{
    pushDown(id,L,R);
    if( L> v || R <u) return;
    if (u <= L && R <=v)
    {
        IT[id].lazy += val;
        pushDown(id,L,R);
        return;
    }
    ll mid = (L+R) /2;
    updateLazy(val, id*2 , L, mid, u, v);
    updateLazy(val, id*2+1, mid+1 ,R, u, v);
    IT[id].val = IT[id*2].val + IT[id*2+1].val;
}
node getLazy(ll id, ll L, ll R, ll u, ll v)
{
    pushDown(id,L,R);
    if(R <u || L>v)
        return node(0,0);
    if(u<=L && R <=v)
        return IT[id];
    ll mid = (R+L)/2;
    node left = getLazy(id<<1 , L, mid, u,v);
    node right = getLazy(id<<1|1 , mid+1, R, u,v);
    node out ;
    out.val= left.val + right.val;
    return out;
}
void printTree(int id, int L, int R)
{
    printf("id %d, L %d, R %d, sum: %d, lazy: %d\n",id,L,R, IT[id].val);
    if(L==R)return;
    int mid=(L+R)/2;

    printTree(id*2, L, mid);
    printTree(id*2+1, mid+1, R);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    //printTree(1,1,n);
    for(int i=0;i<q;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int a,b,u;
            cin>>a>>b>>u;
            updateLazy(u,1,1,n,a,n);
            //printTree(1,1,n);
            //cout<<"-------"<<endl;
            updateLazy(-u,1,1,n,b+1,n);
            //printTree(1,1,n);
        }
        else
        {
            int k;
            cin>>k;
            cout<<getLazy(1,1,n,k,k).val<<'\n';
        }
    }
    return 0;
}
