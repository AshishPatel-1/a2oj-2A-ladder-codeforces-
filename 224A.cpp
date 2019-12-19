#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 long long int x,y,z;
 cin>>x>>y>>z;
 long long int t=sqrt(x*y*z);
  cout<<4*(t/x+t/y+t/z);

}