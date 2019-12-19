#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,k;
cin>>n>>k;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(j==n-1-i) cout<<k<<" ";
        else cout<<"0 ";
    }
    cout<<"\n";
}

return 0;
}