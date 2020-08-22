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
int q,n;
//int dir[3];
int main()
{
    cin >>q;
    while(q)
    {
        q--;
        cin>>n;
        int minX=-1e5,maxX=1e5,minY=-1e5,maxY=1e5;
        int x,y,f1,f2,f3,f4;

        while(n--)
        {
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(f1==0)minX=max(minX,x);
            if(f2==0)maxY=min(maxY,y);
            if(f3==0)maxX=min(maxX,x);
            if(f4==0)minY=max(minY,y);
        }

        if(minX>maxX || minY>maxY)cout<<"0"<<endl;
        else cout<<1<<" "<<minX<<" "<<minY<<endl;
    }
    return 0;
}
