#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int n=ceil((double)(log(a)-log(b))/(log(2)-log(3)));
  //cout<<(double)pow((double)2/3,n)<<" "<<(double)a/(double)b<<endl;
  if(pow(2,n)== (a/__gcd(a,b)) && pow(3,n)==(b/__gcd(a,b)))cout<<n+1;
  else cout<<n;
}
