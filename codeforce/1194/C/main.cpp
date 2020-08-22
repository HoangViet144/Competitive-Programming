#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <(b); i++)
#define FORD(i,a,b) for(int i = (a); i >= (b); i--)
#define REP(i,a) for(int i = 0; i < (a); i++)
#define REPD(i,a) for(int i = (a)-1; i >= 0; i--)
#define sz(a) (int)a.size()
#define ALL(a) a.begin(),a.end()

#define ii pair<int,int>
#define fi first
#define se second
#define ll long long
using namespace std;
int q;
int main()
{
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        int a[27],b[27],c[27];
        FOR(i,0,27)a[i]=0,b[i]=0,c[i]=0;
        FOR(i,0,s.length())a[s[i]-'a']++;
        FOR(i,0,t.length())b[t[i]-'a']++;
        FOR(i,0,p.length())c[p[i]-'a']++;
        string ans="YES";
        int ind=0;
        FOR(i,0,s.length())
        {
            bool check=false;
            FOR(j,ind,t.length())
            {
                if(s[i]==t[j])
                {
                    check=true;
                    ind=j+1;
                    break;
                }
            }
            if(!check){ans="NO";break;}
        }
        FOR(i,0,27)
        {
            if(a[i]==b[i])continue;
            else if(a[i]>b[i]){ans="NO";break;}
            else
            {
                if(b[i]-a[i]>c[i]){ans="NO";break;}
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
