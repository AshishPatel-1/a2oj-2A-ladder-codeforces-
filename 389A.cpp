#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   int n;
   cin>>n;
   int x[n];
   for(int i=0;i<n;i++)
   {
       cin>>x[i];
   }
   sort(x,x+n);
   while(x[0]!=x[n-1])
   {   int k;
       k=x[n-1]%x[0];
       if(k==0)k=x[0];
       for(int i=n-1;i>0;i--)
           x[i]=x[i-1];
       x[0]=k;}
   cout<<n*x[0];
    return 0;
}