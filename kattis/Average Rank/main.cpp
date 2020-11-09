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
const int N= 1e6+7;
vector<int> Rank(N,1);
vector<int> rankPer(N,0);
vector<ll> rankTotal(N,0);
int main()
{
    int n,w;
    cin>>n>>w;
    for(int i=0;i<w;i++)
    {
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            int person;
            cin>>person;
            Rank[rankPer[person]]++;
            rankPer[person]++;
        }
        for(int j=1;j<=n;j++) rankTotal[j] += Rank[rankPer[j]];
    }
    for(int i=1;i<=n;i++)cout<<fixed<<setprecision(9)<<rankTotal[i]/(double)w<<'\n';
    return 0;
}
