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
int n,m;
class poll
{
public:
    int *ar;
    int cur;
    int id;
    poll(){;}
    poll(int size)
    {
        cur=0;
        ar=new int[size];
    }
    void push(int value)
    {
        ar[cur++]=value;
    }
    int getEle(int ind)
    {
        return ar[ind];
    }
    void setID(int Id)
    {
        id=Id;
    }
    int getID()
    {
        return id;
    }
};
bool compare(poll A, poll B)
{
    return A.getEle(n-1)<B.getEle(n-1);
}
int main()
{

    cin>>n>>m;
    vector<poll>ar;
    FOR(i,0,m)
    {
        poll tmp(n);
        FOR(j,0,n)
        {
            int x;
            cin>>x;
            tmp.push(x);
        }
        tmp.setID(i+1);
        ar.push_back(tmp);
    }
    int votes[n];
    FOR(i,0,n)votes[i]=0;
    vector<poll>rest;
    FOR(i,0,m)
    {
        int curMax=0;
        bool onlyMax=true;
        FOR(j,0,n)curMax=max(curMax,ar[i].getEle(j));
        FOR(j,0,n-1)
        {
            if(curMax==ar[i].getEle(j))onlyMax=false;
        }
        if(curMax==ar[i].getEle(n-1)&& onlyMax==true)
        {
            rest.push_back(ar[i]);
            continue;
        }
        FOR(j,0,n)votes[j]+=ar[i].getEle(j);
    }
    if(rest.size()==0)
    {
        cout<<0;
        return 0;
    }
    sort(rest.begin(),rest.end(),compare);
    FOR(i,0,rest.size())
    {
        cout<<rest[i].getID()<<endl;
    }
    int cur=0;
    for(cur;cur<rest.size();cur++)
    {
        FOR(j,0,n)votes[j]+=rest[cur].getEle(j);
        int curMax=0;
        FOR(j,0,n)curMax=max(curMax,votes[j]);
        bool onlyMax=true;
        FOR(j,0,n-1)
        {
            if(curMax==votes[j])onlyMax=false;
        }
        if(curMax==votes[n-1]&& onlyMax==true)
        {
            break;
        }
    }
    cout<<rest.size()-cur<<endl;
    for(int i= cur;i<rest.size();i++)
    {
        int temp=rest[i].getID();
        cout<<temp<< " ";
    }
    return 0;
}
