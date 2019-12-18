#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,k;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        k=str.length();
        if(k<=10) cout<<str<<endl;
        else cout<<str[0]<<k-2<<str[k-1]<<endl;
    }
    return 0;
}