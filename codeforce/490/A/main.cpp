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
vector<int> p1,p2,p3;
int main()
{
    int n,x;

    cin >>n;
    int ar[n];
    FOR(i,0,n)
    {
        cin>>ar[i];
        if(ar[i]==1)p1.push_back(i+1);
        if(ar[i]==2)p2.push_back(i+1);
        if(ar[i]==3)p3.push_back(i+1);
    }
    int cnt=min(p1.size(),min(p2.size(),p3.size()));
    cout<<cnt<<endl;
    if(cnt)
    {
        FOR(i,0,cnt)
        {
            cout<<p1[i]<<" "<<p2[i]<<" "<<p3[i]<<endl;
        }
    }
    return 0;
}
