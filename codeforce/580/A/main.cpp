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
    int n;
    cin>>n;
    int a[n];
    FOR(i,0,n)cin>>a[i];
    int maxx=1,len=1;
    FOR(i,1,n)
    {
        if(a[i]>=a[i-1])len++;
        else
        {
            if(maxx<len)maxx=len;
            len=1;
        }
    }
    if(maxx<len)maxx=len;
    cout<<maxx;
    return 0;
}
