#include <iostream>
using namespace std;

int main() 
{
    int t,p=0,mx=0;
    cin>>t;
    
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      p=p-a;
      p=p+b;
      
      mx=max(mx,p);
      
      
    }
    cout<<mx<<endl;
    return 0;
}
