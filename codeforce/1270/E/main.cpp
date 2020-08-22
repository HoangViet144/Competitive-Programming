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
    ll x,y;
    int ind;
};
struct dis
{
    point a,b;
    ll d;
};
bool cmp(dis a,dis b)
{
    return a.d<b.d;
}
int main()
{
    int n;
    cin>>n;
    vector<point> ar(n);
    FOR(i,0,n)
    {
        cin>>ar[i].x>>ar[i].y;
        ar[i].ind=i+1;
    }
    vector<dis> edge;
    FOR(i,0,n-1)
    {
        FOR(j,i+1,n)
        {
            dis tmp;
            tmp.a=ar[i];
            tmp.b=ar[j];
            tmp.d=(ar[i].x-ar[j].x)*(ar[i].x-ar[j].x)+(ar[i].y-ar[j].y)*(ar[i].y-ar[j].y);
            edge.push_back(tmp);
        }
    }
    sort(edge.begin(), edge.end(),cmp);
//    FOR(i,0,edge.size())
//    {
//        cout<<edge[i].d<<"("<<edge[i].a.ind<<")"<<"("<<edge[i].b.ind<<")"<< " ";
//    }
//    cout<<endl;
    set<int>A;
    FOR(i,1,edge.size())
    {
        if(edge[i-1].d==edge[i].d)
        {
            if(edge[i].a.ind==edge[i-1].a.ind || edge[i].a.ind==edge[i-1].b.ind)
            {
                A.insert(edge[i].a.ind);
            }
            else if(edge[i].b.ind==edge[i-1].a.ind || edge[i].b.ind==edge[i-1].b.ind)
            {
                A.insert(edge[i].b.ind);
            }
            else
            {
                A.insert(edge[i].a.ind);
                A.insert(edge[i-1].a.ind);
            }
        }
    }
    if(A.size()==0)A.insert(1);
    cout<<A.size()<<endl;
    set <int> :: iterator itr;
    for (itr = A.begin(); itr != A.end(); ++itr)
    {
        cout << *itr<<" ";
    }
    return 0;
}
