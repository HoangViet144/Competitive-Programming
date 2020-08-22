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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll tmp=floor(log10((double)b))+1;
        //cout<<tmp<<endl;
        ll t=1;
        for(int i=1;i<=tmp;i++)t*=10;
        t--;
        //cout<<t<<endl;
        ll ans=(t==b?tmp:tmp-1);
        ans*=a;
        cout<<ans<<endl;
    }
    return 0;
}
