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
    string s;
    cin>>s;
    int n=s.length();
    vector<int>openBrac;
    vector<int>closeBrac;
    FOR(i,0,n)
        if(s[i]=='(')openBrac.push_back(i);
        else closeBrac.push_back(i);
    sort(openBrac.begin(),openBrac.end());
    sort(closeBrac.begin(),closeBrac.end(),greater<int>());
    vector<int>ans;
    for(int i=0;i<min(openBrac.size(),closeBrac.size());++i)
        if(openBrac[i]<closeBrac[i])
        {
            ans.push_back(openBrac[i]);
            ans.push_back(closeBrac[i]);
        }
        else break;
    sort(ans.begin(),ans.end());
    if(ans.size()==0)
    {
        cout<<0;
        return 0;
    }
    cout<<1<<endl;
    cout<<ans.size()<<endl;
    FOR(i,0,ans.size())cout<<ans[i]+1<<" ";
    return 0;
}
