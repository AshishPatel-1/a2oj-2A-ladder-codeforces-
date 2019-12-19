#include<bits/stdc++.h>
using namespace std;
int fun(long long int a){
    long long int x=0;
    int cnt=0;
  while(a>0){
    if(a%10!=0){
     x+=(a%10)*pow(10,cnt++);}
    a=a/10;
  }
  return x;
}
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long long int a,b,c,ta,tb,tc;
cin>>a;
cin>>b;
c=a+b;
ta=fun(a);
tb=fun(b);
tc=fun(c);
if(tc==(tb+ta)) cout<<"YES";
else cout<<"NO";
return 0;
}