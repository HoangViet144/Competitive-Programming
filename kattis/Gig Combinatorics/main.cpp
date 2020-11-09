#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,long long>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;
const ll mod= 1e9+7;
ll res1,res2,res3;
ll poW(ll a,ll b)
{
    if(b==0)return 1;
    if(b==1)return a%mod;
    ll tmp= poW(a,b/2);
    if(b&1)return (tmp%mod * tmp%mod* a%mod)%mod;
    else return (tmp%mod* tmp%mod)%mod;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    vector<ii> arr;
    for(int i=0;i<n;i++)cin>>ar[i];
    ll cnt=1;
    for(int i=1;i<n;i++)
    {
        if(ar[i]!=ar[i-1])
        {
            arr.push_back({ar[i-1],cnt});
            cnt=1;
        }
        else cnt++;
    }
    arr.push_back({ar[n-1],cnt});
    for(ii &t: arr)
    {
        if(t.fi==1) res1 = (res1%mod + t.se%mod)%mod;
        if(t.fi==2) res2 = (res2%mod + (res2%mod*(poW(2,t.se)-1)%mod)%mod  +  (res1%mod * (poW(2, t.se)-1)%mod)%mod)%mod ;
        if(t.fi==3) res3 = (res3%mod + (res2%mod*t.se%mod)%mod)%mod;
       // cout<<res1<<" "<<res2<<" "<<res3<<'\n';
    }
    cout<<res3;
    return 0;
}
