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
int n;
string s;
string getStr(string s, int k)
{
    string prefix=s.substr(k-1);
    string suffix=s.substr(0,k-1);
    int n=s.length();
    if(n%2==k%2)reverse(suffix.begin(),suffix.end());
    return prefix+suffix;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        string ans=s;
        int kAns=1;
        for(int k=2;k<=n;k++)
        {
            string tmp=getStr(s,k);
            if(tmp<ans)
            {
                ans=tmp;
                kAns=k;
            }
            else if(tmp==s)kAns=min(kAns,k);
        }
        cout<<ans<<endl<<kAns<<endl;
    }
    return 0;
}
