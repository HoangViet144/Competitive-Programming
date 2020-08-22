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
    string s;
    cin>>s;
    int n=s.length();
    //cout<<n<<endl;
    if(s=="0")
    {
        cout<<0;
        return 0;
    }
    int cur=n-1;
    while(cur>=0&&s[cur]=='0')cur--;
    if(cur==0 )cout<<(n-1)/2;
    else cout<<(n-1)/2+1;
    return 0;
}
