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
    int n;
    cin>>n;
    ii ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].fi;
        ar[i].se=i+1;
    }

    vector<ii>ans;
    while(true)
    {
        sort(ar,ar+n);
        bool check=false;
        if(ar[n-2].fi)
        {
            ans.push_back({ar[n-2].se, ar[n-1].se});
            ar[n-2].fi--;
            ar[n-1].fi--;
            check=true;
        }

        if(!check)
        {
            for(ii&t: ar)
            {
                if(t.fi)
                {
                    cout<<"no";
                    return 0;
                }
            }
        }
        bool equal0=true;
        for(ii&t: ar)
        {
            if(t.fi)
            {
                equal0=false;
            }
        }
        if(equal0)break;
    }
    cout<<"yes\n";
    for (ii &t: ans)
    {
        cout<<t.fi<<" "<<t.se<<'\n';
    }
    return 0;
}
