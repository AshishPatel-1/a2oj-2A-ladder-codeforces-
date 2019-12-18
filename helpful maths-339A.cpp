#include<iostream>
#include<string>
using namespace std;
int main(){
string a;
cin>>a;
int a1=0,a2=0,a3=0;
for(int i=0;i<a.length();i+=2){
    if(a[i]=='1') a1++;
    if(a[i]=='2') a2++;
    if(a[i]=='3') a3++;
}
if(a1>0) cout<<"1";
for(int i=0;i<a1-1;i++){
    cout<<"+1";
    }
    if(a2>0&&a1>0) cout<<"+2";
    else if(a2>0) cout<<"2";
    for(int i=0;i<a2-1;i++){
        cout<<"+2";
        }
     if((a2>0||a1>0)&&(a3>0)) cout<<"+3";
    else if(a3>0) cout<<"3";
    for(int i=0;i<a3-1;i++){
        cout<<"+3";
    }
    return 0;
}