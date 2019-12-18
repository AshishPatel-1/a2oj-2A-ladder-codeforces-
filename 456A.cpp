#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ma=0,mb=0,ai,bi;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
    if(a[i]>ma){ ai=i; ma=a[i];}
}
float t=((float)b[ai]/a[ai]);
for(int i=0;i<n;i++){
        if((float)(b[i]/(float)a[i])>t){
 cout<<"Happy Alex"<<endl; return 0;}}
 cout<<"Poor Alex";
return 0;
}