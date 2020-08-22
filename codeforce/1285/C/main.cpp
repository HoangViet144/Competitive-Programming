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
    ll x;
    cin>>x;
    ll ans_a=1,ans_b=x,max_cur=x;
    for(ll i=1; i*i<=x;i++)
    {
        if(x%i==0)
        {
            if((i*(x/i)/__gcd(i,x/i))==x)
            {
                if(max(i,x/i)<max_cur)
                {
                    max_cur=max(i,x/i);
                    ans_a=i;
                    ans_b=x/i;
                }
            }
        }
    }
    cout<<ans_a<<" "<<ans_b;
    return 0;
}
