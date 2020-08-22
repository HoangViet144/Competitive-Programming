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
long long giaithua(int n)
{
    long long ans=1;
    FOR(i,1,n)ans*=i;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int bac=(n-1)*2;
    //cout<<bac<<endl;
    cout<<giaithua(bac)/(giaithua(ceil((double)bac/2))*giaithua(floor((double)bac/2)));
    return 0;
}
