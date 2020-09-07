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
#define ll long long int
#define N 1e5

using namespace std;

int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>ar(n);
    FOR(i,0,n)cin>>ar[i];
    ll cur=0;
    ll cnt=0;
    ll maxEle = *max_element(ar.begin(), ar.end());
    ll l=0, r= t*maxEle +1, ans;
    while(l<=r)
    {
        ll mid=l + (r-l)/2;
        ll curOut=0;
        FOR(i,0,n)
        {
            curOut += mid/ar[i];
            if (curOut >=t)break;
        }
        if(curOut >=t)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans;
    return 0;
}
