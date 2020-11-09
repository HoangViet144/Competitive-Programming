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
bool used[101];
int initBottle[101];
int ans[101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,s,d;
    cin>>n>>m>>s>>d;
    ii coolBottle[s];
    int totalCoolBottle=0;
    for(int i=0;i<s;i++)
    {
        cin>> coolBottle[i].fi;
        coolBottle[i].se =i;
    }
    sort(coolBottle, coolBottle+s);
    int totalCur=0;
    int cnt=0;
    for(int i=0;i<s;i++)
    {
        int ind= coolBottle[i].se;
        if(n==0)
        {
            cnt+= coolBottle[i].fi;
            continue;
        }
        ans[ind]= min(n, d- coolBottle[i].fi);
        n-=ans[ind];
    }
    if(cnt<m) cout<<"impossible";
    else for(int i=0;i<s;i++)cout<<ans[i] <<" ";
    return 0;
}
