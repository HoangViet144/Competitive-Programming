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
#define N 100005
using namespace std;
long long n;
long long point[N];
int main()
{
    cin>>n;
    int a,maxx=0;
    FOR(i,0,n)
    {
        cin>>a;
        point[a]+=a;
        maxx=max(maxx,a);
    }
    FOR(i,2,maxx+1)point[i]=max(point[i-1],point[i]+point[i-2]);
    cout<<point[maxx];
    return 0;
}
