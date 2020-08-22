#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll minn(ll a, ll b)
{
    if(a<b)return a;
    return b;
}
int main()
{
    int q;
    cin>>q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin,s);
        if(s=="")
        {
            cout<<0<<endl<<endl;
            continue;
        }
        sort(s.begin(),s.end());
        ll d=0,l=0,u=0,r=0;
        for(ll i=0;i<=s.length();i++)
        {
            if(s[i]=='L')l++;
            if(s[i]=='R')r++;
            if(s[i]=='D')d++;
            if(s[i]=='U')u++;
        }
        ll rl=minn(l,r);
        ll ud=minn(u,d);
        if(rl==0 && ud>0)
        {
            cout<<2<<endl<<"UD"<<endl;
            continue;
        }
        if(ud==0 && rl >0)
        {
            cout<<2<<endl<<"LR"<<endl;
            continue;
        }
        cout<<(rl+ud)*2<<endl;
        for(ll i=0;i<rl;i++)cout<<"L";
        for(ll i=0;i<ud;i++)cout<<"D";
        for(ll i=0;i<rl;i++)cout<<"R";
        for(ll i=0;i<ud;i++)cout<<"U";
        cout<<endl;
       /* ll tmp=d;
        tmp=minn(tmp,l);
        tmp=minn(tmp,u);
        tmp=minn(tmp,r);
        l-=tmp;
        d-=tmp;
        u-=tmp;
        r-=tmp;
        if(d>0 && u >0)
        {
            if(tmp==0)
            {
                cout<<2<<endl;
                cout<<"DU"<<endl;
                continue;
            }
            cout<<tmp*4+2<<endl;
            for(ll i=0;i<tmp;i++)cout<<"L";
            for(ll i=0;i<tmp;i++)cout<<"D";
            for(ll i=0;i<tmp-1;i++)cout<<"R";
            cout<<"D";
            cout<<"R";
            cout<<"U";
            for(ll i=0;i<tmp;i++)cout<<"U";
        }
        else if(l>0 && r>0)
        {
            if(tmp==0)
            {
                cout<<2<<endl;
                cout<<"LR"<<endl;
                continue;
            }
            cout<<tmp*4+2<<endl;
            for(ll i=0;i<tmp;i++)cout<<"L";
            cout<<"L";
            cout<<"D";
            cout<<"R";
            for(ll i=0;i<tmp-1;i++)cout<<"D";
            for(ll i=0;i<tmp;i++)cout<<"R";
            for(ll i=0;i<tmp;i++)cout<<"U";
        }
        else
        {
            cout<<tmp*4<<endl;
            for(ll i=0;i<tmp;i++)cout<<"L";
            for(ll i=0;i<tmp;i++)cout<<"D";
            for(ll i=0;i<tmp;i++)cout<<"R";
            for(ll i=0;i<tmp;i++)cout<<"U";
        }
        cout<<endl;*/
    }
    return 0;
}
