#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ma,mi,maxi,mini,ans;
cin>>n;
int arr[n];
cin>>arr[0];
ma=mi=arr[0];
maxi=mini=0;
for(int i=1;i<n;i++){
        cin>>arr[i];
if(arr[i]>ma){ ma=arr[i]; maxi=i;}
if(arr[i]<=mi){mi=arr[i]; mini=i;}
}
if(maxi>mini) mini++;
ans=maxi+n-1-mini;
cout<<ans<<endl;

}