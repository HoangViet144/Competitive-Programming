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
    int t;
    cin>>t;
    while(t--)
    {
        int ar[26+26+4];
        FOR(i,0,26+26+4)ar[i]=0;
        bool letter[26];
        FOR(i,0,26)letter[i]=false;
        string s;
        cin>>s;
        int cur=26+2;
        ar[cur]=s[0];
        letter[s[0]-'a']=true;
        bool check=false;
        FOR(i,1,s.length())
        {
            if(letter[s[i]-'a'])
            {
                if(ar[cur-1]==s[i])cur--;
                else if(ar[cur+1]==s[i])cur++;
                else
                {
                    check=true;
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                if(ar[cur+1]==0)ar[++cur]=s[i];
                else if(ar[cur-1]==0)ar[--cur]=s[i];
                else
                {
                    check=true;
                    cout<<"NO"<<endl;
                }
            }
            letter[s[i]-'a']=true;
        }
        if(check)continue;
        string ans="";
        FOR(i,0,26+26+4)if(ar[i]!=0)ans+=char(ar[i]);
        FOR(i,0,26)if(letter[i]==false)ans+=char(i+'a');
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
