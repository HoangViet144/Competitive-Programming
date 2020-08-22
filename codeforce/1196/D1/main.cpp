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
int q,n,k;
string s;
const string x="RGB";
int main()
{

    cin>>q;
    while(q--)
    {
        int ans=1e9;
        cin>>n>>k>>s;
        FOR(i,0,n-k+1)
        {
            FOR(ind,0,3)
            {
                int ansCur=0;
                FOR(pos,0,k)
                {
                    if(s[pos+i]!=x[(pos+ind)%3])ansCur++;
                }
                ans=min(ans,ansCur);
            }
        }
        cout<<ans;
    }

    return 0;
}
