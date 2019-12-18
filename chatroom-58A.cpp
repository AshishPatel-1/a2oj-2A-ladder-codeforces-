#include<bits/stdc++.h>
using namespace std;
int main(){
string a,b="hello";
int count=0;
cin>>a;
for(int i=0;i<a.length();i++)
{
    if(a[i]==b[count])count++;
    if(count==5) break;
    }
    if(count==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}