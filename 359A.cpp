#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            if(i==0||i==n-1||j==0||j==m-1) {cout<<"2"; return 0;}
        }
    }
}
cout<<"4";
    return 0;
}
 