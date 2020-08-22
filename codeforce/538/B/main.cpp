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
int ar[]={1,11,111,1111,11111,111111};
int ar1[]={0,10,100,1000,10000,100000};
int main()
{
    int n;
    cin>>n;
    vector<int>res;
    int cnt=0;
    while(n)
    {
        int tmp=n;
        cnt++;
        int ans=0,x=1;
        while(tmp)
        {
            if(tmp%10)ans+=x;
            x*=10;
            tmp/=10;
        }
        n-=ans;
        res.push_back(ans);
    }
    cout<<cnt<<endl;
    FOR(i,0,res.size())cout<<res[i]<<" ";
    return 0;
}
