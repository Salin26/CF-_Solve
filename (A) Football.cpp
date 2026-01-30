#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   int mx=0;
   map<string,int>mp;
   string w;
   
   for(int i=0;i<n;i++)
   {
     cin>>w;
     mp[w]++;
   }
   string win;
   for(auto &p:mp)
   {
     if(p.second>mx)
     {
       mx=p.second;
       win=p.first;
     }
     
    
   }
  cout<<win<<endl;
   return 0;
   
}
