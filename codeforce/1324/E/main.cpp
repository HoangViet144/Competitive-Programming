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
int dp[3001][3001];
int a[3001];
bool check(int i , int l, int r)
{
    return l<=i && i<=r;
}
int main()
{
    int n,h,r,l;
    cin>>n>>h>>l>>r;
    FOR(i,1,n+1)cin>>a[i];
    //vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
	//dp[0][0] = 0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];
        for(int j=0;j<=i;j++)
        {
            dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+check((sum-j)%h,l,r);
        }
    }
    int ans=0;
    for(int i=0;i<=n;i++)ans=max(ans,dp[n][i]);
    cout<<ans;
    return 0;
}
