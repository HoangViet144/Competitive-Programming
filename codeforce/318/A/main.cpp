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
    long long n,k; cin>>n>>k;
    if(n&1)
    {
        if(k<=(n+1)/2)cout<<2*k-1;
        else cout<<(k-(n+1)/2)*2;
    }
    else
    {
        if(k<=n/2)
        {
            cout<<2*k-1;
        }
        else cout<<(k-n/2)*2;
    }
    return 0;
}
