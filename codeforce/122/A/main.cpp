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
using namespace std;
bool lucky(int i)
{
    string tmp=to_string(i);
   // cout<<tmp;
    FOR(j,0,tmp.length())if(tmp[j]!='4' && tmp[j]!='7')return false;
    cout<<"true";
    return true;
}
int main()
{
    int n;cin>>n;
    FOR(i,1,n+1)
    {
        if(lucky(i) && n%i==0){cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
}
