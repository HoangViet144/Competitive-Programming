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
#define N 100005

using namespace std;
int len[N];
int abc[4005];
int main()
{
    int n,a,b,c;
    int ar[3];

    cin>>n>>ar[0]>>ar[1]>>ar[2];
 /*   len[0][0]=0;
    len[0][1]=0;
    len[0][2]=0;
    FOR(i,1,n+1)
    {
        FOR(j,0,3)
        {
            if(i>=ar[j])
                len[i][j] = len[i-ar[j]][ar[j]+1];
        }
    }*/
    len[0]=0;
    abc[ar[0]]=1;
    abc[ar[1]]=1;
    abc[ar[2]]=1;
    abc[0]=1;
    FOR(i,1,n+1)
    {
        FOR(j,0,3)
        {
            if(i>=ar[j] && abc[i-ar[j]]==1)
            {
                len[i]=max(len[i],len[i-ar[j]]+1);
                abc[i]=1;
            }
        }
    }
    cout<<len[n];
    return 0;
}
