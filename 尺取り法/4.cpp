#include <bits/stdc++.h>
using namespace std;

int main() {
    /* 入力受け取り */
    int n;
    // long long K;
    cin >> n ;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    /* しゃくとり法 */
    int res = 0;
    int right = 1;
    long long ans = 0;

    for (int left = 0; left < n; ++left) {
        while (right < n && (right <= left || a[right - 1] < a[right])) {
            // ??? *= a[right];
            // cout << left << " " << right  << endl;
            ++right;
        }
        res += right - left;
        if (left == right) ++right;
        // else ??? /= a[left]; // left を除く
    }

    cout << res << endl;
}