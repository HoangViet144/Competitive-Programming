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
        int n,x;
        cin>>n>>x;
        int cur_max=0;
        bool check=false;
        FOR(i,0,n)
        {
            int tmp;
            cin>>tmp;
            cur_max=max(cur_max,tmp);
            if(tmp==x)
            {
                cout<<1<<endl;
                check=true;
            }
        }
        if(check)continue;
        if(x%cur_max==0)
        {
            cout<<x/cur_max<<endl;
            continue;
        }
        if(x<cur_max)
        {
            cout<<2<<endl;
            continue;
        }
        x-=x%cur_max+cur_max;
        cout<<2+x/cur_max<<endl;
    }
    return 0;
}
