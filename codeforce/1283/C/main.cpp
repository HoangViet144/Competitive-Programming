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
#define N 200005

using namespace std;
vector<vector<int>>DSK(N);
int visit[N],inDeg[N],outDeg[N];
int bfs(int u)
{
    queue<int>Q;
    Q.push(u);
    int ans=u;
    while(!Q.empty())
    {
        int v=Q.front();
        Q.pop();
        for(int i=0;i<DSK[v].size();i++)
        {
            if(!visit[DSK[v][i]])
            {
                visit[DSK[v][i]]=1;
                Q.push(DSK[v][i]);
                ans=DSK[v][i];
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    FOR(i,1,n+1)
    {
        cin>>ar[i];
        if(ar[i])
        {
            outDeg[i]++;
            inDeg[ar[i]]++;
        }
    }
    int cnt=0;
    vector<int> isolatedVertices;
    vector<int> inVer,outVer;
    for(int i=1;i<=n;i++)
    {
        if(inDeg[i]==0 && outDeg[i]==0)
        {
            isolatedVertices.push_back(i);
            cnt++;
        }
        if(inDeg[i]==0 && outDeg[i]==1) inVer.push_back(i);
        if(inDeg[i]==1 && outDeg[i]==0) outVer.push_back(i);
    }
    if(cnt==0 || cnt>1)
    {
        int n1=inVer.size();
        for(int i=0;i<n1;i++)
        {
            int u=inVer[i];
            int v=outVer[i];
            ar[v]=u;
        }
        for(int i=1;i<isolatedVertices.size();i++)
        {
            int u=isolatedVertices[i];
            int v=isolatedVertices[i-1];
            ar[u]=v;
        }
        if(cnt)ar[isolatedVertices[0]]=isolatedVertices[isolatedVertices.size()-1];
    }
    else
    {
        int k=isolatedVertices[0];
        int u=inVer[0];
        int v=outVer[0];
        ar[v]=k;
        ar[k]=u;
        int n1=inVer.size();
        for(int i=1;i<n1;i++)
        {
            ar[outVer[i]]=inVer[i];
        }
    }
    for(int i=1;i<=n;i++)cout<<ar[i]<< " ";
    return 0;
}
