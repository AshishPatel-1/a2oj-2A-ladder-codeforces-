#include<bits/stdc++.h>
using namespace std;
int hcf(long long int a,long long int b){
if(b%a==0) return a;
else return hcf(b%a,a);
}
bool hcf1(long long int a,long long int b){
return (hcf(a,b)==1);
}
int main()
{
long long int l,r;
cin>>l>>r;
for(long long int i=l;i<=r;i++){
    for(long long int j=i+1;j<=r;j++){
        if(hcf1(i,j)){
            for(long long int k=j+1;k<=r;k++){
                if(hcf1(j,k)){
                    if(hcf1(i,k)) continue;
                    else {cout<<i<<" "<<j<<" "<<k; return 0;}
                }
            }
        }
    }

}
cout<<"-1";
return 0;
}