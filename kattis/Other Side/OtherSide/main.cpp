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
    int w,s,c,k;
    cin>>w>>s>>c>>k;
    if(s<k || w+c<k)cout<<"YES";
    else if(s==k && w+c <=2*k)cout<<"YES";
    else if(w+c==k && s<=2*k)cout<<"YES";
    else cout<<"NO";
    return 0;
}
