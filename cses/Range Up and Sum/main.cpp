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
    ll setVal;
    bool setAllValid;
    node()
    {
        sum=0;
        setAllValid=0;
        setVal=0;
        lazy=0;
    };
    node(ll _sum ,ll _lazy,ll _setVal, ll _valid)
    {
        sum= _sum;
        lazy = _lazy;
        setVal= _setVal;
        setAllValid= _valid;
    }
    void Reset()
    {
        setAllValid = lazy = 0;
    }
};
node IT[4*N];
ll ar[N];
node mergeNode(node left, node right)
{
    return node(left.sum+right.sum,0,0,0);
}
void build(int id, int L, int R)
{
    if(L==R)
    {
        IT[id]= node(ar[L],0,0,0);
        return;
    }
    int mid= (L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1, R);
    IT[id] =  mergeNode(IT[id*2], IT[id*2+1]);
}
void compose(int par , int child)
{
    if(IT[par].setAllValid)
    {
        IT[child].setAllValid=1;
        IT[child].setVal = IT[par].setVal;
        IT[child].lazy = IT[par].lazy;
    }
    else IT[child].lazy += IT[par].lazy;
}
void pushDown(int id, int L , int R)
{
    if(IT[id].setAllValid)
        IT[id].sum = IT[id].setVal*(R-L+1);
    //if(IT[id].lazy==0)return;
    IT[id].sum += IT[id].lazy*(R-L+1);
    if(L!=R)
    {
        compose(id,id*2);
        compose(id,id*2+1);
    }
    IT[id].Reset();
}
void increaseVal(int id, int L, int R, int u, int v, ll val)
{

    if(R<u || L>v)return;
    if(u<=L && R<=v)
    {
        IT[id].lazy += val;
        //pushDown(id,L,R);
        return;
    }
    pushDown(id,L,R);
    int mid= (L+R)/2;
    increaseVal(id*2, L, mid, u,v,val);
    increaseVal(id*2+1, mid+1, R ,u,v,val);
    pushDown(id*2, L, mid);
    pushDown(id*2+1, mid+1, R);
    IT[id].sum = IT[id*2].sum + IT[id*2+1].sum;
}
void setVal(int id, int L, int R, int u, int v, ll val)
{
    //pushDown(id,L,R);
    if(R<u || L>v)return;
    if(u<=L && R<=v)
    {
        IT[id].setAllValid = 1;
        IT[id].setVal = val;
        IT[id].lazy = 0;
        return;
    }
    pushDown(id,L,R);
    int mid= (L+R)/2;
    setVal(id*2, L, mid, u,v,val);
    setVal(id*2+1, mid+1, R ,u,v,val);
    pushDown(id*2, L, mid);
    pushDown(id*2+1, mid+1, R);
    IT[id].sum = IT[id*2].sum + IT[id*2+1].sum;
}
node sumLazy(int id, int L, int R, int u,int v)
{
    if(R<u || L>v)return node(0,0,0,0);
    pushDown(id,L,R);
    if(u<= L && R<=v)return IT[id];
    int mid=(L+R)/2;
    node left= sumLazy(id*2, L, mid,u,v);
    node right = sumLazy(id*2+1, mid+1, R,u,v);
    return mergeNode(left,right);
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    for(int i=0;i<q;i++)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            int a,b;
            ll x;
            cin>>a>>b>>x;
            increaseVal(1,1,n,a,b,x);
        }
        if(type==2)
        {
            int a,b;
            ll x;
            cin>>a>>b>>x;
            setVal(1,1,n,a,b,x);
        }
        if(type==3)
        {
            int a,b;
            cin>>a>>b;
            cout<<sumLazy(1,1,n,a,b).sum<<'\n';
        }
    }
    return 0;
}
