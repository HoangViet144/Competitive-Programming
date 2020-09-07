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
    vector<ll>a(n),b(n),p(n);
    map<ll,ll> compress;
    FOR(i,0,n)
    {
        cin>>a[i]>>b[i]>>p[i];
        b[i]++;
        compress[a[i]],compress[b[i]];
    }
    int index=0;
    for(auto& i :compress)
    {
        i.se = index++;
    }
    vector< vector<ii> >projects(index);
    for(int i=0;i<n;i++)
    {
        projects[ compress[b[i]] ].push_back({compress[a[i]], p[i]});
    }
    vector<ll> dp(index+1,0);
    for(int i=0;i<index;i++)
    {
        if(i>0)dp[i]=dp[i-1];
        for(auto &pro : projects[i])
        {
            dp[i]= max(dp[i], dp[pro.fi] + pro.se);
        }
    }
    cout<<dp[index-1];
    return 0;
}
