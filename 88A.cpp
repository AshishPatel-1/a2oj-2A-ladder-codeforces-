#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
string arr[24]={"C","C#","D","D#", "E", "F","F#","G","G#","A","B","H","C","C#","D","D#", "E", "F","F#","G","G#","A","B"};
string a[3];
for(int i=0;i<3;i++) cin>>a[i];
for(int j=0;j<12;j++){

 for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {   for(int l=0;l<12;l++){
                if(a[i].compare(arr[l])==0){
                if(a[j].compare(arr[l+4])==0 && a[k].compare(arr[l+7])==0){cout<<"major";return 0;}
                if(a[j].compare(arr[l+3])==0 && a[k].compare(arr[l+7])==0){cout<<"minor";return 0;}
           } }}
        }
    }}
 cout<<"strange";

    return 0;
}