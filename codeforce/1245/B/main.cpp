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
    int n,b;
    cin>>n>>b;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    int odd=0,even=0;
    vector<int>poss;
    FOR(i,0,n-1)
    {
        if(odd && odd==even)
        {
            poss.push_back(abs(ar[i+1]-ar[i]));
            odd=even=0;
        }
        else if(ar[i]%2==0)even++;
        else if(ar[i]%2==1)odd++;
    }
    FOR(i,0,poss.size())cout<<poss[i];
    return 0;
}
