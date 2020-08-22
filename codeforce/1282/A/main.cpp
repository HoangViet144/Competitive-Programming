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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        ll tmp=0;
        ll ans= abs(a-b);
        if((a-c)*(b-c)<=0)
        {
            ans-=min(abs(a-c),r);
            ans-=min(abs(b-c),r);
        }
        else
        {
            if(a<=b)
            {
                if(b<=c)ans-=min(ans, max(tmp,r-c+b));
                else ans-=min(ans, max(tmp,r-a+c));
            }
            else
            {
                if(a<=c)ans-=min(ans, max(tmp,r-c+a));
                else ans-=min(ans, max(tmp,r-b+c));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
