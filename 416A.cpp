#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long int n,l=-2000000000,g=2000000000,temp;
   char a;
   string b;
  cin>>n;
   for(int i=0;i<n;i++){
    cin>>b;
    cin>>temp;
    cin>>a;
    if(a=='Y'){
        if(b.compare(">=")==0){ if(temp>l) l=temp;}
        else if(b.compare(">")==0) {if(temp+1>l)l=temp+1;}
        else if(b.compare("<=")==0) {if(temp<g)g=temp;}
        else { if(temp-1<g)g=temp-1;}
    }
    else {
           if(b.compare(">=")==0){ if(temp-1<g)g=temp-1;}
        else if(b.compare(">")==0) {if(temp<g)g=temp;}
        else if(b.compare("<=")==0) {if(temp+1>l)l=temp+1;}
        else  {if(temp>l)l=temp;}
    }
   }
   if(g<l) cout<<"Impossible";
   else cout<<l;

return 0;
}