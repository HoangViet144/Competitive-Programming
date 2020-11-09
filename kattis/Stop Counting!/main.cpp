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
int n;
vector<ll>ar;
long double ans=0.0;
ll curSum =0, curCnt=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll tmp; cin>>tmp;
        ar.push_back(tmp);
    }
    //sort(ar.begin(), ar.end(), greater<ll>());
    for(int i=0;i<n;i++)
    {
        curSum += ar[i];
        curCnt ++;
        ans= max(ans, (long double)curSum/curCnt);
    }
    curSum=0;
    curCnt=0;
    for(int i=n-1;i>=0;i--)
    {
        curSum += ar[i];
        curCnt ++;
        ans= max(ans, (long double)curSum/curCnt);
    }
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}
