#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,ans=0;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];

sort(a,a+n);
for(int i=2;i<n;i+=3){
   if(k<=(5-a[i])) ans++;
   else {cout<<ans<<endl; return 0;}
}
cout<<ans<<endl;
}