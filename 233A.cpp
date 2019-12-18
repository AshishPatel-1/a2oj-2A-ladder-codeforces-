#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int p[n];
for(int i=1;i<=n;i++)
p[i-1]=i;
    if(n%2==1){cout <<"-1"; return 0;}
    else
       {
          for(int i=0;i<n;i+=2)
              {
                  cout<<p[i+1]<<" "<<p[i]<<" ";
              }
         }
return 0;
}