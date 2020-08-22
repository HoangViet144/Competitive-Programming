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
const int mod=1000000007;
long long poww(long long x, long long exp)
{
    if(exp==0)return 1%mod;
    if(exp==1)return x%mod;
    if(exp&1)return (x*poww(x,exp-1))%mod;
    ll tmp=poww(x,exp/2)%mod;
    return (tmp*tmp)%mod;
}

int main()
{
    ll n,x;
    cin>>n>>x;
    ll ar[n];
    ll sum=0;
    FOR(i,0,n)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    vector<ll> degree(n);
    FOR(i,0,n)degree[i]=sum-ar[i];
    sort(degree.begin(),degree.end(),greater<ll>());
    ll exp=degree[n-1];
    while(true)
    {
        ll m=degree.size();
        exp=degree[m-1];
        ll cnt=0;
        for(int i=m-1;i>=0;i--)
            if(exp==degree[i])
            {
                cnt++;
                degree.pop_back();
            }
            else break;
        if(cnt%x==0)
        {
            for(int i=1;i<=cnt/x;i++)degree.push_back(exp+1);
        }
        else
        {
            exp=min(exp,sum);
            cout<<poww(x,exp);
            return 0;
        }
    }

    return 0;
}
