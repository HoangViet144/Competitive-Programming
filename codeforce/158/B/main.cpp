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

int main()
{
    int n;
    int x;
    cin>>n;
    int Gr[5];
    FOR(i,0,5)Gr[i]=0;
    FOR(i,0,n)
    {

        cin>>x;
        Gr[x]++;
    }
  //  FOR(i,0,5)cout<<Gr[i]<<endl;
    int res=0;
    res=Gr[4]+min(Gr[1],Gr[3]);
    if(Gr[3] >= Gr[1]) res+=Gr[3]-Gr[1]+Gr[2]/2+ Gr[2]%2;
    else
    {
        res += ceil((Gr[1]-Gr[3]+Gr[2]*2)/(double)4);
    }

    cout<<res;
    return 0;
}
