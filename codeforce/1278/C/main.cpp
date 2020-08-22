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
void solve()
{
    int n;
    cin>>n;
    int ar[2*n+1];
    int diffInit=0;
    for(int i=1;i<=2*n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)diffInit++;
        else diffInit--;
    }
    if(diffInit==0)
    {
        cout<<0<<endl;
        return;
    }
    int diffL[n+1],diffR[n+1];
    diffL[0]=0,diffR[0]=0;
    for(int i=1;i<=n;i++)
    {
        diffR[i]=diffR[i-1]+(ar[i+n]==1?1:-1);
        diffL[i]=diffL[i-1]+(ar[n+1-i]==1?1:-1);
    }
    map<int,int>R;
    for(int i=1;i<=n;i++)if(R.count(diffR[i])==0)R[diffR[i]]=i;
    int ans=INT_MAX;
    for(int i=1;i<=n;i++)if(R.count(diffInit-diffL[i]))ans=min(ans,R[diffInit-diffL[i]]+i);
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
