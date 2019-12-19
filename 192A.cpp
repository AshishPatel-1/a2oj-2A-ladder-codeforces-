#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   long long int n,t,k;
   cin>>n;
   for(long long int i=1;i<sqrt(n);i++){
     t=n-((i+1)*i/2);
     k=sqrt(2*t);
     if(t==(k*(k+1))/2) {cout<<"YES"; return 0;}
}
   cout<<"NO";
    return 0;
}