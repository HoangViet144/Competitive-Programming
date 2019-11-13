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
    int n;
    cin>>n;
    char ar[n][n];
    FOR(i,0,n)
    {
        FOR(j,0,n)
        {
            cin>>ar[i][j];
        }
    }
    int x_start, y_start, x_end, y_end;
    cin>>x_start>>y_start>>x_end>>y_end;
    queue <int> distancee;
    queue <pair<int,int>> point;
    vector<pair<int,int>> movee= {make_pair(-1,0),make_pair(0,1),make_pair(1,0),make_pair(0,-1)};
    point.push(make_pair(x_start,y_start));
    distancee.push(0);
    ar[x_start][y_start]='X';
    while(!point.empty())
    {
        pair<int,int> current=point.front();
        if(current.first==x_end && current.second==y_end)
        {
            cout<<distancee.front()<<endl;
            break;
        }
        FOR(i,0,4)
        {
            int x_new=current.first+movee[i].first;
            int y_new=current.second+movee[i].second;
            while(x_new>=0 && x_new<n && y_new>=0 && y_new<n && ar[x_new][y_new]!='X')
            {
                point.push(make_pair(x_new,y_new));
                distancee.push(distancee.front()+1);
                ar[x_new][y_new]='X';
                x_new+=movee[i].first;
                y_new+=movee[i].second;
            }
        }
        point.pop();
        distancee.pop();
    }
    return 0;
}
