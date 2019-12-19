#include<bits/stdc++.h>
using namespace std;
long long int power( long long int a,int b){
    if(b==0) return 1;
    else
return a*power(a,b-1);
}
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long long int k,l;
cin>>k;
cin>>l;
for(int i=1;i<35;i++){
    if(l==power(k,i)){cout<<"YES\n"<<i-1; return 0;}
}
cout<<"NO";
 return 0;
}