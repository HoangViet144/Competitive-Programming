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
#define N 200005

#define INP "solve"
#define OUT "solve"
void doc()
{
    freopen(INP ".inp","r",stdin);
    freopen(OUT ".out","w",stdout);
}
using namespace std;
int minAr[N],maxAr[N];
void solve()
{
    int n;
    cin>>n;
    int ar[n];
    FOR(i,0,n)
    {
        cin>>ar[i];
        minAr[ar[i]]++;
       // maxAr[ar[i]]++;
    }
    int minPos=0,maxPos=0;
    sort(ar,ar+n);
    FOR(i,0,n)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    FOR(i,1,N)
    {
        if(minAr[i])
        {
            i+=2;
            minPos++;
        }
    }
    FOR(i,0,n)
    {
        if(!maxAr[ar[i]-1])maxAr[ar[i]-1]++;
        else if(!maxAr[ar[i]])maxAr[ar[i]]++;
        else maxAr[ar[i]+1]++;
    }
    FOR(i,0,N)if(maxAr[i])maxPos++;
    cout<<minPos<<" "<<maxPos;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
    doc();
    solve();
    return 0;
}
