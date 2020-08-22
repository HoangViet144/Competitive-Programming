#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    FOR(i,1,n)cin>>ar[i];
    int minn=ar[1],maxx=ar[1],cnt=0;
    FOR(i,2,n)
    {
        if(ar[i]<minn)
        {
            cnt++;
            minn=ar[i];
        }
        else if(ar[i]>maxx)
        {
          //  cout<<"max ne"<<endl;
            cnt++;
            maxx=ar[i];
        }
       // cout<<cnt<<endl;
    }
    cout<<cnt;
    return 0;
}
