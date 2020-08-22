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
vector<pair<ll,ll>> ar;
long double maxx(long double a, long double b)
{
    return (a>b?a:b);
}
ll minn(ll a,ll b){return (a>b)?b:a;}
bool sortbysec(const pair<ll,ll> &a,
              const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
int main()
{
    long long n;
    cin>>n;
    long long area=0;
    FOR(i,0,n)
    {
        long long a,b;
        cin>>a>>b;
        area=maxx(area, a*b);
        ar.push_back(make_pair(a,b));
    }
    if(n==1)
    {
        cout<<area/2<<"."<<(area&1?5:0);
        return 0;
    }
  //  cout<<area<<endl;
    sort(ar.begin(),ar.end());
    FOR(i,0,n)cout<<ar[i].first<<" "<<ar[i].second<<endl;
    for(long long i=n-1;i>=1;--i)
    {
        long long a=ar[i].first,b=ar[i].second,c=ar[i-1].first,d=ar[i-1].second;
        area=maxx(area,maxx(2*minn(a,c)*minn(b,d)   ,  2*minn(a,d)*minn(b,c)));
    }
    sort(ar.begin(), ar.end(), sortbysec);
    FOR(i,0,n)cout<<ar[i].first<<" "<<ar[i].second<<endl;
    for(long long i=n-1;i>=1;--i)
    {
        long long a=ar[i].first,b=ar[i].second,c=ar[i-1].first,d=ar[i-1].second;
        area=maxx(area,maxx(2*minn(a,c)*minn(b,d)   ,  2*minn(a,d)*minn(b,c)));
    }
    cout<<area/2<<"."<<(area&1?5:0);

    return 0;
}
//1000000000000000000
