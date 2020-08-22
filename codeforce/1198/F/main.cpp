#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <(b); i++)
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
long long _gcd(long long a, long long b) {
    return b == 0 ? a : _gcd(b, a % b);
}
int n;
int main()
{
    cin>>n;
    long long ar[n],ans[n];
    FOR(i,0,n)ans[i]=0;
    FOR(i,0,n)cin>>ar[i];
    FOR(i,0,n)cout<<ar[i]<<endl;
    vector<int>g1,g2;
    g1.push_back(ar[0]);
    ans[0]=1;
    FOR(i,1,n)
    {
        if(_gcd(ar[0],ar[i])==1){g1.push_back(ar[i]);ans[i]=1;break;}
    }
    cout<<g1.size()<<endl;
    if(g1.size()!=2){cout<<"NO";return 0;}
    else
    {
        FOR(i,0,n)if(!ans[i]){g2.push_back(ar[i]);ans[i]=2;break;}
        FOR(i,0,n)
        {
            if(!ans[i]&& _gcd(g2[0],ar[i])==1){g2.push_back(ar[i]);ans[i]=2;break;}
        }
        if(g2.size()!=2){cout<<"NO";return 0;}
        cout<<"YES"<<endl;
        FOR(i,0,n)
        {
            if(!ans[i])cout<<1<<" ";
            else cout<<ans[i]<<" ";
        }
    }

    return 0;
}
