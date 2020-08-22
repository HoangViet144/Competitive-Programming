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
int Mon[]={31,28,31,30,31,30,31,31,30,31,30,31};

void printAns(int day)
{
    day %= 365;
    int cnt=0;
    while(day>=Mon[cnt])
    {
        day-=Mon[cnt++];
    }
    //cout<<cnt+1<<"-"<<ind[0]<<endl;
    printf("%02d-%02d",cnt+1,day);
}

int main()
{
    int n;
    cin>>n;
    string s[n];
    FOR(i,0,n)
    {
        string r;
        cin >> r;
        cin >> s[i];
    }
    vector<int>date;
    FOR(i,0,n)
    {
//        cout<<s[i].substr(0,2) << "-----";
//        cout << s[i].substr(3) << "\n";
        int month= stoi(s[i].substr(0,2));
        int day= stoi(s[i].substr(3));
        int cnt=0;
        FOR(j,0,month-1)cnt+=Mon[j];
        cnt+=day;
       // cout<<cnt<<endl;
        date.push_back(cnt);
    }
    sort(date.begin(),date.end());
    date.push_back(date[0]+365);
    int max_cur=0;
    for(int i=0;i<date.size()-1;i++)
    {
        if((date[i+1]-date[i])>max_cur)
        {
            //ind=date[i+1]-1;
            max_cur=date[i+1]-date[i];
        }
    }
   // cout<<max_cur<<endl;
    int today=0;
    FOR(i,0,9)today+=Mon[i];
    today+=28;
    vector<int>ind;
    for(int i=0;i<date.size()-1;i++)
    {
        if((date[i+1]-date[i])==max_cur)
        {
            ind.push_back(date[i+1]-1);
        }
    }
    if(ind.size()==1)
    {
       // cout << ind[0];
        printAns(ind[0]);
        return 0;
    }
    int cur=10000;
    int ans = -1;

   // cout << "\n"; for(auto &x: ind) cout << x << " "; cout << "\n";

    for(int i=0;i<ind.size();i++)
    {
        int temp = ind[i]-today;
        if (temp < 0) temp+=365;
        if(temp<cur)
        {
            cur=temp;
            ans = ind[i];
        }
    }
    printAns(ans);
    return 0;
}
