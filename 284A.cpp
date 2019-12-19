#include<bits/stdc++.h>
using namespace std;
unsigned mod_pow(unsigned num, unsigned pow, unsigned mod)
{
    unsigned long long test;
    unsigned long long n = num;
    for(test = 1; pow; pow >>= 1)
    {   if (pow & 1)
            test = ((test % mod) * (n % mod)) % mod;
        n = ((n % mod) * (n % mod)) % mod;
        }return test;
}
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
unsigned int p,cnt=0;

cin>>p;
for(int i=1;i<p;i++){
    if(mod_pow(i,p-1,p)==1){
        for(int j=1;j<p-1;j++){
            if(mod_pow(i,j,p)==1){ goto ed;}
           }
            cnt++;
        }
ed: continue;
   }


cout<<cnt;
    return 0;
}