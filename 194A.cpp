#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,k;
cin>>n>>k;
k-=2*n;
int i=0;
for(i=0;i<n;i++){
    if((k-i-1)<0) break;
}
cout<<n-i;
return 0;
}