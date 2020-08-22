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
    int n,k;
    cin>>n>>k;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    int ans[n];
    ans[0]=ar[0];
    int sum=0;
    FOR(i,1,n)
    {
        ans[i]=ar[i]+max(0,k-ans[i-1]-ar[i]);
        sum+=max(0,k-ans[i-1]-ar[i]);
    }
    cout<<sum<<endl;
    FOR(i,0,n)cout<<ans[i]<<" ";
    return 0;
}
