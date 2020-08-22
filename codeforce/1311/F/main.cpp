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
bool cmp(ii a, ii b)
{
    if(a.se==b.se)return a.fi<b.fi;
    return a.se<b.se;
}
struct Fenwick {
    int n;
    vector<ll> f;
    Fenwick(int n): n(n), f(n+1, 0) {}
    void set(int i) {
        for (; i>=1; i -= i&(-i)) f[i]++;
    }
    LL get(int i) {
        LL result = 0;
        for (; i<=n; i += i&(-i)) result += f[i];
        return result;
    }
};
int main()
{
    int n;
    cin>>n;
    ii xv[n];
    FOR(i,0,n)cin>>xv[i].fi;
    FOR(i,0,n)cin>>xv[i].se;
    sort(xv,xv+n,cmp);
    ll res=0;
    Fenwick f(100000001);
    LL result = 0;
    while (n--) {
        result += f.get(x+1);
        f.set(x);
    }
    cout << result;
    FOR(i,0,n-1)
    {
        int j=i+1;

            int x2=xv[i].fi,x1=xv[j].fi;
            int v2=xv[i].se,v1=xv[j].se;
            if((x1-x2)>0 && (v2-v1)>0)continue;
            if((x1-x2)<0 && (v2-v1)<0)continue;
            else res+=abs(x2-x1);
    }
    cout<<res;
    return 0;





    vector<ii> am;
    vector<ii> duong;
    FOR(i,0,n)
    {
        if(xv[i].se<0)am.push_back(xv[i]);
        else duong.push_back(xv[i]);
    }
   // if(am.size()>0 && duong.size()>0)
    {
        sort(am.begin(),am.end(),cmp);
        sort(duong.begin(),duong.end(),cmp);
        int n=(int)am.size();
        int m=(int)duong.size();
        ll ans=0;
        FOR(i,0,n-1)if(am[i].se==am[i+1].se)ans+=abs(am[i].fi-am[i+1].fi);
        FOR(i,0,m-1)if(duong[i].se==duong[i+1].se)ans+=abs(duong[i].fi-duong[i+1].fi);
        FOR(i,0,n)ans+=abs(am[i].fi-duong[0].fi);
        FOR(i,0,m-1)ans+=abs(duong[i+1].fi-duong[i].fi)*am.size();
        cout<<ans;
        return 0;
    }
    return 0;
}
