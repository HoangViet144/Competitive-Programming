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
set<vector<string>>schedule;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int t=0;t<m;t++)
            {
                if(t==i)continue;
                for(int k=1;k<=n;k++)
                {
                    vector<string>team(2);
                    team[0]= char('A'+i)+to_string(j);
                    team[1]= char('A'+t)+to_string(k);
                    sort(team.begin(),team.end());
                    schedule.insert(team);
                }
            }
        }
    }
    vector<vector<string>> ans;
    for(vector<string>pairr : schedule)
    {
        ans.push_back(pairr);
       // cout<<pairr[0]<<" "<<pairr[1]<<'\n';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=m*n ;j+=n)
            cout<< ans[i+j][0]<<"-"<<ans[i+j][1]<<" ";
        cout<<endl;
    }
    return 0;
}
