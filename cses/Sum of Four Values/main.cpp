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
struct iii{
    ll firstEle, secondEle, thirdEle;
};
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll>ar(n);
    FOR(i,0,n)
    {
        cin>>ar[i];
    }
    vector<pair<ll, ii> > sum;
    FOR(i,0,n-1)
    {
        FOR(j,i+1,n)
        {
            sum.push_back({ar[i]+ar[j],{i+1,j+1}});
        }
    }
    sort(sum.begin(), sum.end());
    for(int i=0;i<sum.size();i++)
    {
        int k = sum[i].fi;
        if(k >x/2)break;
        pair<ll, ii> tmp ={x-k , {0,0}};
        auto it= lower_bound(sum.begin(), sum.end(),tmp);
        while(k+ (*it).fi == x)
        {
            ll a= sum[i].se.fi, b= sum[i].se.se;
            ll c= (*it).se.fi, d= (*it).se.se;
            if(a !=c && a!=d && b!=c && b!=d)
            {
                cout<<a<< " "<<b<< " "<<c<<" "<<d;
                return 0;
            }
            it++;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}
