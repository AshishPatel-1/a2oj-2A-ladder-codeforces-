#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n,k,x,step=0;
cin>>n>>m;
if(n<m) cout<<"-1"<<endl;
else if(n==m) cout<<n<<endl;
else{
    for(int i=(n+1)/2;i<n;i++){
        if(i%m==0){ cout<<i<<endl; return 0;}
    }
}
return 0;

}