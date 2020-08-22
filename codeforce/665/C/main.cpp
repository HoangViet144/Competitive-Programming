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
    ll ans=0;
    string s;
    cin>>s;
    FOR(i,1,s.length())
    {
        if(s[i]==s[i-1])
        {
            ans++;

            FOR(j,0,24)
            {
                if((char)('a'+j)!=s[i-1])
                {
                    if(i+1<s.length() && (char)('a'+j)!=s[i+1])
                    {
                        s[i]='a'+j;
                        break;
                    }
                    else if(i+1>=s.length())
                    {
                        s[i]='a'+j;
                        break;
                    }
                }
            }
            i++;
        }
    }
    cout<<s;
   // cout<<endl<<ans;
    return 0;
}
