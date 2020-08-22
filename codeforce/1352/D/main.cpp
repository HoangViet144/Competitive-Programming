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
        int n;
        cin>>n;
        deque<int> ar;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ar.push_back(x);
        }
        int a=0,b=0, curA=0,curB=0;
        int indA=0, indB=n-1;
        int turn=0;
        while(!ar.empty())
        {
            bool A=false;
            do
            {
                if(ar.empty())break;
                A=true;
                curA+=ar.front();
                a+=ar.front();
                ar.pop_front();
            }
            while(curA<=curB);
            if(A)turn++;
            curB=0;
            bool B=false;
            do
            {
                if(ar.empty())break;
                b+=ar.back();
                B=true;
                curB+=ar.back();
                ar.pop_back();
            }
            while(curB<=curA);
            curA=0;
            if(B)turn++;
        }
        cout<<turn<<" "<<a<<" "<<b<<endl;
    }
    return 0;
}
