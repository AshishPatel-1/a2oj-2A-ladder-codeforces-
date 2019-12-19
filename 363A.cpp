#include<bits/stdc++.h>
using namespace std;
void fun(int a){
if(a>=5) {cout<<"-O|"; a-=5;}
else cout<<"O-|";
if(a==0) cout<<"-OOOO";
if(a==1) cout<<"O-OOO";
if(a==2) cout<<"OO-OO";
if(a==3) cout<<"OOO-O";
if(a==4) cout<<"OOOO-";
cout<<"\n";

}
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n;
cin>>n;
if(n==0) cout<<"O-|-OOOO";
else{
while(n) { fun(n%10);
      n/=10;
      }}
    return 0;
}