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
    int ar[3];
    cin>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    int a= ar[1]-ar[0];
    int b= ar[2]-ar[1];
    if(a==b)cout<<ar[2]+a;
    else if(a<b)cout<<ar[1]+a;
    else cout<<ar[0]+b;
    return 0;
}
