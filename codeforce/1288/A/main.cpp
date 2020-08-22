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
        ll n,d;
        cin>>n>>d;
        if(n>=d)
        {
            cout<<"YES"<<endl;
            continue;
        }
        double denta= (1-n)*(1-n)-4*(d-n);
        if(denta<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        double x=(n-1+sqrt(denta))/(double)2;
        if(x<1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
