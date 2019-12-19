#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
for(int i=0;i<n-1;i++){
    int a1,a2,b1,b2;
    if(arr[i+1]>arr[i]) {a2=arr[i+1]; a1=arr[i];}
    else{ a2=arr[i]; a1=arr[i+1];}
    for(int j=i+2;j<n-1;j++){
         if(arr[j+1]>arr[j]) {b2=arr[j+1]; b1=arr[j];}
    else{ b2=arr[j]; b1=arr[j+1];}
    if((b1<a1&&a1<b2&&b2<a2)||(b1<a2&&a2<b2&&a1<b1)){
        cout<<"yes"; return 0;
    }
    }

}
cout<<"no";
return 0;
}