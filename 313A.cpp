#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t1,t2;
cin>>n;
if(n>=0) cout<<n<<endl;
else {
    t1=n/10;
    int temp=n%10;
    t2=(n/100)*10+temp;
    if(t1<t2) cout<<t2<<endl;
    else cout<<t1<<endl;
}
return 0;
}