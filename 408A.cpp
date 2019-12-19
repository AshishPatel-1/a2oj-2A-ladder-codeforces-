#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
cin>>n;
int arr[n],ans[n]={0};
for(int i=0;i<n;i++) {cin>>arr[i]; ans[i]+=15*arr[i];}
for(int i=0;i<n;i++){
    for(int j=0;j<arr[i];j++){
        int temp;
        cin>>temp;
        ans[i]+=5*temp;
    }
}
int min=750009;
for(int i=0;i<n;i++){
    if(min>ans[i]) min=ans[i];
}
cout<<min;
    return 0;
}