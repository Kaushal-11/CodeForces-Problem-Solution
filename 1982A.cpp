#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        cout << ((a < b) == (c < d) ? "YES" : "NO") << endl;
    }
}