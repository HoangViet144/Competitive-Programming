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
    while(n--)
    {
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        int a=x1-x2,b=y1-y2,c=-a*x1-b*y1;
        int d=x3-x4,e=y3-y4,f=-d*x3-e*x4;
        if((a*x3+b*y3+c)*(a*x4+b*y4+c)<0 && (d*x1+e*y1+f)*(d*x2+e*y2+f)<0)
        {
            cout<<fixed;
            cout<<setprecision(2)<<min(abs(a*x3+b*y3+c)/(double)sqrt((double)a*a+(double)b*b),abs(a*x4+b*y4+c)/(double)sqrt((double)a*a+(double)b*b));
        }
        else cout<<"0.00"<<endl;
    }
    return 0;
}
