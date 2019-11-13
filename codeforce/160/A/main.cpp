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

using namespace std;

int main()
{
    int n;cin>>n;
    int coin[n];
    double sum=0;
    FOR(i,0,n){cin>>coin[i];sum+=coin[i];}
    sort(coin,coin+n,greater<int>());
    int tmp=0;
    int i=0;
    for(;i<n;i++)
    {
        tmp+=coin[i];
        if(tmp>sum/2)break;
    }
    cout<<i+1;
    return 0;
}
