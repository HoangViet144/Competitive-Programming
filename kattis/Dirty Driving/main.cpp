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
    int n,p;
    cin>>n>>p;
    ll ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar,ar+n);
    ll ind= ar[0];
    for(int i=0;i<n;i++)
    {
        ind= min(ind,ar[i]- p*(i+1));
    }
    cout<<ar[0]-ind;
    return 0;
}
