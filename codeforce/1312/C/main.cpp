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
long long pw(ll a, ll b)
{
    if(b==0)return 1;
    ll tmp=pw(a,b/2);
    if(b%2==0)return tmp*tmp;
    else return a*tmp*tmp;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    long long a[n];
    FOR(i,0,n)cin>>a[i];
  //  ll s=16*log(10)/log(k);
    ll ks=1;
    while(ks*k<=1e16)ks*=k;
    //cout<<"/......"<<ks<<endl;
    while(ks)
    {
        int cnt=0,pos=-1;
        FOR(i,0,n)if(a[i]>=ks)cnt++,pos=i;
        if(cnt>=2)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(pos!=-1)a[pos]-=ks;
        ks/=k;
    }
    FOR(i,0,n)if(a[i]!=0){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
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
