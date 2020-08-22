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
    int t;
    cin>>t;
    while(t--)
    {
        int ar[3];
        FOR(i,0,3)cin>>ar[i];
        sort(ar,ar+3);
        if(ar[0]>=4)
        {
            cout<<7<<endl;
            continue;
        }
        if(ar[0]==0)
        {
            if(ar[1]==0)
            {
                if(ar[2]==0){cout<<0<<endl;continue;}
                else {cout<<1<<endl;continue;}
            }
            else if(ar[1]==1){cout<<2<<endl;continue;}
            else {cout<<3<<endl;continue;}
        }
        if(ar[0]==1)
        {
            if(ar[1]==1){cout<<3<<endl;continue;}
            else {cout<<4<<endl;continue;}
        }
        if(ar[0]==2)
        {
            if(ar[1]==2 && ar[2]==2){cout<<4<<endl;continue;}
            else {cout<<5<<endl;continue;}
        }
        if(ar[0]==3)
        {
            cout<<6<<endl;continue;
        }
    }
    return 0;
}
