#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> mat(n);
        for (int i = 0; i < n; ++i) {
            cin >> mat[i];
        }

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                cout << mat[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
