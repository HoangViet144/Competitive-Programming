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
bool sumEqual(vector<ll>ar , ll sum, ll n)
{
    vector<ll>dp (sum+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(ll j = sum; j>= ar[i];j--)
            if(dp[j- ar[i]] ==1) dp[j]=1;
    }
    if(dp[sum])return true;
    return false;
}
int main()
{
    ll n;
    cin>>n;
    ll total=0;
    vector<ll> ar(n);
    FOR(i,0,n)
	{
        cin>>ar[i];
		total+=ar[i];
	}
	ll ans = 1e9+7;
	for(int i=0;i< 1<<n ;i++)
	{
		ll tmp=0;
		for(int j=0;j <n;j++)
		{
			if(i & 1<<j) tmp+=ar[j];
		}
		ans= min(ans, abs(total - tmp*2));
	}
	cout<<ans;
    return 0;
}
