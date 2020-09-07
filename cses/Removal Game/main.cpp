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
    int n;
    cin>>n;
	ll sum=0;
    vector<ll>ar(n);
    FOR(i,0,n)
	{
		cin>>ar[i];
		sum+=ar[i];
	}
    vector<vector<ll>> dp(n+1, vector<ll>(n+1,0));
    for(int L=n-1;L>=0;L--)
    {
        for(int R=L;R<n;R++)
        {
            if(L==R)
                dp[L][R]= ar[L];
            else
                dp[L][R] = max(ar[L] - dp[L+1][R], ar[R]-dp[L][R-1]);
        }
    }
    cout<<(sum+dp[0][n-1])/2;
    return 0;
}
