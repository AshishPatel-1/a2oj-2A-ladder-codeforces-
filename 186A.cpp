#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
string a,b;
cin>>a;
cin>>b;
if(a.length()!=b.length()) { cout<<"NO"; return 0;}
else {int cnt=0;
    for(int i=0;a[i];i++){
     if(a[i]!=b[i]) cnt++;
    if(cnt>2){cout<<"NO"; return 0;}
    }
   if(cnt==2){
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
    if(a.compare(b)==0) cout<<"YES";
    else cout<<"NO";
   }
   else cout<<"NO"; }


return 0;
}