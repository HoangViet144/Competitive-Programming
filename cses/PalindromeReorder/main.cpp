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
int letter [26];
int cnt=0,ind=-1;
int main()
{
    string s;
    cin>>s;
    for (char c : s) letter [c-'A']++;
    for (int i = 0 ;i<26;i++) if(letter[i]&1) cnt++,ind=i;
    if (cnt>=2)
    {
        cout<<"NO SOLUTION";
        return 0 ;
    }
    string ans="";
    for(int i=0;i<26;i++)
        for(int j=1; j <= letter[i]/2;j++) ans+='A'+i;
    if (ind>=0)ans+='A'+ind;
    for(int i=25;i>=0;i--)
        for(int j=1; j <= letter[i]/2;j++) ans+='A'+i;
    cout<<ans;
    return 0;
}
