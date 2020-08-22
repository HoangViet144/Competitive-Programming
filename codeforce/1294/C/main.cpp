#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(ll i = (a); i >= (b); i--)
#define REP(i,a) for(ll i = 0; i < (a); i++)
#define REPD(i,a) for(ll i = (a)-1; i >= 0; i--)
#define sz(a) (ll)a.size()

#define ii pair<ll,ll>
#define fi first
#define se second
#define ll long long


using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int cnt=1;
        int ind=0;
        int ans[3];
        FOR(i,2,100000)
        {
            if(n%i==0)
            {
                cnt++;
                n/=i;
                ans[ind++]=i;
            }
            if(cnt==3)break;
        }
        if(cnt==3 && ans[0]!=n && ans[1]!=n)
            cout<<"YES"<<endl<<ans[0]<<" "<<ans[1]<<" "<<n<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
