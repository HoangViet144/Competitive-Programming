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
    string p,s;
    cin>>p>>s;
    map<char,int> occur;
    for(char c:p) occur[c]++;
    int ind=0;
    /// S= RET  occur={ , E, C, R, E, T}
    /// P=  HEERSARETOUGH
    for(char c1: p)
    {
        bool found =false;
        if(ind >=s.length())
        {
            cout<<"FAIL";
            return 0;
        }
        for(ind; ind<s.length();ind++)
        {
            char c2= s[ind];
            if(c1==c2) /// found
            {

                found=true;
                occur[c2]--;

                //cout<<c1<<" "<<c2<<" "<<ind<<" "<<occur.size()<<"\n";
                ind++;
                break;
            }
            if(occur.count(c2) && occur[c2]>0)
            {
                cout<<"FAIL";
                return 0;
            }
        }
        if(!found)
        {
            cout<<"FAIL";
            return 0;
        }

    }
    cout<<"PASS";
    return 0;
}
