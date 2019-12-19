#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int n,a,b,sh=0,sv=0;
cin>>n;
int h[101]={0};
int v[101]={0};
for(int i=0;i<n;i++){
    cin>>a>>b;
    h[a]=1;
    v[b]=1;
}
for(int i=0;i<101;i++){
    sh+=h[i];
    sv+=v[i];
}
if(sh>sv)
    cout<<sv;
    else cout<<sh;

}