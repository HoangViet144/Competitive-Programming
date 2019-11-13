#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
    int n,m;
    cin>>n>>m;
    int ar[n];
    REP(i,n)cin>>ar[i];
    set<int>s;
    REPD(i,n)
    {
        s.insert(ar[i]);
        ar[i]=s.size();
    }
    while(m--)
    {
        int l;
        cin>>l;
        cout<<ar[l-1]<<endl;
    }
    return 0;
}
