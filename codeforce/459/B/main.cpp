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
    int n;
    cin>>n;
    long long ar[n];
    FOR(i,0,n)cin>>ar[i];
    sort(ar,ar+n);
    long long c_min=1,c_max=1;
    FOR(i,1,n)
    {
        if(ar[i]==ar[i-1])c_min++;
        else break;
    }
    FORD(i,n-2,0)
    {
        if(ar[i]==ar[i+1])c_max++;
        else break;
    }
    if(ar[n-1]==ar[0])
    {
        cout<<0<<" "<<n*(n-1)/2;
        return 0;
    }
    cout<<ar[n-1]-ar[0]<<" "<<c_min*c_max;
    return 0;
}
