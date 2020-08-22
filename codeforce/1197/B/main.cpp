#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <(b); i++)
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
int n;
int main()
{
    cin>>n;
    int ar[n];
    FOR(i,0,n)cin>>ar[i];
    int ind=0;
    FOR(i,0,n)if(ar[i]>ar[ind])ind=i;
    cout<<ind;
    bool check=true;
    FOR(i,0,ind)if(ar[i]>ar[i+1]){check=false;break;}
    FOR(i,ind,n-1)if(ar[i+1]>ar[i]){check=false;break;}
    if(check)cout<<"YES";
    else cout<<"NO";
    //cout << "Hello world!" << endl;
    return 0;
}
