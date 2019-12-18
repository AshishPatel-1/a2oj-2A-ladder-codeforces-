#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int temp,maxa=0,mina=100,minb=100;
    for(int i=0;i<n;i++){
            cin>>temp;
        if(temp<mina) mina=temp;
        if(temp>maxa) maxa=temp;}
    for(int i=0;i<m;i++){
        cin>>temp;
        if(minb>temp) minb=temp;}
    if(max(2*mina,maxa)<minb) {cout<<max(2*mina,maxa); 
    return 0;}
    else  cout<<"-1";
 return 0;
}