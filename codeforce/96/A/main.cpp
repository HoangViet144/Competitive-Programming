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

using namespace std;

int main()
{
    string s; cin>>s;
    int cnt=1;
    FOR(i,1,s.length())
    {
        if(s[i]==s[i-1])cnt++;
        else cnt=1;
        if(cnt>=7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
