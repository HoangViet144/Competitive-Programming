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
const int N = 2e5+7;
set<int> ar;
int main()
{
    int n;
    cin>>n;
    FOR(i,0,n)
    {
        int tmp;
        cin>>tmp;
        ar.insert(tmp);
    }
    cout<<ar.size();
    return 0;
}
