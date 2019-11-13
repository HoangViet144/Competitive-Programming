#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
    for(int i=0;i<s.length();i++)if(s[i]>='A' && s[i]<='Z')s[i]+=' ';
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i] !='u' &&s[i]!='i')
        {
            cout<<"."<<s[i];
        }
    }
    //cout<<s;
    return 0;
}
