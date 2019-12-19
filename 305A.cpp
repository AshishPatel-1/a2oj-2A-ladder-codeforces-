#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int zero=0,hun=0,pten=-1,pone=-1,x=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) zero++;
        else if(arr[i]==100) hun++;
        else if (arr[i]%10==0)pten=i;
        else if(arr[i]/10==0) pone=i;
        else x=i;
        }
        cout<<(zero+hun+((pten+1)||(x+1))+(((pone+1)&&!(x+1))||((pone+1)&&(pten+1))))<<endl;
        if(zero)cout<<"0 ";
        if(hun)cout<<"100 ";
        if(pten+1) cout<<arr[pten]<<" ";
        if((x+1)&&!(pten+1)) cout<<arr[x]<<" ";
        if(((pone+1)&&!(x+1))||((pone+1)&&(pten+1)))cout<<arr[pone];
    return 0;
}