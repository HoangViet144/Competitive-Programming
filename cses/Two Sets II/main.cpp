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
    ll n;
    cin>>n;
    ll total= n*(n+1)/2;
    if(total%2!=0)
    {
        cout<<0;
        return 0;
    }
    total/=2;
    vector<vector<ll>>dp(2, vector<ll>(total+1,0));
    dp[0][0]=1;
    for(int i=1;i<n;i++)
    {
        for(ll j=0;j<=total;j++)
            if(i<=j)
                dp[i%2][j]= (dp[(i-1)%2][j]+dp[(i-1)%2][j-i])%(ll)(1e9+7);
            else
                dp[i%2][j]= dp[(i-1)%2][j];
    }
    cout<<dp[(n-1)%2][total];
    return 0;
}
