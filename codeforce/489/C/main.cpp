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
    int m,s;
    cin>>m>>s;
    int small[m],large[m];
    int s_tmp=s-1;
    if(s>m*9 || (s==0 && m >1))
    {
        cout<<-1<< " "<<-1;
        return 0;
    }
    if(s==0 && m==1)
    {
        cout<<0<< " "<<0;
        return 0;
    }
    FORD(i,m-1,1)
    {
        if(s_tmp>9){small[i]=9;s_tmp-=9;}
        else small[i]=s_tmp,s_tmp=0;
        cout<<small[i]<<endl;
    }
    small[0]=s_tmp+1;
    s_tmp=s;
    FOR(i,0,m)
    {
        if(s_tmp>9)large[i]=9,s_tmp-=9;
        else large[i]=s_tmp,s_tmp=0;
    }
    FOR(i,0,m)cout<<small[i];
    cout<<" ";
    FOR(i,0,m)cout<<large[i];
    return 0;
}
