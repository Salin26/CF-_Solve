
#include <iostream>
#include <cmath> // ceil function
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tiles_along_length = ceil((double)n / a);
    long long tiles_along_width = ceil((double)m / a);

    long long total_tiles = tiles_along_length * tiles_along_width;

    cout << total_tiles << endl;
    return 0;
}
