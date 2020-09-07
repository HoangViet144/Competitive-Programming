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
    vector<string> ar(n+1);
    FOR(i,0,n) cin>>ar[i];
    vector< vector<ll> > dp (n+1, vector<ll> (n+1, 0));
    if(ar[0][0]=='.')dp[1][1]=1;
    FOR(i,0,n+1)
    {
        FOR(j,0,n+1)
        {
           if(i==0 || j==0)
           {
               continue;
           }
           if(ar[i-1][j-1]=='.')dp[i][j]=(dp[i][j]+ dp[i][j-1]+dp[i-1][j]) %(ll)(1e9+7);
        }
    }
    cout<<dp[n][n];
    return 0;
}
