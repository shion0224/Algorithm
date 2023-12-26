#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // しゃくとり法
    int right = 0;
    long long  sum = 1;
    /* 合計値 */
    int res = 0;

    /* 0 があったら n をリターン */
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            cout << n << endl;
            return 0;
        }
    }

    for (int left = 0; left < n; ++left) {
        while (right < n && sum * a[right] <= k) {
            /* 実際に right を 1 進める */
            // ex: sum += a[right];
            sum *= a[right];
            ++right;
        }
        /* break した状態で right は条件を満たす最大なので、何かする */
        // res = max(res, right - left);
        res = max(res, right - left);  // 更新

        /* left をインクリメントする準備 */
        if (right == left)
            ++right;
        else
            sum /= a[left];
    }
        cout << res << endl;

}