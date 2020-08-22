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
    ll b[n];
    map<ll,ll>diff;
    FOR(i,0,n)
    {
        cin>>b[i];
        if(diff.count(i-b[i])==0)diff[i-b[i]]=b[i];
        else diff[i-b[i]]+=b[i];
    }
    ll ans=0;
    for(auto it=diff.begin(); it != diff.end();it++)ans=max(ans,it->se);
    cout<<ans;
    return 0;
}
