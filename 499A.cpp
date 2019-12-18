#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,x,ans=0,l,r=0,temp;
cin>>n>>x;
for(int i=0;i<n;i++){
   temp=r+1;
    cin>>l>>r;
    ans+=(l-temp)%x;
    ans+=(r-l+1);
    }
    cout<<ans<<endl;
}