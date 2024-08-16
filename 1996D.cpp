#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        long long count = 0;

        for (int a = 1; a <= x - 2; ++a) {
            for (int b = 1; b <= x - a - 1; ++b) {
                long long maxC = min((long long)x - a - b, n / (a + b) - a * b / (a + b));
                if (maxC > 0) {
                    count += maxC;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
