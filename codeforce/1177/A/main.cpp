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
int k;
int main()
{
    cin>>k;
    if(k<=9)cout<<k;
    else if(k<=189)
    {
        int tmp=10+ceil((k-9)/(double)2)-1;//cout<<tmp<<endl;
        if(k%2 == 0) cout<< tmp/10;
        else cout<< tmp%10;
    }
    else if(k<=2889)
    {
        int tmp=100+ceil((k-189)/(double)3)-1;//cout<<tmp<<endl;
        if(k%3 == 1) cout<< tmp/100;
        else if(k%3 == 2)cout<< (tmp%100)/10;
        else cout << (tmp%100)%10;
    }
    else
    {
        int tmp=1000+ceil((k-2889)/(double)4)-1;//cout<<tmp<<endl;
        if(k%4 == 2) cout<< tmp/1000;
        else if(k%4 == 3)cout<< (tmp%1000)/100;
        else if(k%4 == 0)cout << (tmp%1000)%100/10;
        else cout << (tmp%1000)%100%10;
    }

    return 0;
}
