#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b,ans=0;
    cin>>n;
    int arr[100]={0};
    cin>>a>>b;
    for(int i=a;i<b;i++) arr[i]=1;
    for(int j=0;j<n-1;j++){
        cin>>a>>b;
         for(int i=a;i<b;i++) arr[i]=0;
    }
    for(int i=0;i<100;i++) ans+=arr[i];
    cout<<ans;
	return 0;
}