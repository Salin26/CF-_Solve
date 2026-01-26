#include <bits/stdc++.h>
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;
using namespace std;

int main() 
{
  
    int t;
    cin>>t;
    
    while(t--)
    {
      int n , k;
      bool found=false;
      cin>>n>>k;
      vector<int>a(n);
      
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]==k)
        found=true;
        
      }
      if(found) {yes;}
      else {no;}
    }
  }
