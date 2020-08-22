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
struct a
{
    string type;
    int ind;
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        string s;
        cin>>s;
        queue<a>sub;
        vector<int>ind;
        if(s.length()>=3)
        {
            for(int i=0;i<=s.length()-3;i++)
            {
                if(s.substr(i,3)=="one")
                {
                    a tmp;
                    tmp.ind=i;
                    tmp.type="one";
                    sub.push(tmp);
                }
                if(s.substr(i,3)=="two")
                {
                    a tmp;
                    tmp.ind=i;
                    tmp.type="two";
                    sub.push(tmp);
                }
            }
        }
        while(sub.size()>1)
        {
            a tmp1=sub.front();
            sub.pop();
            a tmp2=sub.front();
            if(tmp1.ind+2==tmp2.ind && tmp1.type=="two"&&tmp2.type=="one")
            {
                ans++;
                ind.push_back(tmp2.ind+1);
                sub.pop();
            }
            else
            {
                ans++;
                ind.push_back(tmp1.ind+1+1);
                continue;
            }
        }
        while(!sub.empty())
        {
            a tmp=sub.front();
            sub.pop();
            ans++;
            ind.push_back(tmp.ind+1+1);
        }
        cout<<ans<<endl;
        for(int i=0;i<ind.size();i++)cout<<ind[i]<<" ";
        cout<<endl;
    }
    return 0;
}
