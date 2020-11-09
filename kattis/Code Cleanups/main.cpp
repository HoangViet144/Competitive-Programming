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
int ar[366];
int ans=0, cur=0, cnt=0;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        ar[tmp]=1;
    }
    for(int i=1;i<=365;i++)
    {
        if(cur>=20)
        {
            cur=0;
            cnt=0;
            ans++;
        }
        if(ar[i])cnt++;
        cur+=cnt;
    }
    if(cur>0)ans++;
    cout<<ans;
    return 0;
}
