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

using namespace std;
void solve()
{
    int n,p,k;
    cin>>n>>p>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int prepSum=0;
    int ans=0;
    for(int i=0;i<k;i++)
    {
        if(prepSum>p)break;
        int sum=prepSum;
        int cnt=i;
        for(int j=i+k-1;j<n;j+=k)
        {
            if(sum+a[j]<=p)
            {
                sum+=a[j];
                cnt+=k;
            }
        }
        prepSum+=a[i];
        ans=max(ans,cnt);
    }
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
