#include<bits/stdc++.h>
using namespace std;

int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,ca=0,cb=0;
cin>>n;
string a,b,temp;
for(int i=0;i<n;i++){
   if(i==0) {cin>>a; ca++; }
  if(i>0){ cin>>temp;
   if(a.compare(temp)==0) ca++;
   else {b=temp; cb++;}}
}
if(ca>cb) cout<<a;
else cout<<b;
return 0;
}