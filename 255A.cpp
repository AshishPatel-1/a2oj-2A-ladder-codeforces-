#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,ch=0,bi=0,ba=0,temp;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>temp;
    if(i%3==1) ch+=temp;
    else if(i%3==2) bi+=temp;
    else ba+=temp;
}

if(ch>bi&&ch>ba) cout<<"chest";
else if(bi>ba) cout<<"biceps";
else cout<<"back";
return 0;
}