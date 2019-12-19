#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n,m,k,cnt=0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,greater<int >());
    while(k<m&&arr[cnt]!=1&&cnt<n)
    { k+=arr[cnt]-1;
        cnt++;}
    if(k>=m)cout<<cnt;
    else cout<<-1;
    return 0;
}