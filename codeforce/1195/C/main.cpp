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
    ll arA[n],arB[n];
    FOR(i,0,n)cin>>arA[i];
    FOR(i,0,n)cin>>arB[i];
    ll dp1[n],dp2[n];
    FOR(i,0,n)dp1[i]=0,dp2[i]=0;
    dp1[0]=arA[0],dp2[0]=arB[0];
    FOR(i,1,n)
    {
        dp1[i]=max(dp2[i-1]+arA[i],dp1[i-1]);
        dp2[i]=max(dp1[i-1]+arB[i],dp2[i-1]);
    }
    cout<<max(dp1[n-1],dp2[n-1]);
    return 0;
}
