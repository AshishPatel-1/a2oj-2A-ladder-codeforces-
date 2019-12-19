#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,min_v=1000,min_i;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(i>0){
        if(abs(arr[i]-arr[i-1])<min_v) { min_v=abs(arr[i]-arr[i-1]); min_i=i;}
    }
    }
    if(abs(arr[n-1]-arr[0])<min_v) cout<<n<<" 1";
    else cout<<min_i<<" "<<min_i+1;

return 0;
}