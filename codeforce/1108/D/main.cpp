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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    FOR(i,1,n)
    {
        if(s[i]==s[i-1])
        {
            ans++;
            if(s[i]=='R')
            {
                if(i+1<n&&s[i+1]=='B')s[i]='G';
                else s[i]='B';
            }
            else if(s[i]=='B')
            {
                if(i+1<n && s[i+1]=='G')s[i]='R';
                else s[i]='G';
            }
            else if(s[i]=='G')
            {
                if(i+1<n && s[i+1]=='B')s[i]='R';
                else s[i]='B';
            }
        }
    }
    cout<<ans<<endl<<s;
    return 0;
}
