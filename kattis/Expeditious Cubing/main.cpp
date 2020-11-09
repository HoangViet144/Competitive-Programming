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
const double epsilon = 1e-7;
int main()
{
    vector<double>t;
    long double finalScore;
    long double Max= 0.0, Min= 50.0, Sum=0.0;
    for(int i=0;i<4;i++)
    {
        long double u;

        cin>>u;
        Max= max(u,Max);
        Min= min(u,Min);
        Sum +=u;
    }
    cin>>finalScore;
    //cout<<Sum<< " "<<Min<<" "<<Max;
    if( (Sum - Min)/3 - (1e-9) <= finalScore)cout<<"infinite";
    else if(finalScore-(1e-9) < (Sum - Max)/3) cout<<"impossible";
    else cout<<fixed<<setprecision(2)<< 3.0*finalScore +Max+Min-Sum;
    return 0;
}
