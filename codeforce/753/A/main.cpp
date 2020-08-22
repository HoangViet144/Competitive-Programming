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
    int cnt=1;
    vector<int>ans;
    while(n>=cnt)
    {
        ans.push_back(cnt);
        n-=cnt;
        cnt++;
    }
    n+=ans[ans.size()-1];ans.pop_back();
    ans.push_back(n);
    cout<<ans.size()<<endl;
    FOR(i,0,ans.size())cout<<ans[i]<<" ";
    return 0;
}
