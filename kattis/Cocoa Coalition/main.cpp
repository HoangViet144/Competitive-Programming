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
    ll n,m,a;
    cin>>n>>m>>a;
    if(a%n ==0 && a/n<=m)
    {
        cout<<1;
        return 0;
    }
    if(a%m ==0 && a/m<=n)
    {
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(a%i ==0 && a/i <=m)
        {
            cout<<2;
            return 0;
        }
        if((n*m-a)%i ==0 && (m*n-a)/i <=m)
        {
            cout<<2;
            return 0;
        }
    }
    cout<<3;
    return 0;
}
