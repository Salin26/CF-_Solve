#include<iostream>
using namespace std;
int main()
{
    string a,b;
    int a1,a2,b1,b2,c1,c2,d,e;
    cin>>a>>b;
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    a1=a1-b1;
    a2=a2-b2;
    d=a1*2+b1*3+c1;
    e=a2*2+b2*3+c2;
    if(d>e)
    {
        cout<<"Syracuse";
    }

    else
    {
        cout<<"Duke";
    }
}
