#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,x;
  cin>>n;
  
  map<int,int>mp;
  int ans=0;
  
  for(int i=0;i<n;i++)
  
  {
    cin>>x;
    mp[x]++;
  }
  for(auto it:mp)
  {
    if(it.second>ans)
    {
      ans=it.second;
    }
  }
  cout<<ans<<" "<<endl;
}
