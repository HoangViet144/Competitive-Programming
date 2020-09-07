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
    vector<ll> dp(n+1,1e9);
    dp[n]=0;
    for(ll i=n;i>=0;i--)
    {
        ll j=i;
        while(j)
        {
            int digit = j%10;
            j/=10;
            dp[i - digit]= min(dp[i-digit], dp[i]+1);
        }
    }
    cout<<dp[0];
    return 0;
}
