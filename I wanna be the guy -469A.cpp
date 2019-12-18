#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,temp,sum=0;
cin>>n;
int arr[n]={0};
for(int s=0;s<2;s++){
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>temp;
    arr[temp-1]=1;
  }
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}
if(sum==n) cout<<"I become the guy."<<endl;
else cout<<"Oh, my keyboard!"<<endl;
return 0;
}