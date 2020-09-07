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
#define oo 1e9

using namespace std;
bool cmp (ii a, ii b)
{
    return a.fi <b.fi;
}
int main()
{
    int n,x;
    cin>>n>>x;
    vector<ii>ar;
    FOR(i,0,n)
    {
        int tmp;
        cin>>tmp;
        ar.push_back({tmp,i+1});
    }
    sort(ar.begin(), ar.end());
    for(int i=n-1;i>=0;i--)
    {
        if( ar[i].fi <=x)
        {
            auto it = lower_bound(ar.begin(), ar.end(), ii(x - ar[i].fi,-oo));
            //, [](ii a, ii b)-> bool{return a.fi <b.fi;});
            if( (*it).fi + ar[i].fi == x && (*it).se != ar[i].se)
            {
                cout<<ar[i].se<< " "<<(*it).se;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
