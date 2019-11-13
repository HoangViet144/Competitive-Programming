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
    string s="",tmp;
    stack<string> history;
    int n,opt,k;
    cin>>n;
    while(n--)
    {
        cin>>opt;
        if(opt==1)
        {
            cin>>tmp;
            history.push(s);
            s+=tmp;
        }
        else if(opt==2)
        {
            cin>>k;
            history.push(s);
            while(k--)s.pop_back();
        }
        else if(opt==3)
        {
            cin>>k;
            cout<<s[k-1]<<endl;
        }
        else if(opt==4)
        {
            s=history.top();
            history.pop();
        }
    }
    return 0;
}
