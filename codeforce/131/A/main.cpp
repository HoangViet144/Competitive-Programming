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
    string s;
    cin>>s;
    bool upcase=true;
    FOR(i,1,s.length())if(s[i]>='a' &&s[i]<='z'){upcase=false;break;}
    if(upcase)
    {
        if(s[0]<='z' && s[0]>='a')s[0]-=' ';
        else s[0]+=' ';
        FOR(i,1,s.length())
        {
            if(s[i]>='A' && s[i] <='Z')s[i]+=' ';
        }
    }
    cout <<s;
    return 0;
}
