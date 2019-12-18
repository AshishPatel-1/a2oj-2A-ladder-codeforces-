#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,dif=0,rdif=1000,ans;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
       if(a[i+1]-a[i]>dif) dif=(a[i+1]-a[i]);
    }
       for(int i=0;i<n-2;i++){
        if(a[i+2]-a[i]<rdif) rdif=a[i+2]-a[i];
    }
    if(rdif<dif) ans=dif;
    else ans=rdif;
    cout<<ans<<endl;
return 0;
}