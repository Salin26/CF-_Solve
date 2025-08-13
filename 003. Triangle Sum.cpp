#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long totalPerimeter = 0;
 
    for (int i = 0; i < n; i++) {
        long long side;
        cin >> side;
        totalPerimeter += 3 * side;
    }
 
    cout << totalPerimeter;
 
    return 0;
}
