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
    int n,sum=0;
    cin>>n;
    vector<int>ar;
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        FOR(j,0,x)ar.push_back(i+1);
    }
    int q;
    cin>>q;
    //FOR(i,0,ar.size())cout<<ar[i]<<" ";
    while(q--)
    {
        int x;
        cin>>x;
        cout<<ar[x-1]<<endl;
    }
    return 0;
}
