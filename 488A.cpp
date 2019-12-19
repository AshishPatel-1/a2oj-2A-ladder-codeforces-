#include<bits/stdc++.h>
using namespace std;
int fun(long long int a){
while(a){
    if(a%10==8||a%10==-8) return 1;
    a/=10;
}
return 0;
}
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long int n;
  int ans;
   cin>>n;
   if(n<0){
   long long  int temp=-n;
    for(int i=1;i<=100;i++)
        if(fun(temp-i)==1) { cout<<i; return 0;}
    }
    else {
         for(int i=1;i<=10;i++)
        if(fun(n+i)==1) { cout<<i; return 0;}
        }


}