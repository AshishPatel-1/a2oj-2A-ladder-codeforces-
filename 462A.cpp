#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,cnt=0,ans=0;
cin>>n;
char arr[200][200];
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
        cin>>arr[i][j];
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        
            if(arr[i][j+1]=='o') cnt++;
            if(arr[i+1][j]=='o') cnt++;
            if(arr[i-1][j]=='o') cnt++;
            if(arr[i][j-1]=='o') cnt++;
            
        
        if(cnt%2!=0){cout<<"NO"; return 0;}
        }
}
cout<<"YES";
return 0;
}