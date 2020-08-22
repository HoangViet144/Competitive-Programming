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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ar[n];
        ll a=0,b=0;
        FOR(i,0,n)
        {
            ll tmp;
            cin>>tmp;
            a+=tmp;
            b^=tmp;
        }
        cout<<2<<endl;
        cout<<b<<" "<<a+b<<endl;
    }

}
int main()
{
    solve();
    return 0;
}
