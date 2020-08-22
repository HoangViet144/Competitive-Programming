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
    ll n,l,k;
    cin>>n>>l>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>ans;
    FOR(i,0,n)
    {
        string t="";
        ans.push_back(t);
    }
    int start=0;
    int enD=s.length()-1;
    FOR(i,0,k)
    {
        ans[i]+=s[start++];
    }
    FOR(i,k,n)
    {
        ans[i]+=s[enD--];
    }
    FOR(i,1,l)
    {
        FOR(j,0,n)
        {
            if(j<k-1)ans[j]+=s[enD--];
            else ans[j]+=s[start++];
        }
    }
    sort(ans.begin(),ans.end());
    FOR(i,0,n)cout<<ans[i]<<endl;
    return 0;
}
