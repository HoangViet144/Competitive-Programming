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
bool check(ll ar[], ll n)
{
    FOR(i,0,n)if(ar[i]>=0)return false;
    return true;
}
ll maxSubArraySum(ll a[], ll sizee, ll &start, ll &endd)
{
    ll max_so_far = LONG_MIN, max_ending_here = 0;
    start=0, endd=0;
    for (ll i = 0; i < sizee; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            endd=i;
        }
        if (max_ending_here <= 0)
        {
            max_ending_here = 0;
            start=i;
        }
    }
    return max_so_far;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ar[n];
        ll Yasser=0;
        FOR(i,0,n)
        {
            cin>>ar[i];
            Yasser+=ar[i];
        }
        if(check(ar,n))
        {
            ll tmp=ar[0];
            FOR(i,0,n)tmp=max(tmp,ar[i]);
            cout<<(Yasser>tmp? "YES":"NO")<<endl;
        }
        else
        {
            ll st,en;
            ll tmp=maxSubArraySum(ar,n,st,en);
            if(Yasser>tmp)cout<<"YES"<<endl;
            else
            {
                if(Yasser==tmp &&st==0 && en==n-1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
