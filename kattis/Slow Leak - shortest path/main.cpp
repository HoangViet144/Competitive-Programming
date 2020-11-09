#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<long long,long long>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;
int n,m,t,d;
const ll oo = 1e17;
vector<ii> dsk[501];
ll matrixAdj[501][501];
vector<int> repairStation;
ll dist[501];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n>>m>>t>>d;
    for(int i=0;i<=500;i++)
    {
        for(int j=0;j<=500;j++) matrixAdj[i][j]=1e17;
        matrixAdj[i][i]=0;
    }

    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        repairStation.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int a,b; ll c;
        cin>>a>>b>>c;
        matrixAdj[a][b] = c;
        matrixAdj[b][a] = c;
    }
    for(int k= 1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(matrixAdj[i][j] > matrixAdj[i][k]+ matrixAdj[k][j])
                    matrixAdj[i][j] = matrixAdj[i][k] + matrixAdj[k][j];
            }
        }
    }
    repairStation.push_back(1);
    repairStation.push_back(n);
    sort(repairStation.begin(), repairStation.end());
    int vertices= (int)repairStation.size();
    for(int i=0;i<vertices;i++)
    {
        for(int j=0;j<vertices;j++)
        {
            if(i==j)continue;
            int u= repairStation[i];
            int v= repairStation[j];
            ll w = matrixAdj[u][v];
            if(w>d)continue;
            dsk[u].push_back({v, w});
            //dsk[v].push_back({u, w});
        }
    }
    for(int i=0;i<=n;i++)dist[i]= oo;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0,1});
    dist[1] = 0;
//    for(int u: repairStation)
//    {
//        cout<<u<<" : ";
//        for(ii j: dsk[u])cout<<"( "<<j.fi<<" "<< j.se<<" ); ";
//        cout<<endl;
//    }
    while(!q.empty())
    {
        int u = q.top().se;
        ll du = q.top().fi;
        q.pop();
        if(dist[u]!=du)continue;
        for(ii it: dsk[u])
        {
            int v= it.fi;
            ll w= it.se;
            if(dist[v] > dist[u] +w)
            {
                dist[v] = dist[u]+w;
                q.push({dist[v],v});
            }
        }
    }
    if(dist[n]==oo)cout<<"stuck";
    else cout<<dist[n];
    return 0;
}
