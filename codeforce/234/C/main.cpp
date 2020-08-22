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
int dp[100009];
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    FOR(i,1,n+1)cin>>ar[i];
    vector<int>a;
    a.push_back(0);
    int ans=0;
    int cnt=0;
    FOR(i,1,n+1)
    {
       if(i==1&& ar[i]==0)
       {
           ans++;
           a.push_back(-1);
           continue;
       }
       if(i==1 && ar[i]>0)
       {
           ans++;
           a.push_back(-1);
           continue;
       }
       if(ar[i]==0)ans++;
       else a.push_back(ar[i]);
    }
    int m=a.size()-1;
    for(int i=1;i<=m;i++)
    {
        dp[i]=dp[i-1]+(a[i]>0?1:0);
    }
    int tmp=INT_MAX;

    for(int i=1;i<=m-1;i++)
    {
        if(a[i]<0)
        {
            tmp=min(tmp,dp[i]+m-i-(dp[m]-dp[i]));
        }
    }
    cout<<ans+(tmp==INT_MAX?0:tmp);
    return 0;
}
