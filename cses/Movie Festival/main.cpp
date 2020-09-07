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
    if(a.se==b.se) return a.fi <b.fi;
    return a.se <b.se;
}
int main()
{
    int n;
    cin>>n;
    vector<ii> ar(n);
    FOR(i,0,n)
        cin>>ar[i].fi>>ar[i].se;
    sort(ar.begin(),ar.end(),cmp);
    int endd=0, ans=0, start=0;
    FOR(i,0,n)
    {
        if(endd<=ar[i].fi)
        {
            ans++;
            endd = ar[i].se;
        }
    }
    cout<<ans;
    return 0;
}
