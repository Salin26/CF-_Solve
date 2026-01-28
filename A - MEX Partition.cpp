#include <bits/stdc++.h>
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;
#define ll         long long
using namespace std;
int main() 
{
  int t;
  cin>>t;
  while(t--)
  { 
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
       mp[a]++;
    }
    for(int i=0;i<105;i++)
    {
     if(mp[i]<=0)
     {
       cout<<i<<endl;
       break;
    }
  }
}
return 0;
}
