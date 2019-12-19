#include <bits/stdc++.h>
using namespace std;
int main(){
ifstream in;
ofstream out;
int arr[3]={0,0,0};
int n,a,b;
in.open("input.txt");
in>>n;
arr[n-1]=1;
for(int i=0;i<3;i++){
    in>>a>>b;
    swap(arr[a-1],arr[b-1]);
}
in.close();
out.open("output.txt");
for(int i=0;i<3;i++)
    if(arr[i]==1) out<<i+1;
    out.close();
    return 0;
}