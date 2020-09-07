#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<long long,long long>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;

int main()
{
    ll n,xx;
    cin>>n>>xx;
    vector<ii>ar(n);
    FOR(i,0,n)
    {
        cin>>ar[i].fi;
        ar[i].se=i+1;
    }
    sort(ar.begin(), ar.end());
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i].se!=ar[j].se && (ar[i].fi+ar[j].fi)<=xx)
            {
                auto it= lower_bound(ar.begin(), ar.end(), ii{xx- ar[i].fi- ar[j].fi,0});
                if(it != ar.end() && (*it).fi == xx- ar[i].fi-ar[j].fi && (*it).se!= ar[i].se && (*it).se!=ar[j].se)
                {
                    cout<<ar[i].se<<" "<<ar[j].se<<" "<< (*it).se;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
