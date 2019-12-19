#include<bits/stdc++.h>
using namespace std;
int main(){
ifstream in;
ofstream out;
in.open("input.txt");
int n;
in>>n;
char arr[n];
for(int i=0;i<n;i++) in>>arr[i];
in.close();
out.open("output.txt");
for(int i=0;i<n/2;i++){
    if(arr[i]==arr[i+n/2]) out<<i+1<<" "<<i+1+n/2<<endl;
     else {
        if(arr[i]=='L') out<<i+1<<" "<<i+1+n/2<<endl;
        else out<<i+1+n/2<<" "<<i+1<<endl;
     }

}
out.close();
    return 0;
}