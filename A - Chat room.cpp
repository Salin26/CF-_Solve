#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string t ="hello";
    int j=0;


    for(char b:s){

    if(b == t[j])
    {
        j++;
    }
     if (j == t.size()) break;
    }
    if (j == t.size())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
