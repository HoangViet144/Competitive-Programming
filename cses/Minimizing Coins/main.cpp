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
#define oo 1e9

using namespace std;
vector< vector<ll > > dp (2, vector<ll> (1000000+1, oo));
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> ar(n+1);
    FOR(i,1,n+1)cin>>ar[i];

    dp[0][0]=0;
    FOR(i,1,n+1)
    {
        FOR(j,1,1+x)
        {
            if(ar[i]<=j)
            {
                dp[i%2][j] = min(dp[i%2][j-ar[i]]+1,min(dp[(i-1)%2][j] , dp[(i-1)%2][j-ar[i]] +1 ));
            }
            else dp[i%2][j]= dp[(i-1)%2][j];
            //cout<<dp[i%2][j]<< " ";
        }
        //cout<<endl;
    }
    cout<<(dp[n%2][x]==oo ? -1: dp[n%2][x]);

    return 0;
}
