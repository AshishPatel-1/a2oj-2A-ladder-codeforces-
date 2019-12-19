#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int j=str.length();
    int i;
    for(i=j;i>1;--i)
    if(str[i-2]!=' '){
    if(str[i-2]=='A'||str[i-2]=='E'||str[i-2]=='I'||str[i-2]=='O'||str[i-2]=='U'||str[i-2]=='Y'||str[i-2]=='a'||str[i-2]=='e'||str[i-2]=='i'||str[i-2]=='o'||str[i-2]=='u'||str[i-2]=='y')cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    break;
    }



}