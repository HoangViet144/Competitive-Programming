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
#define N 1000005

using namespace std;
ll preSumAll[N],preSumT[N];
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+1],t[n+1];
    FOR(i,1,n+1)cin>>a[i];
    FOR(i,1,n+1)cin>>t[i];
    FOR(i,1,n+1)preSumAll[i]=preSumAll[i-1]+a[i];
    FOR(i,1,n+1)preSumT[i]=preSumT[i-1]+(t[i]?a[i]:0);
    ll ans=0;
    FOR(i,1,n+1)
    {
        if(t[i]==0)
        {
            ll tmp=preSumT[i-1]+((i+k)<=n?preSumAll[i+k-1]:preSumAll[n])-preSumAll[i-1]+((i+k)<=n?preSumT[n]-preSumT[i+k-1]:0);
            ans=max(ans,tmp);
        }
        else ans=max(ans,preSumT[i]);
    }
    cout<<ans;
    return 0;
}
