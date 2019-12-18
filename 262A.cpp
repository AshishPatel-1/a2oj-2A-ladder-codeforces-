#include <bits/stdc++.h>
using namespace std;
int numldigit(long long int x){
int i=0;
while(x){
    int temp=x%10;
    if(x%10==4||x%10==7) i++;
    x/=10;}
    return i;
}
int main()
{
int n,k,ans=0;
cin>>n>>k;
for(int i=1;i<=n;i++){
long long int a;
cin>>a;
if(numldigit(a)<=k) ans++;

}
cout<<ans<<endl;
    return 0;
}