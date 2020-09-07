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
    string a,b;
    cin>>a>>b;
    int n= a.length(), m=b.length();
    a=" "+a;
    b=" "+b;
    vector<vector<ll>> dp(2, vector<ll>(m+1,1e9));
    for(int i=0;i<=n;i++) dp[i%2][0]=i;
    for(int i=0;i<=m;i++) dp[0][i]=i;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            dp[i%2][j]=1e9;
        dp[i%2][0]=i;
        for(int j=1;j<=m;j++)
        {
            //dp[i%2][j]=j;
            if(a[i]==b[j])
                dp[i%2][j] = min(dp[i%2][j],dp[(i-1)%2][j-1]);
            else
                dp[i%2][j] = min(dp[i%2][j], min(min(dp[i%2][j-1], dp[(i-1)%2][j-1]),dp[(i-1)%2][j])+1);
        }
    }
    cout<<dp[n%2][m];
    return 0;
}
