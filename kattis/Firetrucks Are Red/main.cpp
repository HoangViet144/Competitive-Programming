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
int n,m;
const int N= 2e5+7;
vector<int> rela[N];
vector<int> compress;
const int a=1e9+1;
vector<ii> dsk[N];
ii trace[N];
int visittt[N];
map<int,int> reverCom;
void dfs(ii u)
{
    for(ii v: dsk[u.fi])
    {
        int x= v.fi;
        if(!visittt[x])
        {
            visittt[x]=true;
            trace[x]={u.fi, v.se};
            dfs(v);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            int u;
            cin>>u;
            rela[i].push_back(u);
            compress.push_back(u);
        }
    }
    sort(compress.begin(), compress.end());
    compress.resize(unique(compress.begin(), compress.end())- compress.begin());
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<rela[i].size();j++)
        {
            int tmp = lower_bound(compress.begin(), compress.end(), rela[i][j]) - compress.begin() + 1;
            reverCom[tmp] = rela[i][j];
            rela[i][j]=tmp;
            //cout<<tmp<< " ";
        }
        //cout<<'\n';
    }
    //cout<<"----------"<<'\n';
    int k= compress.size()+1;
    vector<int> representative(N,0);
    vector<int> rever(N,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<rela[i].size();j++)
        {
            if( !representative[rela[i][j]] )
            {
                representative[ rela[i][j] ] = i;
                rever[i] = rela[i][j];
            }
            else
            {
                int ind= representative[rela[i][j]];
                dsk[ind].push_back({i,rela[i][j]});
                dsk[i].push_back({ind,rela[i][j]});
            }
        }
    }
//    for(int i=1;i<=n;i++)
//    {
//        for(ii j: dsk[i])cout<<j.fi<<" ";
//        cout<<'\n';
//    }
//    cout<<"--------"<<'\n';
    visittt[1]=true;
    dfs({1,0});
    for(int i=1;i<=n;i++)
    {
        if(!visittt[i])
        {
            cout<<"impossible";
            return 0;
        }
    }
    for(int i=2;i<=n;i++)
    {
        cout<<i<<" "<<trace[i].fi<<" "<<reverCom[trace[i].se]<<'\n';
    }
    return 0;
}
