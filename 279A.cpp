#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int x,y;
cin>>x>>y;
if(y<=0&&x>=y+1&&x<=1-y) cout<<-4*y;
else if(x>0&&y>=2-x&&y<=x) cout<<4*x-3;
else if(y>0&&x>=-y&&x<=y-1) cout<<4*y-2;
else if(x<0&&y>=x&&y<=-x-1) cout<<-4*x-1;
else cout<<"0";

	return 0;
}