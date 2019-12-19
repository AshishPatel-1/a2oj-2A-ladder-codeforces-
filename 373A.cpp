#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
cin>>n;
char arr[4][4];
int a[9]={0};
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
        if(arr[i][j]!='.')
        a[arr[i][j]-49]++;
        }
}
for(int i=0;i<9;i++){
    if(a[i]>2*n){ cout<<"NO"; return 0;}
}

 cout<<"YES";
return 0;
}