#include <bits/stdc++.h>
using namespace std;
int main(){
int n,a,b,c,ans=0,temp;
cin>>n>>a>>b>>c;
for(int i=0;i<=n/a;i++){
    for(int j=0;j<=(n-a*i)/b;j++){
            if((n-a*i-b*j)%c==0) {temp=(i+j+(n-a*i-b*j)/c);
            if(temp>ans) ans=temp;}
         }
    }
    cout<<ans;
    return 0;
}