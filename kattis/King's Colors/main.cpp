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
ll dp[2500+5][2500+5];
const ll mod= 1e9+7;
int main()
{
    ll n,k;
    cin>>n>>k;
    for(int j=1;j<=k;j++) dp[1][j]=j;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            dp[i][j]= (   (j-1)*dp[i-1][j]   )%mod;
            //cout<<dp[i][j]<<" ";
        }
        //cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    cout<<dp[n][k];
    return 0;
}
