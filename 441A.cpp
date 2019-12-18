#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,v,k,temp;
cin>>n>>v;
vector<int> vec;
for(int i=0;i<n;i++){
        int cnt=0;
    cin>>k;
    for(int j=0;j<k;j++){
        cin>>temp;
        if(v>temp){
            cnt=1;
        }}
        if(cnt==1)vec.push_back(i+1);
}
int s=vec.size();
cout<<s<<endl;
for(int i=0;i<s;i++)
    cout<<vec[i]<<" ";
    return 0;
}