#include<bits/stdc++.h>
using namespace std;
int main(){
int n,si=0,sj=0,sk=0;
cin>>n;
int i[n],j[n],k[n];
for(int m=0;m<n;m++){
    cin>>i[m]>>j[m]>>k[m];
    si+=i[m];
    sj+=j[m];
    sk+=k[m];
}
if(si==0&&sj==0&&sk==0) cout<<"YES";
else cout<<"NO";
}