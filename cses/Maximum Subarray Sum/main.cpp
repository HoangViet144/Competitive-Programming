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
    bool pos =false;
    FOR(i,0,n)
    {
        cin>>ar[i];
        if(ar[i]>=0)pos=true;
    }
    if(!pos)
    {
        cout<<*max_element(ar.begin(), ar.end());
        return 0;
    }
    ll max_cur=0, max_final =0;
    for(int i=0;i<n;i++)
    {
        max_cur+=ar[i];
        if(max_cur <0)max_cur=0;
        max_final = max(max_cur, max_final);
    }
    cout<<max_final;
    return 0;
}
