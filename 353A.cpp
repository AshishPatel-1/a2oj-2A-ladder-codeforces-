#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,t=0;
cin>>n;
int u,l,su=0,sl=0;
for(int i=0;i<n;i++)
{
    cin>>u>>l;
    su+=u; sl+=l;
    if(((u%2==0)&&(l%2==1))||((u%2==1)&&(l%2==0))) t=1;
}
if((su%2==0)&&(sl%2==0)) {cout<<"0"; return 0;}
else {if(((su%2==1)&&(sl%2==1))&&t==1) cout<<"1";
        else cout<<"-1"; return 0;}
        cout<<"-1";
 return 0;
}