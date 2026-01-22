#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        long long cnt = 1;
        while(n > 3) {
         n = n / 4;       
            cnt = cnt * 2; 
        }
        cout << cnt << endl;
    } 
    return 0;
}
//salin is back
