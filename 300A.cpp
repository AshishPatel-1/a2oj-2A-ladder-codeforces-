#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
   int c,temp;
    cin>>c;
     vector<int> p,n,z;
    for(int i=0;i<c;i++)
    {
        cin>>temp;
        if(temp>0)p.push_back(temp);
        else if(temp<0)n.push_back(temp);
        else z.push_back(temp);
    }
    if(p.size()==0)
        {p.push_back(n[n.size()-1]);p.push_back(n[n.size()-2]);
        n.pop_back();
        n.pop_back();}
    if(n.size()%2==0)
    {z.push_back(n[n.size()-1]);n.pop_back();}
    cout<<n.size()<<" ";
    for(int i=0;i<n.size();i++)
    cout<<n[i]<<" ";
    cout<<"\n"<<p.size()<<" ";
    for(int i=0;i<p.size();i++)
    cout<<p[i]<<" ";
    cout<<"\n"<<z.size()<<" ";
    for(int i=0;i<z.size();i++)
    cout<<z[i]<<" ";
    return 0;
}