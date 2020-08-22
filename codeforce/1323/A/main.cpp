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
void solve()
{
    int n;
    cin>>n;
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    FOR(i,0,n)
    {
        if(ar[i]%2==0)
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
    }
    FOR(i,0,n-1)
    {
        if(ar[i]%2==1 && ar[i+1]%2==1)
        {
            cout<<2<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
