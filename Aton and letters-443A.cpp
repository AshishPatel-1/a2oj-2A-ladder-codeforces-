#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int ans=0;
getline(cin,s);
int arr[26]={0};
for(int i=1;i<s.length()-1;i++){
   if(s[i]==','||s[i]==' ') {i++; continue;}
   else  arr[s[i]-97]=1;
}
for(int i=0;i<26;i++){
    ans+=arr[i];
}
cout<<ans<<endl;
return 0;
}