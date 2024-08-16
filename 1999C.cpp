#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        bool flag = false;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            int l, r;
            cin >> l >> r;
            if (l - temp >= s)
                flag = true;
            temp = r;
        }

        if (m - temp >= s)
            flag = true;
        
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}