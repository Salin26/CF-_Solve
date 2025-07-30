#include<iostream>
using namespace std;
main()
{
    string b = "codeforces";


    int t;
    cin>>t;
    while (t--)
    {
        char a;
        cin>>a;
        if(b.find(a) != string::npos)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
