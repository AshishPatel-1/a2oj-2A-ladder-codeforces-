#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,s,t;
cin>>n;
string a;
cin>>a;
   if(a.find("RL")<n-1)
	{s=a.find('R')+1;
     t=a.find('L')+1;}
	else if(a.find(".L")<n-1)
	{s=a.find_last_of('L')+1;
     t=a.find('L');}
	else{s=a.find('R')+1;
     t=a.find_last_of('R')+2;}

	cout<<s<<" "<<t<<endl;

	return 0;
}