#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,c,ans=0;
cin>>n>>c;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        if(((arr[i]-arr[i+1])>c)&&((arr[i]-arr[i+1])>ans))
            ans=(arr[i]-arr[i+1]);
    }
}
if(ans==0) cout<<"0";
else cout<<ans-c;
return 0;
}