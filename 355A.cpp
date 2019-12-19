#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long long int k,d;
cin>>k>>d;
if(d==0&&k>1) cout<<"No solution";
else {cout<<d;
for(int i=1;i<=k-1;i++)
    cout<<"0";
}
return 0;
}