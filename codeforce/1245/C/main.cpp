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
int dp[100005];
int mod = 1000000007;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    s=" "+s;
    dp[0]=1;
    dp[1]=1;
    for(int i=1;i<=n;i++)
    {
        if(s[i]=='m'||s[i]=='w')
        {
            cout<<0;
            return 0;
        }
        if(s[i]==s[i-1] && (s[i]=='u'|| s[i]=='n'))
        {
            dp[i]=(dp[i-1]%mod+dp[i-2]%mod)%mod;
        }
        else dp[i]=dp[i-1];
    }
    cout<<dp[n];
    return 0;
}
