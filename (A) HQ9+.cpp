#include <iostream>
using namespace std;
 
int main() {
    string p;
    cin >> p;
 
    bool producesOutput = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            producesOutput = true;
            break;
        }
    }
 
    if (producesOutput)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
