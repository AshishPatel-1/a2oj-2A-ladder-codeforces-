#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int x1,x2,y1,y2;
  cin>>x1>>y1>>x2>>y2;
 if(x1==x2&&y1==y2){cout<<"0 0 0"; return 0;}
 //for rook
 if(x1==x2||y1==y2) cout<<"1 ";
 else cout<<"2 ";
 //for bishop
 if(abs(x2-x1)==abs(y2-y1)) cout<<"1 ";
 else if((x1+y1)%2==(x2+y2)%2) cout<<"2 ";
 else cout<<"0 ";
 //for king
 cout<<(max(abs(x2-x1),abs(y2-y1)));

    return 0;
}