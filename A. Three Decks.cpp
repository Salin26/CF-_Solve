#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        int sum;
        cin>>a>>b>>c;
        if(a<b<c)
        {

        sum=a+b+c;

        if((sum)%3==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        else
        {
            cout<<"no";
        }
        }
    }
}
