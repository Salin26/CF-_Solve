#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
     int count;
    cin>>t;
      int a[100];
    
    while(t--)
    {
      int n;
      cin>>n;
      
    
     
       for(int i=0;i<n;i++)
       {
         cin>>a[i];
       }
       
       for(int i=0;i<n;i++)
      {
        count=0;
       for(int j=0;j<n;j++)
       {
         if(a[i]==a[j])
         {
           count ++;
         }
       }
       if(count==1)
       {
         cout<<i+1<<endl;
       }
      }
      
      }
    
    
      
      
      
    }
