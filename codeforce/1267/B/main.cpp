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
    string s;
    cin>>s;
    vector<char>unduplicated;
    int ind=0;
    vector<int>numOfChar;
    unduplicated.push_back(s[0]);
    numOfChar.push_back(1);
    FOR(i,1,s.length())
    {
        if(s[i]==unduplicated[ind])numOfChar[ind]++;
        else
        {
            unduplicated.push_back(s[i]);
            numOfChar.push_back(1);
            ind++;
        }
    }
    FOR(i,0,unduplicated.size())
    {
        cout<<unduplicated[i]<<" "<<numOfChar[i]<<endl;
    }
    return 0;
}
