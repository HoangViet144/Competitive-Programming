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
    ll n,x;
    cin>>n>>x;
    vector<ll>ar (n);
    FOR(i,0,n)cin>>ar[i];
    //sort(ar.begin(), ar.end());
    int i=0,j=0, sum=0,cnt=0;
    while(j<n)
    {
        if(sum<x)
        {
            if(i>=n)break;
            sum += ar[i++];
        }
        else if(sum>x)
        {
            sum -= ar[j++];
        }
        else
        {
            sum += ar[i++];
            sum -= ar[j++];
        }
        if(sum==x)cnt++;
    }
    cout<<cnt;
    return 0;
}
