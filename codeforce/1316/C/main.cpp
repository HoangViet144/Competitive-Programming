#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
    ll n,m,p;
    cin>>n>>m>>p;
    ll ii=-1,jj=-1;
    FOR(i,0,n)
    {
        ll tmp;
        cin>>tmp;
        if(ii==-1 && tmp%p!=0)ii=i;
    }
    FOR(i,0,m)
    {
        ll tmp;
        cin>>tmp;
        if(jj==-1 && tmp%p!=0)jj=i;
    }
    cout<<ii+jj;
    return 0;
}
