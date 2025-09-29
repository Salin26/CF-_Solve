#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int s[n];
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int t = 0;
    for(int j = 0; j < n; j++) {
        if (s[j] >= s[k-1] && s[j] > 0) {
            t++;
        }
    }

    cout << t;
}
