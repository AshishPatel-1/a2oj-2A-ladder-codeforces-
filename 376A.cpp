#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long int l=0,r=0;
string s;
cin>>s;
int x=s.find("^");
for(int i=0;s[i];i++){
    if(s[i]!='='&&s[i]!='^'){
        if(i<x) l+=(x-i)*(s[i]-48);
        else r+=(i-x)*(s[i]-48);
    }
}
if(l==r) cout<<"balance";
else if(l>r) cout<<"left";
else cout<<"right";
    return 0;
}