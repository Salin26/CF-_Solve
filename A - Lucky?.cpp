#include<iostream>
#include<string>
using namespace std;
main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;

        if(x[0]+x[1]+x[2]==x[3]+x[4]+x[5])
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    }
}
