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
        string s;
        cin>>s;
        int n=s.length();
        int ar[28];
        set<char> del;
        FOR(i,0,28)ar[i]=0;
      //  FOR(i,0,n)ar[s[i]-'a']++;
        FOR(i,1,s.length())
        {
            if(s[i]==s[i-1])
            {
             //   cout<<s.substr(0,i-1)<<" "<<s.substr(i+1)<<endl;
                s.erase(i-1,2);
                i-=1;
            }
        }
        sort(s.begin(),s.end());
        FOR(i,0,s.length())
        {
            ar[s[i]-'a']++;
        }
        FOR(i,0,28)
        {
            //cout<<ar[i]<<endl;
            if(ar[i])cout<<(char)(i+'a');
        }
        cout<<endl;
    }
    return 0;
}
