#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,ans=0;
cin>>n;
string s;
string aa[]={"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE","0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17"};

for(int i=0;i<n;i++){
    cin>>s;

          for(int i=0;i<29;i++)
            if(s.compare(aa[i])==0){ans++;goto ed;}

ed: continue;

}
cout<<ans;
    return 0;
}