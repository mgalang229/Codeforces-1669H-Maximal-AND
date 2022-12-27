#include <bits/stdc++.h>
using namespace std;

/*

until 30-th bit only

k = 2
010
011
011
---
010

*/

void test_case() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for (int bit = 30; bit >= 0; bit--) {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if ((a[i] & (1 << bit)) == 0)
                cnt++;
        if (cnt <= k) {
            k -= cnt;
            ans += (1 << bit);
        }
        // cout << bit << " = " << cnt << "\n";
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
        test_case();
}
