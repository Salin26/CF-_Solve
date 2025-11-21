#include <iostream>
using namespace std;

int main() 
{
   
   int n,sum=0;
   cin>>n;
   int d[100];
   
   for(int i=1;i<n;i++)
   {
     cin>>d[i];
   }
   int a,b;
   cin>>a>>b;
   for(int i=a;i<b;i++)
   {
    sum+=d[i];
   }
   cout<<sum;
   return 0;
}
