#include<bits/stdc++.h>

using namespace std;

int main()
{
  string a ,b;
  
  cin>>a>>b;
  
  string r=a;
  
  reverse(r.begin(), r.end());
  
  if(r==b)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
