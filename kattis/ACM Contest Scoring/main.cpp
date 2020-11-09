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
map<char, ll> prob;
set<char> accepted;
int main()
{
    ll time;
    char problem;
    string verdict;
    ll total=0;
    while(true)
    {
        cin>>time;
        if(time==-1)break;
        cin>>problem>>verdict;
        if(verdict[0]=='r' && accepted.find(problem)== accepted.end())
        {
            accepted.insert(problem);
            int cnt=0;
            if(prob.count(problem)) cnt= prob[problem];
            total+= 20*cnt+ time;
        }
        if(verdict[0]=='w')
        {
            prob[problem]++;
        }
    }
    cout<<accepted.size()<<" "<<total;
    return 0;
}
