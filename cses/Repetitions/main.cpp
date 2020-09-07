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
string s;
int main()
{
    cin>>s;
    int cnt=1;
    int res=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            while(i<s.length() && s[i]==s[i-1])
            {
                cnt++;
                i++;
            }
            res= max(res,cnt);
            i--;
        }
        else
            cnt=1;
    }
    cout<<res;
    return 0;
}
