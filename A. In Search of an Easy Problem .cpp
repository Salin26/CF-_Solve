#include<iostream>
using namespace std;

int main()
{
    int t;
    int a,c=0;
    cin>>t;
    bool hard = false;
    while(t--)
    {

        cin>>a;
        if(a == 1)
        {
            hard = true;
        }
    }
    if(hard)
        cout << "HARD";
    else
        cout << "EASY";

    return 0;

}
