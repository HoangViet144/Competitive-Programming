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
#define N 1e5

using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    ll dp[n];
    ll ans=1;
    FOR(i,0,n)dp[i]=1;
    FOR(i,1,n)
    {
       if(ar[i-1]*2>=ar[i]) dp[i]=max(dp[i],dp[i-1]+1);
       ans=max(ans,dp[i]);
    }
    cout<<ans;
}
int main()
{
    solve();
    return 0;
}
