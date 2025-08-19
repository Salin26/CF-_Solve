#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin >> t;
    cin>>a;

    int count = 0;

    while(t--)
    {
        int b;
        cin >> b;
        if(b >= a)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
