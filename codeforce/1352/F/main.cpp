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
        int n1,n2,n3;
        cin>>n3>>n2>>n1;
        deque<int> ar;
        for(int i=0;i<n1;i++)
        {
            if(ar.empty())ar.push_back(1);
            ar.push_back(1);
        }
        //if(!ar.empty())ar.pop_back();
        if(n2>0)
        {
            n2--;
            if(ar.empty())ar.push_back(1);
            ar.push_back(0);
        }
        for(int i=0;i<n3;i++)
        {
            if(ar.empty())ar.push_back(0);
            ar.push_back(0);
        }
        while(n2)
        {
            n2--;
            if(ar.back()==0)ar.push_back(1);
            else ar.push_back(0);
        }
        string ans="";
        while(!ar.empty())
        {
            ans+=to_string(ar.front());
            ar.pop_front();
        }
        cout<<ans<<endl;
//        int a=0,b=0,c=0;
//
//        for(int i=0;i<ans.length()-1;i++)
//        {
//            if(ar[i]=='1' && ar[i+1]=='1')a++;
//            else if(ar[i]=='0' && ar[i+1]=='0')c++;
//            else b++;
//        }
//        cout<<" fdafa"<< a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
