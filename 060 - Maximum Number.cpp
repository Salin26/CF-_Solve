#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    unsigned long long f;
    cin>>n;
    f= (unsigned long long)pow(2,n-1)-1;

    cout<<f;
    return 0;
}
