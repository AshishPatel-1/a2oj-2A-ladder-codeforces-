#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,s=0,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n,greater<int>());
while(s<=sum/2){
    s+=a[count];
count++;
}
cout<<count<<endl;


}