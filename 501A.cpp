#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int pm,pv;
    pm=max((3*a/10),(a-(a*c/250)));
    pv=max((3*b/10),(b-(b*d/250)));
    if(pm>pv) cout<<"Misha";
    else if(pm==pv) cout<<"Tie";
    else cout<<"Vasya";
    return 0;
}