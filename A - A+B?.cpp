#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int a,b;
    char dash;
    cin>>a>>dash>>b;
 
 
    switch (dash)
    {
 
    case '+':
 
 
        cout<<a+b<<endl;
        break;
    default:
        cout<<"invalid"<<endl;
    }
 
    }
 
    return 0;
}
