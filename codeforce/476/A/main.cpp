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

int main()
{
    int n,m;cin>>n>>m;
    int x=ceil((double)n/2);
    int tmp=ceil((double)x/m)*m;
    //cout<<tmp<<endl;
    cout<<((tmp>n)?-1:tmp);
    return 0;
}
