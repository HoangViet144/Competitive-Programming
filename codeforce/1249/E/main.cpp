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
#define infi 1e8

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int a[n],b[n];
    FOR(i,0,n-1)cin>>a[i];
    FOR(i,0,n-1)cin>>b[i];
    int dp[n+1][2];
    FOR(i,0,n)
    {
        FOR(j,0,2)dp[i][j]=infi;
    }
    dp[0][0]=0;
    dp[0][1]=c;
    FOR(i,0,n)
    {
        dp[i+1][0]=min(dp[i+1][0],dp[i][0]+a[i]);
        dp[i+1][0]=min(dp[i+1][0],dp[i][1]+a[i]);
        dp[i+1][1]=min(dp[i+1][1],dp[i][1]+b[i]);
        dp[i+1][1]=min(dp[i+1][1],dp[i][0]+b[i]+c);
    }
    FOR(i,0,n)cout<<min(dp[i][0],dp[i][1])<<" ";
    return 0;
}
