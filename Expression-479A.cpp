#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,ans;
cin>>a;
cin>>b;
cin>>c;
ans=a*b*c;
if((a*b+c)>ans) ans=(a*b+c);
if((a+b*c)>ans) ans=(a+b*c);
if((a+b)*c>ans) ans=(a+b)*c;
if(a*(b+c)>ans) ans=a*(b+c);
if((a+b+c)>ans) ans=a+b+c;
cout<<ans<<endl;
return 0;
}