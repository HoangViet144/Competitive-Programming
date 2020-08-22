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

using namespace std;
int t;
bool check(string tmp)
{
    FOR(i,0,tmp.length()-1)
    {
        if(abs(tmp[i]-tmp[i+1])==1)return false;
    }
    return true;
}
int main()
{
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string odd="",even="";
        FOR(i,0,s.length())
        {
            if(s[i]%2==0)even+=s[i];
            else odd+=s[i];
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        if(check(even+odd))cout<<even+odd<<endl;
        else if(check(odd+even))cout<<odd+even<<endl;
        else cout<<"No answer"<<endl;
    }
    return 0;
}
