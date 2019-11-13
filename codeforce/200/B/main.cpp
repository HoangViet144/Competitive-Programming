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
vector<int> p;
int main()
{
    cin>>n;
    int sum=0;
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        p.push_back(x);
        sum+=x;
    }
    setprecision(8);
    cout<<fixed;
    cout<<(double)sum/(100*n)*100;
    return 0;
}
