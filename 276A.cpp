#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
long long int k,f,t,joy,ans=-1000000000;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>f>>t;
    if(t>k)
    joy=(f+k-t);
    else joy=f;

        if(joy>ans) ans=joy;
    }


cout<<ans<<endl;
return 0;
}