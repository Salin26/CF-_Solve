#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int cnt=0;
    while(a>0)
    {if(a%2==1)
    {
        
        a--;
        cnt++;
    }
    else
    {
    
    a=a/2;
        
    }
    
    }
    cout<<cnt<<endl;
}

