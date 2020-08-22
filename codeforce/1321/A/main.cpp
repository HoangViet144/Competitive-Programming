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
    int a[n],b[n];
    int c1=0,c2=0;
    FOR(i,0,n)cin>>a[i];
    FOR(i,0,n)cin>>b[i];
    FOR(i,0,n)
    {
        if(a[i]==b[i])continue;
        c1+=a[i];
        c2+=b[i];
    }
    if(c1==0)
    {
        cout<<-1;
        return 0;
    }
    cout<<(c2%c1==0?c2/c1+1:ceil((c2/(double)c1)));
    return 0;
}
