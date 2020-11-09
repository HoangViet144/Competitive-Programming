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
int visit[101];
int main()
{
    string s;
    getline(cin,s);
    int k=1;
    for(char c:s)if(c==' ')k++;
    int n;
    //cin.ignore(100);
    cin>>n;
    vector<string> ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<vector<string>>team(2,vector<string>());
    int ind=0;
    while(n)
    {
        int cur= (k-1)%n;
        team[ind%2].push_back(ar[cur]);
        vector<string> c;
        for(int i=0;i<n;i++)
        {
            int next= (cur+1+i)%n;
            if(next != cur)c.push_back(ar[next]);
        }
        n--;
        ar=c;
        ind++;
    }
    cout<<(int)team[0].size()<<'\n';
    for(string t: team[0])cout<<t<<'\n';
    cout<<(int)team[1].size()<<'\n';
    for(string t: team[1])cout<<t<<'\n';
    return 0;
}
