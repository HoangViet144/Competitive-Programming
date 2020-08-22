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
const int N=1e6;

using namespace std;
string s;
struct Node
{
    int optimal;
    int open;
    int close;
    Node(){}
    Node(int opt, int o, int c)
    {
        optimal = opt;
        open = o;
        close = c;
    }
};
Node st[N * 4];
Node operator + (const Node& left, const Node& right)
{
    Node res;
    int tmp = min(left.open, right.close);
    res.optimal = left.optimal + right.optimal + tmp;
    res.open = left.open + right.open - tmp;
    res.close = left.close + right.close - tmp;
    return res;
}
void build(int id,int l,int r)
{
    if(l==r)
    {
        if(s[l]=='(')st[id]=Node(0,1,0);
        else st[id]=Node(0,0,1);
        return;
    }
    int mid=(l+r)/2;
    build(id*2, l,mid );
    build(id*2+1,mid+1,r);
    st[id]=st[id*2]+st[id*2+1];
}
Node query(int id, int l, int r, int u,int v)
{
    if(v<l || r<u)return Node(0,0,0);
    if(u <= l && r <= v)return st[id];
    int mid=(l+r)/2;
    return query(id * 2, l, mid, u, v) + query(id * 2 + 1, mid+1, r, u, v);
}
int main()
{
    cin>>s;
    int n=s.length();
    s=" "+s;
    build(1,1,n);
    int q;
    cin>>q;
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        Node ans=query(1,1,n,u,v);
        cout<<ans.optimal*2<<endl;
    }
    return 0;
}
