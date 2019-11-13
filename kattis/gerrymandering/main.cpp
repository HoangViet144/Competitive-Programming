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
    int p,d;
    cin>>p>>d;
    int wa[d+1],wb[d+1],v[d+1],va[d+1],vb[d+1],twa=0,twb=0,tv=0;
    FOR(i,0,d+1)wa[i]=0,wb[i]=0,v[i]=0,va[i]=0,vb[i]=0;
    FOR(i,0,p)
    {
        int a,b,c;
        cin>>a>>b>>c;
        va[a]+=b;
        vb[a]+=c;
        v[a]+=b+c;
    }
    FOR(i,1,d+1)
    {
        tv+=v[i];
        int med=floor(v[i]/(double)2)+1;
        if((va[i]>=med))
        {
            wa[i]+=abs(va[i]-med);wb[i]+=vb[i];
        }
        else
        {
            wb[i]+=abs(vb[i]-med);wa[i]+=va[i];
        }
        twa+=wa[i];
        twb+=wb[i];
        cout<<((va[i]>=med)?"A ":"B ")<<wa[i]<<" "<<wb[i]<<endl;
    }
    cout<<fixed<<setprecision(10)<<abs(twa-twb)/(double)tv;
    return 0;
}
