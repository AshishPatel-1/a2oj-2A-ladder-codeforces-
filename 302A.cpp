#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
long long int n,m;
cin>>n>>m;
int neg=0,pos=0,temp,a,b,t;
for(long long int i=0;i<n;i++){
    cin>>temp;
    if(temp==1) pos++;
    else neg++;
}

for(long long int i=0;i<m;i++){
    cin>>a>>b;
    if((b-a)%2==0){ cout<<"0"<<endl; continue;}
   else{ t=b-a+2;
    if((t-2)==0) {cout<<"0"<<endl;continue;}
    else if(neg>=t/2&&pos>=t/2) { cout<<"1"<<endl; continue;}
    cout<<"0"<<endl;}
}
    return 0;
}