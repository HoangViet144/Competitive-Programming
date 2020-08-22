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
        int n;
        cin>>n;
        int a[n],b[n];
        FOR(i,0,n)cin>>a[i];
        FOR(i,0,n)cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        FOR(i,0,n)cout<<a[i]<<" ";
        cout<<endl;
        FOR(i,0,n)cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
