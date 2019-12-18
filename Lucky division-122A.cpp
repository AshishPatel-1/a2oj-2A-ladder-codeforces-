#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={4,7,44,77,47,74,444,777,474,447,744,477,774,747};
int n,count=0;
cin>>n;
for(int i=0;i<14;i++){
    if(n%a[i]==0){ count++; break;}
}
if(count==1) cout<<"YES"<<endl;
else cout<<"NO";
}