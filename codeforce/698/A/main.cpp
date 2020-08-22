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
    int ar[n+1];
    FOR(i,1,n+1)cin>>ar[i];
    int dp[n+1][3];
    dp[0][0]=0; //rest
    dp[0][1]=0; //contest
    dp[0][2]=0; //sport
    FOR(i,1,n+1)
    {
        dp[i][0]=max(max(dp[i-1][0],dp[i-1][1]),dp[i-1][2]);
        if(ar[i]==1 || ar[i]==3)dp[i][1]=max(dp[i-1][0],dp[i-1][2])+1;
        else dp[i][1]=max(dp[i-1][0],dp[i-1][2]);
        if(ar[i]==2 || ar[i]==3)dp[i][2]=max(dp[i-1][0],dp[i-1][1])+1;
        else dp[i][2]=max(dp[i-1][0],dp[i-1][1]);
    }
    cout<<n-max(dp[n][0],max(dp[n][1],dp[n][2]));
    return 0;
}
