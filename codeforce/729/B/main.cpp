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
int ar[1005][1005];
int dp[1005][1005];
int dp1[1005][1005];
int main()
{
    int n,m;
    cin>>n>>m;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)cin>>ar[i][j];
    }
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            dp[i][j]=dp[i-1][j]+ar[i][j];
            dp1[i][j]=dp1[i][j-1]+ar[i][j];
        }
    }
    ll ans=0;
    FOR(i,1,n+1)
    {
        FOR(j,1,m+1)
        {
            if(ar[i][j]==0)
            {
                if(dp[i][j]>0)ans++;
                if(dp1[i][j]>0)ans++;
                if((dp[n][j]-dp[i][j])>0)ans++;
                if((dp1[i][m]-dp1[i][j])>0)ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

