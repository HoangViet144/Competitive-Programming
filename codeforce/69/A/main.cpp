#include <iostream>

using namespace std;

int main()
{
    int n,X=0,Y=0,Z=0;cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        X+=x;Y+=y;z+=Z;
    }
    if(!X && !Y && !Z)cout<<"YES";
    else cout<<"NO";
}
