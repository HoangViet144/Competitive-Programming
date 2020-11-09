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
    vector<int> visit(n+1,0);
    vector<int> used(n+1,0);
    int m;
    cin>>m;
    vector<int> ar(m);
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        visit[ar[i]]=1;
    }
    vector<int> ans;
    int ind=0;
    for(int i=1;i<=n;i++)
    {
        if(!visit[i])
        {
            if(i < ar[ind])ans.push_back(i);
            else if(ind<m)
            {
                used[ar[ind]]=1;
                ans.push_back(ar[ind++]);
                i--;
            }
            else ans.push_back(i);
        }
       // else ans.push_back(ar[ind++]);
       // cout<<ans[ans.size()-1];
    }
    for(int i=0;i<m;i++)
        if(!used[ar[i]])ans.push_back(ar[i]);
    for(int i: ans)cout<<i<<'\n';
    return 0;
}
