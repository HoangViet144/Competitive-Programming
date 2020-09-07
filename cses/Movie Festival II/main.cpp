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
bool cmp(ii a, ii b)
{
    return a.se<b.se;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ii> ar;
    FOR(i,0,n)
    {
        int a,b;
        cin>>a>>b;
        ar.push_back({a,b});
    }
    int cnt=0,ans=0;
    sort(ar.begin(), ar.end(),cmp);
    multiset<ll> s;
    FOR(i,0,k)s.insert(0);
    for(int i=0; i<ar.size();i++)
    {
        //cout<<ar[i].fi<<" "<<ar[i].se<<endl;
        auto it = s.upper_bound(ar[i].fi);
        if(it == s.begin())continue;
        it--;
        ans++;
        s.erase(it);
        s.insert(ar[i].se);

    }
    cout<<ans;
    return 0;
}
