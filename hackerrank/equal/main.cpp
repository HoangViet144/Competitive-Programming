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
int equall(vector<int> arr) {
    int minn=arr[0];
    for(int i=0;i<arr.size();i++)minn=min(minn,arr[i]);
    int res=10000;
    for(int i=minn;i>=minn-4;i--)
    {
        int ans=0;
        for(int j : arr)
        {
            //cout<<j;
            int tmp=j-i;
            ans+=tmp/5+tmp%5/2+tmp%5%2;
        }
       // cout<<ans<<endl;
        res=min(res,ans);
    }
    return res;

}
int main()
{
    vector<int>ar{10,7,12};
    cout<<equall(ar);
    return 0;
}
