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
void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,int>pos;
    int ar[n+1];
    FOR(i,1,n+1)
    {
        cin>>ar[i];
    }
    FOR(i,0,m)
    {
        int tmp;
        cin>>tmp;
        pos[tmp]=1;
    }
    bool possible=true;
    FOR(i,0,n)
    {
        if(!possible)break;
        FOR(j,1,n)
        {
            if(ar[j]>ar[j+1]&& pos[j])
            {

                swap(ar[j],ar[j+1]);
            }
            else if(ar[j]>ar[j+1])
            {
                possible=false;
                break;
            }
        }
    }
    cout<<(possible?"YES":"NO")<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
