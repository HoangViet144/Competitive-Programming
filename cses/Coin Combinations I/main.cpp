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

    vector<ll>  dp(x+1,0);
    dp[0] =1;
    FOR(j,1,x+1)

    {
        FOR(i,1,n+1)
        {
            if(ar[i]<=j) dp[j] = (dp[j] + dp[j-ar[i]])%(ll)(1e9+7);
        }
    }
    cout<<dp[x];
    return 0;
}
