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
struct node
{
    ll l,w,h;
};
const int N= 1e8+5;
node frog[100000+5];
bool cmp(node a, node b)
{
    if(a.w==b.w)return a.l> b.l;
    return a.w < b.w;
}
ll n,d;
ll H[N],H1[N];
ll ans=0;
int main()
{
    freopen("input","r",stdin);
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>frog[i].l>>frog[i].w>>frog[i].h;
        H[0] += frog[i].h;
        H[frog[i].w] -= frog[i].h;
        H1[frog[i].w] += frog[i].h;
    }
    for(int i=1;i<N;i++) H[i]+=H[i-1];
    sort(frog,frog+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(frog[i].l + H[frog[i].w] + H1[frog[i].w] - frog[i].h > d)
        {
            ans++;
            H1[frog[i].w] -=frog[i].h;
        }
    }
    cout<<ans;
    return 0;
}
