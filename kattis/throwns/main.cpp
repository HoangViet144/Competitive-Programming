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
    int n,k;
    cin>>n>>k;
    /*cin.ignore(100,'\n');
    string s;
    getline(cin,s);*/
    stack<int>ss;
    int ind=0;
    ss.push(ind);
    FOR(i,0,k)
    {
        string s;
        cin>>s;
        if(s=="undo")
        {
            cin>>s;
            int tmp=stoi(s);
            while(tmp--)
            {

                ss.pop();
            }
            ind=ss.top();
            continue;
        }
        int tmp=stoi(s);
        ind=(ind+tmp)%n;
        if(ind<0)ind+=n;
        ss.push(ind);
    }
    cout<<ind;
    return 0;
}
