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
struct a
{
    int n,k;
};
bool compare(a a1,a a2)
{
    return a1.n>a2.n;
}
int main()
{
    int n,k,kk;
    cin>>n>>k;
    vector<a>ans;
    FOR(i,1,k+2)
    {
        cout<<"? ";
        FOR(j,1,k+2)
        {
            if(j!=i)cout<<j<<" ";
        }
        cout<<endl;
        cout.flush();
        cin>>kk>>n;
        a tmp;
        tmp.k=kk;
        tmp.n=n;
        ans.push_back(tmp);
    }
    sort(ans.begin(),ans.end(),compare);
    int cnt=0;
    FOR(i,0,ans.size())
    {
        if(ans[i].n==ans[0].n)cnt++;
    }
    cout<<"! "<<cnt;
    return 0;
}
