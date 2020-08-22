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
    queue<int>in,out;
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        in.push(x);
    }
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        out.push(x);
    }
    int ans=0;
    map<int,int>popp;
    while(!out.empty())
    {
        if(out.front()==in.front())
        {
            out.pop();
            in.pop();
        }
        else
        {
            while(!out.empty() && out.front()!=in.front())
            {
                if(popp[in.front()]==1)
                {
                    in.pop();
                    continue;
                }
                int tmp=out.front();
                out.pop();
                ans++;
                popp[tmp]=1;
            }
        }
    }
    cout<<ans;
    return 0;
}
