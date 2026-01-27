#include <bits/stdc++.h>
#define yes           cout << "YES" << endl;
#define no            cout << "NO" << endl;
#define ll            long long
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        int cnt=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
          mp[s[i]]++;
        }
        for(auto it: mp)
        {
          if(it.second%2!=0) cnt++;
        }
        
        if(cnt-1<=0) cnt=0;
        else cnt--;
        
        if(k>=cnt && k<=n)
        {yes;}
        else
        {no;}
    }
    return 0;
}
