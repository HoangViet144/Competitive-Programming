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
int IT[4*N];
const int oo= 1e9;
int ar[N];
void build(int id, int L, int R)
{
    if(L==R)
    {
        IT[id] = ar[L];
        return;
    }
    int mid =(L+R)/2;
    build(id*2, L, mid);
    build(id*2+1 , mid+1,R);
    IT[id] = min(IT[id*2], IT[id*2+1]);
}
int get(int id, int L, int R, int u , int v)
{
    if(R<u || L >v) return oo;
    if( u<= L && R <=v) return IT[id];
    int mid = (L+R)/2;
    int left= get(id*2, L, mid, u,v);
    int right = get(id*2+1, mid+1, R ,u,v);
    return min(left,right);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<get(1,1,n,a,b)<<'\n';
    }
    return 0;
}
