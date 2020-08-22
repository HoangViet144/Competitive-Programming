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
    string a[n];
    FOR(i,0,n-1)cin>>a[i];
    int b[30];
    FOR(i,0,29)b[i]=0;
    FOR(i,0,n-1)b[a[i][0]-'a']++;
    int ans=0;
    //FOR(i,0,29)cout<<b[i]<<endl;
    FOR(i,0,29)
    {
        if(b[i]>2)
        {
            int x=b[i]/2;
            int y=b[i]-x;
            //cout<<x<<" "<<y<<endl;
            ans+=x*(x-1)/2+y*(y-1)/2;
        }
    }
    cout<<ans;
    return 0;
}
