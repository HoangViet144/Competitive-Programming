#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,double>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;

int main()
{
    int n;
    cin>>n;
    ii point[n];
    for(int i=0;i<n;i++)cin>>point[i].fi>>point[i].se;
    sort(point,point+n);
    double ans=0.0;
    for(int i=0;i<n-1;i++)
    {
        int j=i+1;
        ans= max(ans, (abs(point[i].se- point[j].se)/(double)abs(point[i].fi -point[j].fi)));

    }
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}
