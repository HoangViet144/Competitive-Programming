#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
int n,a,x,b,y;
bool check=0;
int main()
{
    cin>>n>>a>>x>>b>>y;
    vector <int>aDes,bDes;
    if(a<x) FOR(i,a,x)aDes.push_back(i);
    else FOR(i,a,x+n)aDes.push_back(i<=n ? i : i% n);
    if(b>y) FORD(i,b,y)bDes.push_back(i);
    else FORD(i,b+n,y)bDes.push_back(i<=n ? i : i%n);
    FOR(i,0,aDes.size()-1)cout<<aDes[i]<<" ";
    cout<<endl;
    FOR(i,0,bDes.size()-1)cout<<bDes[i]<<" ";
    cout<<endl;
    FOR(i,0,min(aDes.size(),bDes.size())-1)if(aDes[i]==bDes[i]){check=1;break;}
    if(check)cout<<"YES";else cout<<"NO";
    return 0;
}
