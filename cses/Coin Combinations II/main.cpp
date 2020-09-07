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
    ll n,x;
    cin>>n>>x;
    vector<ll> ar(n+1);
    FOR(i,1,n+1)cin>>ar[i];

    vector<vector<ll>>  dp(2, vector<ll>(x+1,0));
    dp[0][0] =1;
    FOR(i,1,n+1)
    {
        FOR(j,0,x+1)
        {
            dp[i%2][j] = dp[(i-1)%2][j];
            if(ar[i]<=j)
                dp[i%2][j] = (dp[i%2][j] + dp[i%2][j-ar[i]] )%(ll)(1e9+7);

        }
    }
    cout<<dp[n%2][x];
    return 0;
}
