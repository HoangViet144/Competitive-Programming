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
    string s;
    while(getline(cin,s))
    {
        stack<int>a;
        queue<int>b;
        priority_queue<int>c;
        int n=stoi(s);
        bool check1=true,check2=true,check3=true;
        FOR(i,0,n)
        {
            getline(cin,s);
            int type=stoi(s.substr(0,s.find(' ')));
            int ans=stoi(s.substr(s.find(' ')+1));
            if(type==1)
            {
                a.push(ans);
                b.push(ans);
                c.push(ans);
            }
            if(type==2)
            {
                if(a.empty()||b.empty()||c.empty()){check1=false;check2=false;check3=false;continue;}
                if( ans!=a.top())check1=false;
                a.pop();
                if(ans!=b.front())check2=false;
                b.pop();
                if(ans!=c.top())check3=false;
                c.pop();
            }
        }
        if(!check1 && !check2 && !check3)cout<<"impossible"<<endl;
        else if(check1 && !check2 && !check3)cout<<"stack"<<endl;
        else if(!check1 && check2 && !check3)cout<<"queue"<<endl;
        else if(!check1 && !check2 && check3)cout<<"priority queue"<<endl;
        else cout<<"not sure"<<endl;
    }
    return 0;
}
