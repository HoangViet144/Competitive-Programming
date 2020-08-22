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
        int a,b,c;
        cin>>a>>b>>c;
        int ans[3];
        FOR(i,0,3)ans[i]=0;
        if(a>c)
        {
            ans[0]=a/2;
            ans[1]=a-a/2;
            ans[2]=c;
        }
        else
        {
            ans[0]=c/2;
            ans[1]=c-c/2;
            ans[2]=a;
        }
        int LN=max(ans[0],max(ans[1],ans[2]));
        int sum=abs(LN-ans[0])+abs(LN-ans[1])+abs(LN-ans[2]);
        //cout<<LN<<" "<<sum<<endl;
        if(sum>=b)cout<<LN<<endl;
        else
        {
           // cout<<ceil((b-sum)/(double)3);
            cout<<LN+ceil((b-sum)/(double)3)<<endl;
        }
    }
    return 0;
}
