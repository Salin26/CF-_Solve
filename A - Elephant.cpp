#include<iostream>
using namespace std;
main()
{
    int n,d;
    cin>>n;
    d=n/5;
    if(n%5!=0)
    {
        d+=1;
    }
    cout<<d;
}
