#include <iostream>
using namespace std;

int score(int a, int b, int c, int d) {
    int first = 0;
    int second = 0;
    if (a > b)
        first++;
    else if (a < b)
        second++;
    
    if (c > d)
        first++;
    else if (c < d)
        second++;
    
    return first > second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;
        ans += score(a1, b1, a2, b2);
        ans += score(a1, b2, a2, b1);
        ans += score(a2, b1, a1, b2);
        ans += score(a2, b2, a1, b1);

        cout << ans << endl;
    }
    return 0;
}
