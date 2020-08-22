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
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n,p;
    cin>>n>>p;
    vector<pair<int,int>> t;
    queue<int> hangcho;
    priority_queue<int,vector<int>,greater<int>> uutien;
    FOR(i,1,n+1)
    {
        int tmp;
        cin>>tmp;
        t.push_back(make_pair(tmp,i));
    }
    sort(t.begin(),t.end());
    int ind=0;
    ll cnt=0;
    ll ans[n+1];
    FOR(i,0,n)
    {
        if(hangcho.empty() && uutien.empty())cnt=(t[ind].fi);
        cnt+=p;
        while(ind<n && t[ind].fi<=cnt)
        {
            if(hangcho.empty() || hangcho.back()> t[ind].se)hangcho.push(t[ind].se);
            else uutien.push(t[ind].se);
            ind++;
        }
        ans[hangcho.front()]=cnt;
        hangcho.pop();
        if(hangcho.empty() && !uutien.empty())
        {
            hangcho.push(uutien.top());
            uutien.pop();
        }
    }
    FOR(i,1,n+1)cout<<ans[i]<<" ";
    return 0;
}
