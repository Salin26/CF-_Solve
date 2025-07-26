#include<iostream>
#include <iomanip>
using namespace std;
main()
{
    int n,i,f;
    double sum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>f;
      sum=sum+f;
    }
    sum=sum/n;
    cout<<sum;
}
