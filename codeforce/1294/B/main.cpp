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
struct point
{
    int x,y;
};
bool cmp(point A, point B)
{
    if(A.x==B.x)return A.y<B.y;
    return A.x<B.x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<point>ar;
        point t;
        t.x=0;
        t.y=0;
        ar.push_back(t);
        FOR(i,0,n)
        {
            point tmp;
            cin>>tmp.x;
            cin>>tmp.y;
            ar.push_back(tmp);
        }
        sort(ar.begin(),ar.end(),cmp);
        bool check=false;
        for(int i=0;i<ar.size()-1;i++)
        {
            if(ar[i+1].y<ar[i].y)
            {
                check=true;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(check)continue;
        cout<<"YES"<<endl;
        for(int i=0;i<ar.size()-1;i++)
        {
            for(int j=1;j<=ar[i+1].x-ar[i].x;j++)cout<<"R";
            for(int j=1;j<=ar[i+1].y-ar[i].y;j++)cout<<"U";
        }
        cout<<endl;
    }
    return 0;
}
