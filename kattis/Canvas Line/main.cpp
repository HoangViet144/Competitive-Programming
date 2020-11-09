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
vector<ii> canvas;
int n,p;
vector<int> pegs;
vector<int> ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n;
    canvas.push_back({-1,-1});
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        canvas.push_back({u,v});
    }
    canvas.push_back({1e9+5,1e9+5});
    sort(canvas.begin(), canvas.end());
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int u;cin>>u;
        pegs.push_back(u);
    }
    sort(pegs.begin(), pegs.end());
    int cur=0;
    vector<int> curPeg;
    curPeg.push_back(2);
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        if(cur-1>=0 && pegs[cur-1] == canvas[i].fi)cnt++;
        while(cur<p && pegs[cur]<=canvas[i].se)
        {
            if(pegs[cur] >= canvas[i].fi) cnt++;
            cur++;
        }
        if(cnt>2)
        {
            cout<<"impossible";
            return 0;
        }
        curPeg.push_back(cnt);
        //cout<<cnt<<" ";
    }
    //cout<<endl;
    for(int i=1;i<=n;i++)
    {
        if(curPeg[i]==2)continue;
        auto t=lower_bound(ans.begin(), ans.end(), canvas[i].fi);
        //if(t!=ans.end())cout<<(*t)<<"..."<<endl;
        if(t!=ans.end() && *t == canvas[i].fi) curPeg[i]++;
        vector<int> q;
        while(curPeg[i] <2)
        {
            //cout<<curPeg[i]<<endl;
            int Start= canvas[i].fi;
            int End = canvas[i].se;
            if(curPeg[i+1]==2 && canvas[i].se == canvas[i+1].fi )End--;
            if(curPeg[i-1]==2 && canvas[i-1].se == canvas[i].fi) Start++;
            while(true)
            {
                auto t1= lower_bound(ans.begin(), ans.end(), End);
                auto t2= lower_bound(pegs.begin(), pegs.end(), End);
                if((t1== ans.end() || *t1 != End) && (t2== pegs.end() || *t2!= End))
                    break;
                End--;
            }
            while(true)
            {
                auto t1= lower_bound(ans.begin(), ans.end(), Start);
                auto t2= lower_bound(pegs.begin(), pegs.end(), Start);
                if((t1== ans.end() || *t1 != Start) && (t2== pegs.end() || *t2!= Start))
                    break;
                Start++;
            }
            bool check=false;
            for(int tmp= End; tmp>= Start;tmp--)
            {
                if(!q.empty() && tmp == q[0])continue;
                auto t1= lower_bound(ans.begin(), ans.end(), tmp);
                auto t2= lower_bound(pegs.begin(), pegs.end(), tmp);
                if(t1!=ans.end() && *t1==tmp)continue;
                if(t2!=pegs.end() && *t2==tmp)continue;
                check=true;
                q.push_back(tmp);
                break;
            }
            if(!check)
            {
                cout<<"impossible";
                return 0;
            }
            curPeg[i]++;

        }
        for(int qq= q.size()-1;qq>=0;qq--)ans.push_back(q[qq]);
    }

    cout<<ans.size()<<'\n';
    for(int i: ans)cout<<i <<" ";
    return 0;
}
