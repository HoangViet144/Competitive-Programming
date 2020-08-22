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
int sum[100005];
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    //sum[0]=(s[0]==s[1])?1:0;
    FOR(i,1,n)
    {
        sum[i]=sum[i-1]+((s[i-1]==s[i])?1:0);
       // cout<<sum[i]<< " ";
    }
    //sum[n-1]=sum[n-2];
    int q;
    cin>>q;
    //(i,0,n)cout<<sum[i]<<endl;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
       // cout<<sum[r-1]<<" "<<sum[l-1]<<endl;
        cout<<sum[r-1]-sum[l-1]<<endl;
    }
    return 0;
}
