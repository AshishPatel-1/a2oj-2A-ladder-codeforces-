#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 int n,m;
  cin>>n>>m;
  char arr[n][m];
      for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
              cin>>arr[i][j];}}
  int max[m]={0},ans=0;;
  int cnt[n]={0};
  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         if(max[i]<arr[j][i]) max[i]=arr[j][i];}
       for(int j=0;j<n;j++)
         if(max[i]==arr[j][i])  cnt[j]=1; }
  for(int i=0;i<n;i++)
    if(cnt[i]==1) ans++;
  cout<<ans;

 return 0;
}