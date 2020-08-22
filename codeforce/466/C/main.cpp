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
long long cnt[500005];
int main()
{
    int n;
    cin>>n;
    int ar[n];
    long long sum=0;
    REP(i,n)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    if(sum %3!=0)
    {
        cout<<0;
        return 0;
    }
    sum/=3;
    long long tmp=0;
    REPD(i,n)
    {
        tmp+=ar[i];
        if(tmp==sum)cnt[i]=1;
    }
    REPD(i,n-1)cnt[i]+=cnt[i+1];
    long long ans=0;
    tmp=0;
    REP(i,n-2)
    {
        tmp+=ar[i];
        if(tmp==sum)ans+=cnt[i+2];
    }
    cout<<ans;
    return 0;
}
