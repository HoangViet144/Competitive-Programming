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
    int q;
    cin>>q;
    while(q--)
    {
        ll initTime=0;
        ll n,m;
        cin>>n>>m;
        bool check=false;
        ll mn=m,mx=m;
        while(n--)
        {
            ll t,l,r;
            cin>>t>>l>>r;
            ll tmp=t-initTime;
            if(l<=mx+tmp&& mn-tmp<=r)
            {
                mn=max(mn-tmp,l);
                mx=min(mx+tmp,r);
            }
            else check=true;
            initTime=t;
        }
        if(check)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
