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
    long long ar[n];
    FOR(i,0,n)cin>>ar[i];
    sort(ar,ar+n);
    long long height=0,width=0;
    FOR(i,0,n)(i<n/2)?height+=ar[i]:width+=ar[i];
   // cout<<width<<" "<<height<<endl;
    cout<<width*width+height*height;

    return 0;
}
