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

int main()
{
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(ll i=1;i<=n;i++)
    {
        for(ll j= 1; j<=6;j++)
        {
            if( (i-j)>=0)
                dp[i] = (dp[i]+dp[i-j])%(ll)(1e9+7);
            else break;
        }
    }
    cout<<dp[n];
    return 0;
}
