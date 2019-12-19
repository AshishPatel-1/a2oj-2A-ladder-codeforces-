#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   string s;
   cin>>s;
   int n=0,i=0,e=0,t=0;
   for(int j=0;s[j];j++){
    if(s[j]=='n') n++;
    else if(s[j]=='e') e++;
    else if(s[j]=='t') t++;
    else if(s[j]=='i') i++;
   }
   cout<<min(min(t,i),min((n-1)/2,e/3));
return 0;
}