#include <bits/stdc++.h>
using namespace std;
bool isRight(int *c){

    int sides[3] = {0};
    sides[0] = (c[4] - c[2]) * (c[4] - c[2]) + (c[5] - c[3])* (c[5] - c[3]);
    sides[1] = (c[4] - c[0]) * (c[4] - c[0]) + (c[5] - c[1])* (c[5] - c[1]);
    sides[2] = (c[2] - c[0]) * (c[2] - c[0]) + (c[3] - c[1])* (c[3] - c[1]);

    sort(sides, sides + 3);
    if(sides[0] > 0 && sides[2] == sides[0] + sides[1]){return 1;}
    else{return 0;}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int points[6] = {0};
    for(int k = 0; k < 6; k++){scanf("%d", points + k);}
    if(isRight(points)){cout<<"RIGHT"; return 0;}
    else{
        for(int k = 0; k < 6; k++){
        ++points[k];    if(isRight(points)){cout<<"ALMOST"; return 0;}
        points[k] -= 2; if(isRight(points)){cout<<"ALMOST"; return 0;}
        ++points[k];}}
     cout<<"NEITHER"<<endl;
    return 0;
}