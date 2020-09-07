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
    int t;
    cin>>t;
    while(t--)
    {
        ll y,x;
        cin>>y>>x;
        if (y>x)
        {
            if (y%2==0)
                cout<<y*y-x+1<<endl;
            else
                cout<<(y-1)*(y-1)+x<<endl;
        }
        else
        {
            if (x%2==1)
                cout<<x*x-y+1<<endl;
            else
                cout<<(x-1)*(x-1)+y<<endl;


        }
    }
    return 0;
}
