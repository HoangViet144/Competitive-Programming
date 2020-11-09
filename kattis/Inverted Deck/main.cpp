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
vector<int>cards;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int card;
        cin>>card;
        cards.push_back(card);
    }
    int Start=-1, End=-1;
    for(int i=1;i<n;i++)
    {
        if(cards[i] >=cards[i-1]) continue;
        i--;
        int j = i;
        while(i >=1 && cards[i]== cards[i-1]) i--;
        while(j+1<n &&cards[j+1]<=cards[j])j++;
        Start=i;
        End=j;
        break;
    }
    if(Start==-1)
    {
        cout<<1<<" "<<1;
        return 0;
    }
    vector<int>after;
    for(int i=0;i<Start;i++)after.push_back(cards[i]);
    for(int i=End; i>=Start; i--) after.push_back(cards[i]);
    for(int i=End+1; i <n;i++)after.push_back(cards[i]);
    for(int i=1;i<n;i++)
    {
        if(after[i]<after[i-1])
        {
            cout<<"impossible";
            return 0;
        }
    }
    cout<< Start+1<<" "<<End+1;
    return 0;
}
