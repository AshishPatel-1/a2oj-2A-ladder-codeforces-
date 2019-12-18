#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int x,y;
    int a[5][5];
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a[i-1][j-1];
            if(a[i-1][j-1]==1){
            x=abs(i-3);
            y=abs(j-3);
            cout<<x+y;
            }
            
        }
    }
    return 0;
    
    
    
}