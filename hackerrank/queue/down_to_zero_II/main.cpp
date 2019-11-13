#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
#define N 1000005

using namespace std;
int mv[N];
int main()
{
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        queue<int>dp;
        dp.push(n);
        while(!dp.empty())
        {
            int cur=dp.front();
            dp.pop();
            if(mv[cur-1]==0)
            {
                mv[cur-1]=mv[cur]+1;
                dp.push(cur-1);
            }
            if(cur-1==0)break;
            for(int i=2;i*i<=cur;i++)
            {
                if (cur%i==0)
                {
                    int a=max(i,cur/i);
                    if(mv[a]==0)
                    {
                        mv[a]=mv[cur]+1;
                        dp.push(a);
                    }
                }
            }
        }
        cout<<mv[0]<<endl;
        FOR(i,0,N)mv[i]=0;
    }

    /*int ar[n];
    int maxx=0;
    FOR(i,0,n)
    {
        cin>>ar[i];
        maxx=max(maxx,ar[i]);
    }
    mv[0]=0;

    FOR(i,1,maxx+1)
    {
        int a=-1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                a=max(j,i/j);
                if(mv[i])mv[i]=min(mv[i],min(mv[i-1],mv[a])+1);
                else mv[i]=min(mv[i-1],mv[a])+1;
            }
        }
        if(a==-1)
        {
            mv[i]=mv[i-1]+1;
        }
    }
    FOR(i,0,n)cout<<mv[ar[i]]<<endl;*/
    return 0;
}
