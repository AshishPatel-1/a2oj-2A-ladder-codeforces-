#include <bits/stdc++.h>
#define INF (1<<29)
using namespace std;
int n, m, i, j, a, b;
int fun(int i, int j){
	int r = 0;
	if (i % a || j % b) return INF;
	r = min(i/a, j/b);
	i -= r * a;
	j -= r * b;
	if (i && j) return INF;
	if (j/b % 2 != 0 || i/a % 2 != 0) return INF;
	if (i == 0 && j != 0 && a >= n) return INF;
	if (j == 0 && i != 0 && b >= m) return INF;
	return r + j/b + i/a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>i>>j>>a>>b;
	int x = min(min(fun(i-1,j-1),fun(n-i,j-1)),min(fun(i-1,m-j),fun(n-i,m-j)));
	if (x < INF)  cout<<x;
	else cout<<"Poor Inna and pony!";
	return 0;
}