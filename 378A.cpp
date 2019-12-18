#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,wa=0,wd=0,wb=0;
cin>>a>>b;
for(int i=1;i<=6;i++){
    if(abs(a-i)<abs(b-i)) wa++;
    else if(abs(a-i)==abs(b-i)) wd++;
        else wb++;

}
cout<<wa<<" "<<wd<<" "<<wb<<endl;
return 0;
}