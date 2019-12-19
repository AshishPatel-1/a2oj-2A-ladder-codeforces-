#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);
for(int i=0;i<n-1;i++){
    int cnt=1;
    while(a[i]==a[i+1]){
       cnt++;i++;
       if(cnt>((n+1)/2)) { cout<<"NO"; return 0;}
    }

}
 cout<<"YES";
return 0;
}