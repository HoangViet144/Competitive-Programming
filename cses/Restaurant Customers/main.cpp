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
    vector<ii> ar;
    FOR(i,0,n)
    {
        int x,y;
        cin>>x>>y;
        ar.push_back({x,1});
        ar.push_back({y,-1});
    }
    sort(ar.begin(),ar.end());
    int cur=0, ans=0;
    FOR(i,0,2*n)
    {
        cur+= ar[i].se;
        ans= max(ans,cur);
    }
    cout<<ans;
    return 0;
}
