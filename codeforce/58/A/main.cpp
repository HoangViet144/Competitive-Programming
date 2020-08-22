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

int main()
{
    string s;
    cin>>s;
    if(s.find('h')==-1){cout<<"NO";return 0;}
    s=s.substr(s.find('h')+1);
   // cout<<s<<endl;
    if(s.find('e')==-1){cout<<"NO";return 0;}
    s=s.substr(s.find('e')+1);
   // cout<<s<<endl;
    if(s.find('l')==-1){cout<<"NO";return 0;}
    s=s.substr(s.find('l')+1);
    //    cout<<s<<endl;
    if(s.find('l')==-1){cout<<"NO";return 0;}
    s=s.substr(s.find('l')+1);
    //    cout<<s<<endl;
    if(s.find('o')==-1){cout<<"NO";return 0;}
    s=s.substr(s.find('o')+1);
    //    cout<<s<<endl;
    cout<<"YES";
    return 0;
}

