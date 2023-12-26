#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> p(n * 2 + 2);
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        p[i * 2] = p[i * 2 + 1] = a;
    }

    vector<int> ans(n * 2 + 1,
                    0);  // n * 2 + 1 要素で初期化し、すべてを 0 で初期化
    for (int i = 2; i <= n * 2+1; i++) {  // n * 2 までの範囲で処理
        ans[i] = ans[p[i]] + 1;
    }

    for (int i = 1; i <= n * 2+1; i++) {  // n * 2 までの範囲で出力
        cout << ans[i] << "\n";
    }
}
