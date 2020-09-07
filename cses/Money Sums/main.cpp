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
    vector<int> ar(n);
    FOR(i,0,n)cin>>ar[i];
    int len= n*(*max_element(ar.begin(),ar.end()));
    vector<int> dp (len+1, 0);
    dp[0]=1;
    for(int j=0;j<n;j++)
        for(int i=len ;i>=1;i--)
        {

            if (ar[j]<=i && dp[i- ar[j]] ==1)dp[i]=1;
        }
    int cnt=0;
    for(int i=1;i<=len;i++)
        if(dp[i])cnt++;
    cout<<cnt<<endl;
    for(int i=1;i<=len;i++)
        if(dp[i])cout<<i<<" ";
    return 0;
}
