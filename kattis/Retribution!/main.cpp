#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<double,double>
#define fi first
#define se second
#define ll long long
#define N 1e5

using namespace std;
struct node
{
    double dist;
    int judge;
    int feather;
    bool isTar;
};
int nJudge, nTar, nFeather;
vector<bool> hasTar(1010,0);
vector<bool> hasFeather(1010,0);
vector<bool> usedTar(1010,0);
vector<bool> usedFeather(1010,0);
ii judges[1010];
ii tars[1010];
ii feathers[1010];
bool cmp(node a, node b)
{
    if(a.dist == b.dist)
    {
        if(a.judge == b.judge) return a.feather < b.feather;
        return a.judge < b.judge;
    }
    return a.dist < b.dist;

    //return a.judge < b.judge;
//    if(a.judge > b.judge) return a.judge > b.judge;
//
}
int main()
{
    cin>>nJudge>>nTar>>nFeather;
    vector<node> ar;
    for(int i=0;i<nJudge;i++)
        cin>>judges[i].fi >> judges[i].se;
    for(int i=0;i<nTar;i++)
    {
        cin>>tars[i].fi>>tars[i].se;
        for(int j=0;j<nJudge;j++)
        {
            double dx= judges[j].fi - tars[i].fi;
            double dy= judges[j].se - tars[i].se;
            node tmp;
            tmp.dist= sqrt(dx*dx+dy*dy);
            tmp.judge = j;
            tmp.isTar= true;
            tmp.feather= i;
            ar.push_back(tmp);
        }
    }
    for(int i=0;i<nFeather;i++)
    {
        cin >>feathers[i].fi>>feathers[i].se;
        for(int j=0;j<nJudge;j++)
        {
            double dx= judges[j].fi - feathers[i].fi;
            double dy= judges[j].se - feathers[i].se;
            node tmp;
            tmp.dist= sqrt(dx*dx+dy*dy);
            tmp.judge = j;
            tmp.feather= i;
            tmp.isTar= false;
            ar.push_back(tmp);
        }
    }
    sort(ar.begin(), ar.end(), cmp);
    double ans=0.0;
    for(int i=0;i<ar.size();i++)
    {
        if(ar[i].isTar)
        {
            if(hasTar[ar[i].judge] || usedTar[ar[i].feather]) continue;
            ans += ar[i].dist;
            hasTar[ar[i].judge] =true;
            usedTar[ar[i].feather] = true;
        }
        else
        {
            if(hasFeather[ar[i].judge] || usedFeather[ar[i].feather]) continue;
            ans+= ar[i].dist;
            hasFeather[ar[i].judge] = true;
            usedFeather[ar[i].feather]=true;
        }
    }
    cout<<fixed<<setprecision(6)<<ans;
    return 0;
}
