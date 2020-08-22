#include <bits/stdc++.h>

#define FOR(i,a,b) for(long long i = (a); i <= (b); i++)
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
long long n,x,y,t;
int main()
{
    cin>>n>>x>>y;
   // cin>>t;
    long long tmp=1,tm=1;
    FOR(i,0,x-1)tmp*=10;
    FOR(i,0,y-1)tm*=10;
    //tmp+=tm;
   // string s2=to_string(tmp+tm
    string s2="";
    s2+='1';
    FOR(i,1,x)
    {
        if(i==x-y)s2+='1';
        else s2+='0';
    }
    //cout<<t/(tmp*10)<<endl;
    string s1="";
   // string s1=to_string(t-t/(tmp*10)*(tmp*10));
    FOR(i,0,n)
    {
        char c=getchar();
        //s1+=c;
        if(i>=n-x)s1+=c;
    }
   // cout<<s2<<" "<<s1<<endl;
    int ans=0;
    if(s1.length()==s2.length())
    {
        FORD(i,s1.length()-1,1)
        {
            if(s1[i]!=s2[i])ans++;
        }
    }
    else
    {
        FORD(i,s1.length()-1,1)
        {
            if(s1[i]!=s2[i])ans++;
        }
        FORD(i,s1.length(),1)
        {
            if(s2[i]!=0)ans++;
        }
    }
    cout<<ans;
    return 0;
}
