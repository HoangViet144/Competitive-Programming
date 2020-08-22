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
        FOR(i,0,n)cin>>ar[i];
        bool check=false;
        FOR(i,0,n-1)
        {
            if(abs(ar[i]-ar[i+1])>=2)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                check=true;
                break;
            }
        }
        if(!check)cout<<"NO"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}
