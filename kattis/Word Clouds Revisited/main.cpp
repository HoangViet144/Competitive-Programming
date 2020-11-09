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
ll dp[5000+5];
int main()
{
    for(int i=1;i<=5000;i++)dp[i]= LONG_MAX;
    int n,c;
    cin>>n>>c;
    ll ar[n+1][2];
    for(int i=1;i<=n;i++) cin>>ar[i][0]>>ar[i][1];
    for(int i=1;i<=n;i++)
    {
        ll w_tmp=ar[i][0];
        ll h_tmp= ar[i][1];

        dp[i] =dp[i-1]+ ar[i][1];

        for(int j=i-1;j >=1;j--)
        {
            if(w_tmp+ar[j][0]<=c)
            {
                h_tmp= max(h_tmp, ar[j][1]);
                dp[i]= min(dp[i], dp[j-1]+ h_tmp);
                w_tmp+= ar[j][0];
            }
            else break;
        }
    }
    cout<<dp[n];
    return 0;
}
