#include <iostream>
using namespace std;
 
int main() {
    string p;
    cin >> p;
 
    bool Output = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
          Output = true;
            break;
        }
    }
 
    if (Output)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
