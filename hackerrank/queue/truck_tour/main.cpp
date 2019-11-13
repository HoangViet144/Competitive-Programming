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
int truckTour(vector<vector<int>> petrolpumps) {
    /*
     * Write your code here.
     */
    int n=petrolpumps.size();
    //queue<pair<int,int>> q;
    int start=0,ind=0,curr_petrol=0;
    //q.push(make_pair(petrolpumps[ind][0],petrolpumps[ind][1]));
    curr_petrol+=petrolpumps[ind][0]-petrolpumps[ind][1];
    ind++;
    while(true)
    {
        /*while(curr_petrol<0 && !q.empty())
        {
            curr_petrol-=q.front().first-q.front().second;
            q.pop();
            start=(start+1)%n;
            if(ind==0)return -1;
        }*/
       // cout<<curr_petrol<<endl;
        if(curr_petrol<0)
        {
            curr_petrol=0;
            start=ind;
            if(start==0)return -1;
        }

        //if(start==0)return -1;
        //q.push(make_pair(petrolpumps[ind][0],petrolpumps[ind][1]));
        curr_petrol+=petrolpumps[ind][0]-petrolpumps[ind][1];
        ind=(ind+1)%n;
        if(ind==start)return start;
    }
    return 0;
}
int main()
{
   int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> petrolpumps(n);
    for (int petrolpumps_row_itr = 0; petrolpumps_row_itr < n; petrolpumps_row_itr++) {
        petrolpumps[petrolpumps_row_itr].resize(2);

        for (int petrolpumps_column_itr = 0; petrolpumps_column_itr < 2; petrolpumps_column_itr++) {
            cin >> petrolpumps[petrolpumps_row_itr][petrolpumps_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = truckTour(petrolpumps);

    cout << result << "\n";

    return 0;
}
