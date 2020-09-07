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
    int h;
    int pos;
    node(){};
    node(int _h, int _pos)
    {
        h= _h;
        pos= _pos;
    }
};
node IT[4*N];
int ar[N];
node mergeNode(node left, node right)
{
    return (left.h >= right.h? left:right);
}
void build(int id, int L, int R)
{
    if(L==R)
    {
        IT[id] = node(ar[L], L);
        return;
    }
    int mid = (L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1,R);
    IT[id] = mergeNode(IT[id*2], IT[id*2+1]);
}
void update(int id, int L, int R, int u ,int val)
{
    if(R<u || L >u)return;
    if(R==L)
    {
        IT[id].h= val;
        return;
    }
    int mid=(L+R)/2;
    update(id*2, L, mid,u,val);
    update(id*2+1, mid+1, R ,u ,val);
    IT[id] = mergeNode(IT[id*2], IT[id*2+1]);
}
int get (int id, int L, int R,int r)
{
    if(IT[id].h<r)return 0;
    if(L==R)return L;
    int mid=(L+R)/2;
    if(IT[id*2].h>= r)return get(id*2, L, mid,r);
    return get(id*2+1, mid+1, R,r);
}
void printTree(int id, int L, int R)
{
    printf("id: %d, L: %d, R: %d, max: %d, pos: %d\n", id,L,R,IT[id].h, IT[id].pos);
    if(L==R)return;
    int mid=(L+R)/2;
    printTree(id*2, L, mid);
    printTree(id*2+1, mid+1,R);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>ar[i];
    build(1,1,n);
    //printTree(1,1,n);
    for(int i=0;i<m;i++)
    {
        int r;
        cin>>r;
        int posAns=get(1,1,n,r);
        cout<<posAns<<' ';
        update(1,1,n,posAns,ar[posAns]-r);
        ar[posAns]-=r;
     //   printTree(1,1,n);
    }
    return 0;
}
