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
      int n,k;
      cin>>n>>k;
      
      vector<int>a(n);
      vector<int>b(n);
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        b[i]=a[i];
      }
      if(k==1)
      {
        sort(a.begin(),a.end());
        if(b==a)
{        yes;
}
        else
        
        {no;
        }
      }
      else if(k==2||k==3||k<=100)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
    }
    return 0;
}
      
      
    
      
  

