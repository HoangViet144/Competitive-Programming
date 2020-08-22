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
ll n,t;
ll ar[N];
ll block;
struct query
{
    ll L,R,id;
}Q[N];
bool cmp(const query &A, const query &B)
{
    if(A.L/block!=B.L/block)return (A.L/block)<(B.L/block);
    return A.R<B.R;
}
ll cnt[1000001];
ll ansCur;
void add(ll x)
{
    ansCur-=cnt[x]*cnt[x]*x;
    cnt[x]++;
    ansCur+=cnt[x]*cnt[x]*x;
}
void remove(ll x)
{
    ansCur-=cnt[x]*cnt[x]*x;
    cnt[x]--;
    ansCur+=cnt[x]*cnt[x]*x;
}
ll ans[N];
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>t;
	FOR(i,0,n)cin>>ar[i];
	FOR(i,0,t)
	{
	    cin>>Q[i].L>>Q[i].R;
	    Q[i].id=i;
	}
	block=sqrt(n);
	sort(Q,Q+t,cmp);
	ll leftCur=0,rightCur=-1;
	for(ll i=0;i<t;i++)
    {
        ll L=Q[i].L-1;
        ll R=Q[i].R-1;
        while(leftCur<L)
        {
            ll x=ar[leftCur];
            ansCur-=cnt[x]*cnt[x]*x;
            cnt[x]--;
            ansCur+=cnt[x]*cnt[x]*x;
            //remove(ar[leftCur]);
            leftCur++;
        }
        while(leftCur>L)
        {
            leftCur--;
            ll x=ar[leftCur];
            ansCur-=cnt[x]*cnt[x]*x;
            cnt[x]++;
            ansCur+=cnt[x]*cnt[x]*x;
            //add(ar[leftCur]);
        }
        while(rightCur<R)
        {
            rightCur++;
            ll x=ar[rightCur];
            ansCur-=cnt[x]*cnt[x]*x;
            cnt[x]++;
            ansCur+=cnt[x]*cnt[x]*x;
            //add(ar[rightCur]);
        }
        while(rightCur>R)
        {
            ll x=ar[rightCur];
            ansCur-=cnt[x]*cnt[x]*x;
            cnt[x]--;
            ansCur+=cnt[x]*cnt[x]*x;
            //remove(ar[rightCur]);
            rightCur--;
        }
        ans[Q[i].id]=ansCur;
    }
    FOR(i,0,t)cout<<ans[i]<<endl;
    return 0;
}
