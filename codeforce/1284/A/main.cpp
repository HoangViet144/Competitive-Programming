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
    int n,m;
    cin>>n>>m;
    vector<string>s(n),t(m);
    FOR(i,0,n)cin>>s[i];
    FOR(i,0,m)cin>>t[i];
    int q;
    cin>>q;
    while(q--)
    {
        ll tmp;
        cin>>tmp;
        cout<<s[(tmp-1)%n]+t[(tmp-1)%m]<<endl;
    }
    return 0;
}
