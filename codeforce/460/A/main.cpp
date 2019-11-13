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

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)cout<<n;
    else if(n==m)cout<<n+1;
    else if(n %(m-1)==0)cout<<n/(m-1)*m-1;
    else cout<< n/(m-1)*m+n%(m-1);
    return 0;
}
