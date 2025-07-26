
#include<iostream>
using namespace std;
main()
{
    int k,n,w,i,d=0,f=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
       d=d+i*k;
 
    }
f=d-n;
if(f>0)
cout<<f;
else
{
    cout<<"0";
}
}
