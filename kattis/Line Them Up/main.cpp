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
string ar[25];
bool isLarger(int i, int j)
{
    int n=ar[i].length();
    int m= ar[j].length();
    for(int ind=0;ind<min(n,m);ind++)
    {
        if(ar[i][ind] < ar[j][ind]) return true;
        if(ar[i][ind] > ar[j][ind]) return false;
    }
    return n <m;
}
bool isSmaller(int i, int j)
{
    int n=ar[i].length();
    int m= ar[j].length();
    for(int ind=0;ind<min(n,m);ind++)
    {
        if(ar[i][ind] > ar[j][ind]) return true;
        if(ar[i][ind] < ar[j][ind]) return false;
    }
    return n > m;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    bool increase=true, decrease= true;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i] > ar[i+1])increase=false;
        if(ar[i] < ar[i+1])decrease= false;
    }
    if(increase) cout<<"INCREASING";
    else if(decrease)cout<<"DECREASING";
    else cout<<"NEITHER";
    return 0;
}
