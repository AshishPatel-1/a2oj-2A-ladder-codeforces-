#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
string a,b,c,d;
int aa=0,bb=0,cc=0,dd=0;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
int la,lb,lc,ld;
la=a.length()-2;
lb=b.length()-2;
lc=c.length()-2;
ld=d.length()-2;
if((lc>=2*ld&&lc>=2*lb&&lc>=2*la)||(lc<=ld/2&&lc<=lb/2&&lc<=la/2)) cc++;
if((la>=2*lb&&la>=2*lc&&la>=2*ld)||(la<=lb/2&&la<=lc/2&&la<=ld/2)) aa++;
if((lb>=2*lc&&lb>=2*ld&&lb>=2*la)||(lb<=lc/2&&lb<=ld/2&&lb<=la/2)) bb++;
if((ld>=2*lc&&ld>=2*lb&&ld>=2*la)||(ld<=lc/2&&ld<=lb/2&&ld<=la/2)) dd++;
if((aa+bb+cc+dd)>1) {cout<<"C"; return 0;}
else {
    if(aa==1) cout<<"A";
    else if(bb==1) cout<<"B";
    else if(dd==1) cout<<"D";
    else cout<<"C";
}
    return 0;
}