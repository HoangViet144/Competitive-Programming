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
    int n;
    cin>>n;
    int x=0;
    vector<int>ar;
    FOR(i,0,n)
    {
        int tmp;
        cin>>tmp;
        x=max(x,tmp);
        ar.push_back(tmp);
    }
    if(x==n)
    {
        cout<<"good job";
        return 0;
    }
    int num[x+1];
    FOR(i,0,x+1)num[i]=0;
    FOR(i,0,ar.size())num[ar[i]]++;
    FOR(i,1,x+1)if(!num[i])cout<<i<<endl;
    return 0;
}
