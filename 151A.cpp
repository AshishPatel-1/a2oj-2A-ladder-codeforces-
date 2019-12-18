#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,x,d,p,nl,np;
cin>>n>>k>>l>>x>>d>>p>>nl>>np;
int a,b,c;
a=((k*l)/(nl*n));
b=(x*d/n);
c=(p/(n*np));
int ans=min(a,min(b,c));
cout<<ans<<endl;
return 0;
}