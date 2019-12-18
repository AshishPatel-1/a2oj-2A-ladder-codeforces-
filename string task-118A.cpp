#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    int n;
    n=a.length();

    for(int i=0;i<n;i++){

    if(a[i]=='Y'||a[i]=='U'||a[i]=='O'||a[i]=='I'||a[i]=='E'||a[i]=='A'||a[i]=='u'||a[i]=='i'||a[i]=='a'||a[i]=='o'||a[i]=='e'||a[i]=='y')
    continue;
    else { b+='.'; b+=tolower(a[i]);  }
    }

    cout<<b<<endl;

}