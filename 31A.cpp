#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=0;k<n;k++){
            if(arr[i]+arr[j]==arr[k]){ cout<<k+1<<" "<<j+1<<" "<<i+1; return 0;}
        }
    }
  }
   cout<<"-1";
    return 0;
}