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
    bool ar[n];
    FOR(i,0,n)
    {
        char x;
        cin>>x;
        if(x=='T')ar[i]=true;
        else ar[i]=false;
    }
    stack<int>s;
    string t;
    cin.ignore(100, '\n');
    getline(cin,t);
    //cout<<t<<endl;
    FOR(i,0,t.length())
    {
        if(t[i]==' ')continue;
        if(t[i]=='*')
        {
            bool x1=s.top();s.pop();
            bool x2=s.top();s.pop();
            s.push(x1&x2);
        }
        else if(t[i]=='+')
        {
            bool x1=s.top();s.pop();
            bool x2=s.top();s.pop();
            s.push(x1|x2);
        }
        else if(t[i]=='-')
        {
            bool x1=s.top();s.pop();
            s.push(((x1==true)?0:1));
        }
        else s.push(ar[t[i]-'A']);
        //cout<<s.top()<<endl;
    }
    cout<<(s.top()==0?"F":"T")<<endl;
    return 0;
}
