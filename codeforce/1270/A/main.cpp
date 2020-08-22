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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int max1=0,max2=0;
        FOR(i,0,k1)
        {
            int x;
            cin>>x;
            max1=max(max1,x);
        }
        FOR(i,0,k2)
        {
            int x;
            cin>>x;
            max2=max(max2,x);
        }
        cout<<(max1>max2?"YES":"NO")<<endl;
    }
    return 0;
}
