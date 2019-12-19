#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
string s,c;
getline(cin,s);
getline(cin,c);
int cnt=0;
    for(int i=0;i<c.length();i++)
        if(c[i]==s[cnt]) cnt++;
cout<<cnt+1;

 return 0;
}
