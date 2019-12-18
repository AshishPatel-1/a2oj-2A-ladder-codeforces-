#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,ans=1000;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++){
    cin>>a[i];
}
sort(a,a+m);

for(int i=0;i<m+1-n;i++){
   if((a[i+n-1]-a[i])<ans) ans=(a[i+n-1]-a[i]);
}
cout<<ans<<endl;
return 0;
}