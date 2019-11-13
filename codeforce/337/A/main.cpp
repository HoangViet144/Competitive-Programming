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

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ar[m];
    FOR(i,0,m)cin>>ar[i];
    sort(ar,ar+m);
   // FOR(i,0,m)cout<<ar[i]<<" ";
   //     cout<<endl;
    int res=1000000;
    for(int i=0;i<m-n+1;i++)
    {
        res=min(res,ar[i+n-1]-ar[i]);
    }
    cout<<res;
    return 0;
}
