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
    ll n,a,b,k;
    cin>>n>>a>>b>>k;
    ll ar[n];
    FOR(i,0,n)cin>>ar[i];
    ll numOfUse[n];
    FOR(i,0,n)
    {
        if(ar[i]%(a+b)==0)
        {
            numOfUse[i]=ceil(b/(double)a);
        }
        else
        {
            if(ar[i]%(a+b) <=a)numOfUse[i]=0;
            else numOfUse[i]=ceil(ar[i]%(a+b)-a/(double)a);
        }
    }
    sort(numOfUse,numOfUse+n);
    ll ind=0;
    ll ans=0;
    while(k)
    {
        if(numOfUse[ind]>k)break;
        ans++;
        k-=numOfUse[ind];
        ind++;
    }
    cout<<ans;
    return 0;
}
