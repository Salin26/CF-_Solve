#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
       string n;
       cin>>n;
       int A=0,D=0;
       for (char c:n)
       if(c=='A')
       {
            A++;
       }

        else if (c =='D')
        {
            D++;
        }

       if(A>D)
       {
           cout<<"Anton"<<endl;
       }
       else if(D>A)
        {
            cout<<"Danik"<<endl;
        }
        else
        {
            cout<<"Friendship"<<endl;
        }
    }

