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
int n,m,k;
const int N = 2e5+5;
vector<int>a(N);
vector<int>b(N);
int main()
{
    cin>>n>>m>>k;
    FOR(i,0,n)cin>>a[i];
    FOR(i,0,m)cin>>b[i];
    sort(a.begin(), a.begin()+n);
    sort(b.begin(), b.begin()+m);
    int i=0,j=0,ans=0;
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            //cout<<a[i]<<" "<<b[j]<<endl;
            i++;
            j++;
            ans++;
            continue;
        }
        if(a[i]>b[j])j++;
        else i++;
    }
    cout<<ans;
    return 0;
}
