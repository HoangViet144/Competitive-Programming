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
    long long cnt=0;
    string s;
    cin>>s;
    FOR(i,0,s.length())
    {
        int ar[27];
        FOR(j,0,27)ar[j]=0;
        FOR(j,i+1,s.length())
        {
            if(s[j]==s[i])break;
            if(ar[s[j]-'a']==0)cnt++;
            ar[s[j]-'a']++;
        }
    }
    cout<<cnt;
    return 0;
}
