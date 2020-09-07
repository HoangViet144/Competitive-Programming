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
    vector<ll> ar(n);
    FOR(i,0,n)cin>>ar[i];
    vector<ll> dp;

    for(int i=0;i<n;i++)
    {
        auto it= lower_bound(dp.begin(), dp.end(), ar[i]);
        if(it==dp.end()) dp.push_back(ar[i]);
        else *it = ar[i];
    }

    cout<<dp.size();
    return 0;
}
