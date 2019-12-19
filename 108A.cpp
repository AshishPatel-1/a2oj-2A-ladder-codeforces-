#include<bits/stdc++.h>
using namespace std;
int reverse(int HH)
{return (HH%10)*10+HH/10;}
 void print(int a)
{if(a<10)
    cout<<"0";
	cout<<a;}
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    int HH, MM;
	scanf("%d:%d",&HH,&MM);
    while(reverse(HH)<=MM||reverse(HH)>=60)
	{   if(HH!=23)  HH++;
		else {HH=0; MM=0; break;}
		MM=0;}

	print(HH);cout<<":";print(reverse(HH));
return 0;
}