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
    set<int>alphabet[26];
    string s;
    cin>>s;
    int n=s.length();
    FOR(i,0,n)alphabet[s[i]-'a'].insert(i+1);
    int q;
    cin>>q;
    while(q--)
    {
        int opt,l,r;
        char tmp;
        cin>>opt;
        if(opt==1)
        {
            cin>>l>>tmp;
            alphabet[s[l-1]-'a'].erase(l);
            s[l-1]=tmp;
            alphabet[s[l-1]-'a'].insert(l);
        }
        if(opt==2)
        {
            int cnt=0;
            cin>>l>>r;
            FOR(i,0,26)
            {
                if(alphabet[i].upper_bound(r) != alphabet[i].lower_bound(l))cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}
