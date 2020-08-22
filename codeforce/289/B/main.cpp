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
    int n,m,d;
    cin>>n>>m>>d;
    int ar[n*m];
    FOR(i,0,n*m)
    {
        cin>>ar[i];
    }
    int tmp=ar[0]%d;
    FOR(i,0,n*m)
    {
        if(ar[i]%d!=tmp)
        {
            cout<<-1;
            return 0;
        }
    }
    sort(ar,ar+n*m);
    ll ans=0;
    tmp=ar[n*m/2];
    FOR(i,0,n*m)
    {
        ans+=abs(ar[i]-tmp)/d;
    }
    cout<<ans;
    return 0;
}
