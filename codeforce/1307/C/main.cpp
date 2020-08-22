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
int dp1[26],dp2[26][26],ans;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        int c=s[i]-'a';
        for(int j=0;j<26;j++)dp2[c][j]+=dp1[j];
        dp1[c]++;
    }
    FOR(i,0,26)ans=max(ans,dp1[i]);
    FOR(i,0,26)FOR(j,0,26)ans=max(ans,dp2[i][j]);
    cout<<ans<<endl;
    return 0;
}
