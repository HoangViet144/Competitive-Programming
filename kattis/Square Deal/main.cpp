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
    int ar[3][2];
    for(int i=0;i<3;i++)cin>>ar[i][0]>>ar[i][1];
    int id[]={0,1,2};
    int cnt=0;
    do
    {
        for(int i=1;i<8;i++)
        {
            int w=0, h=1;
            int i1= id[0], i2=id[1], i3=id[2];
            cnt |= ar[i1][w] == ar[i2][w] && ar[i2][w]== ar[i3][w] && ar[i1][w]== ar[i1][h]+ar[i2][h]+ar[i3][h];
            cnt |= ar[i1][h] == ar[i2][h] && ar[i2][h]== ar[i3][h] && ar[i1][h]== ar[i1][w]+ar[i2][w]+ar[i3][w];
            cnt |= ar[i1][w] == ar[i2][w] && ar[i1][h] + ar[i2][h] == ar[i3][h] && ar[i1][w]+ar[i3][w]== ar[i3][h];
            cnt |= ar[i1][h] == ar[i2][h] && ar[i1][w] + ar[i2][w] == ar[i3][w] && ar[i1][h]+ar[i3][h]== ar[i3][w];
            if(i%4==0)swap(ar[i1][0], ar[i1][1]);
            if(i%2==0)swap(ar[i2][0], ar[i2][1]);
            swap(ar[i3][0], ar[i3][1]);
        }
    }
    while(next_permutation(id, id+3));
    cout<< (cnt?"YES":"NO");
    return 0;
}
