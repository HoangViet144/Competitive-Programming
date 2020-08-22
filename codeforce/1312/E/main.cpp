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
int n;
int ar[501];
int dp[501][501];
int dp2[501];
int calcDP(int l, int r)
{
    if(l+1==r)
        return dp[l][r]=ar[l];
    if(dp[l][r]!=0)
        return dp[l][r];
    dp[l][r]=-1;
    FOR(mid, l+1,r)
    {
        int lf=calcDP(l,mid);
        int rg=calcDP(mid,r);
        if(lf>0 && lf==rg)
            return dp[l][r]=lf+1;
    }
    return dp[l][r];
}
void solve()
{
    cin>>n;
    FOR(i,0,n)cin>>ar[i];
    FOR(i,0,n+1)dp2[i]=1e7;
    dp2[0]=0;
    FOR(i,0,n)
    {
        FOR(j,i+1,n+1)
        {
            if(calcDP(i,j)>0)
                dp2[j]=min(dp2[j],dp2[i]+1);
        }
    }
    cout<<dp2[n]<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    solve();
    return 0;
}
