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
ll n , total=0;
int main()
{
    cin>>n;
    total = n*(n+1)/2;
    if (total&1)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    total/=2;
    vector<int> set1;
    vector<int> set2;
    while(n)
    {
        if(total >=n)
        {
            total-=n;
            set1.push_back(n);
        }
        else
            set2.push_back(n);
        n--;
    }
    cout<<set1.size()<<endl;
    for (int ele : set1)cout<<ele << " ";
    cout<<endl;
    cout<<set2.size()<<endl;
    for(int ele: set2)cout<<ele << " ";
    return 0;
}
