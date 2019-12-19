#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
char a,b,c,d,e;
int p1,p2;
cin>>a;
cin>>b>>c>>d>>e;
if(c==a&&e!=a) cout<<"YES";
else if(c!=e) cout<<"NO";
else {if(b=='6') p1=1 ;
      else if(b=='7') p1=2 ;
      else if(b=='8') p1=3 ;
      else if(b=='9') p1=4 ;
      else if(b=='T') p1=5 ;
      else if(b=='J') p1= 6;
      else if(b=='Q') p1= 7;
      else if(b=='K') p1= 8;
       else p1=9;
       if(d=='6') p2=1 ;
      else if(d=='7') p2=2 ;
      else if(d=='8') p2=3 ;
      else if(d=='9') p2=4 ;
      else if(d=='T') p2=5 ;
      else if(d=='J') p2= 6;
      else if(d=='Q') p2= 7;
      else if(d=='K') p2= 8;
       else p2=9;

       if(p1>p2) { cout<<"YES"; return 0;}
       else cout<<"NO";
}

return 0;
}