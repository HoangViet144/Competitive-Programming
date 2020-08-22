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
    ll a[n],b[n];
    vector<int>c(n);
    FOR(i,0,n)
    {
        cin>>a[i];
    }
    FOR(i,0,n)cin>>b[i];
    FOR(i,0,n)c[i]=a[i]-b[i];
    sort(c.begin(),c.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]>0)
        {
            auto it=lower_bound(c.begin(),c.end(),-c[i]+1);
            ans+=i-int(it-c.begin());
        }
    }
    cout<<ans;
    return 0;
}
