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
    int n,m;
    cin>>n>>m;
    int ar[m];
    FOR(i,0,m)cin>>ar[i];
    int vitri[n+1],day[n+1],minn[n+1],maxx[n+1];
    FOR(i,0,n+1)day[i]=i,vitri[i]=i,minn[i]=i,maxx[i]=i;
    //cout<<endl;
    FOR(i,0,m)
    {
        int tmp=ar[i];
        if(vitri[tmp]==1)continue;
        else
        {
            int t1=day[vitri[tmp]-1];
            //int a=vitri[tmp],b=vitri[t1];
            swap(vitri[tmp],vitri[t1]);
            minn[tmp]=min(minn[tmp],vitri[tmp]);
            maxx[tmp]=max(maxx[tmp],vitri[tmp]);
            minn[t1]=min(minn[t1],vitri[t1]);
            maxx[t1]=max(maxx[t1],vitri[t1]);
            day[vitri[tmp]]=tmp;
            day[vitri[t1]]=t1;
        }
       /* FOR(j,1,n+1)
        {
            minn[j]=min(minn[j],vitri[j]);
            maxx[j]=max(maxx[j],vitri[j]);
        }*/
    }
  //  cout<<endl;
    FOR(i,1,n+1)cout<<minn[i]<<" "<<maxx[i]<<endl;
    return 0;
}
