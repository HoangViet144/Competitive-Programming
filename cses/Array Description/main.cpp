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
const ll mod = 1e9+7;
int main()
{
    //freopen("inp.txt","r",stdin);
    ll n,m;
    cin>>n>>m;
    vector<ll>ar (n);
    FOR(i,0,n)cin>>ar[i];
    vector<vector<ll>>  dp(n, vector<ll>(m+1,0));
    ll cur=ar[0];
    if (cur==0)
        for(int j=1;j<=m;j++)dp[0][j]=1;
    else
        dp[0][cur] = 1;
    for(int i=1 ; i<n;i++)
    {
        cur = ar[i];
        if(cur!=0)
        {
            for(int j: {cur-1, cur, cur+1})
            {
                if(1<=j && j<=m)
                    dp[i][cur]= (dp[i][cur] + dp[i-1][j])%mod;
            }
        }
        else
        {
            for(int j=1;j<=m;j++)
            {
                for(int t:{j-1,j,j+1})
                {
                    if(1<=t && t<=m)
                        dp[i][j]= (dp[i][j] + dp[i-1][t])%mod;
                }
            }
        }
    }
    ll ans=0;
    for(int j=1;j<=m;j++)ans= (ans+dp[n-1][j])%mod;
    cout<<ans;
    return 0;
}
