#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,ans=0;
cin>>n;
int a[n][2];
for(int i=0;i<n;i++){
    cin>>a[i][0]>>a[i][1];
}
  for(int j=0;j<n;j++){
       int  x=a[j][0];
        int y=a[j][1];
int p=0,q=0,r=0,s=0;
for(int i=0;i<n;i++){
if((x==a[i][0])&&(y>a[i][1])) p++;
if((x==a[i][0])&&(y<a[i][1])) q++;
if((y==a[i][1])&&(x>a[i][0])) r++;
if((y==a[i][1])&&(x<a[i][0])) s++;
  }
  if(p>0&&q>0&&r>0&&s>0) ans++;}

    cout<<ans<<endl;
    return 0;
}