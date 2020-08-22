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
    int n;
    cin>>n;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    vector<pair<int,int>>ans;
    FOR(i,0,n)
    {
        int ind=i;
        FOR(j,i,n)
        {
            if(ar[j]<ar[ind])
            {
                ind=j;
            }
        }
        if(i!=ind)
        {
            ans.push_back(make_pair(i,ind));
            swap(ar[i],ar[ind]);
        }
    }
    cout<<ans.size()<<endl;
    FOR(i,0,ans.size())cout<<ans[i].first<< " "<<ans[i].second<<endl;
    return 0;
}
