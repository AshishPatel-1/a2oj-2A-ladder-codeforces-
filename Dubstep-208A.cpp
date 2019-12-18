#include<bits/stdc++.h>
using namespace std;
int main(){
string n,o;
int f=1;
cin>>n;
for(int i=0;i<n.length();i++){
    if(n[i]=='W'&&n[i+1]=='U'&&n[i+2]=='B'){ if(!f) {cout<<" ";}i+=2; continue;}
    else {cout<<n[i]; f=0;}

}
}