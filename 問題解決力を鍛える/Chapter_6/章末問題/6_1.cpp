#include <bits/stdc++.h>
using namespace std;

vector<int> a = {12,43,7,15,9};
// #define ALL(a) (a).begin(), (a).end();

int binary_search(int key) {
    int left = 0;
    int right = (int)a.size() - 1;  // 配列 a の左端と右端

    while (right >= left) {
        int mid = left + (right - left) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            right = mid - 1;
        } else if (a[mid] < key) {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int N = 5;
    // cin >> N;
    auto b = a;
    sort(b.begin(), b.end());
    // for (int i = 0; i < 5; i++) {
    //     cout << a[i] <<":" << binary_search(b[i]) << endl;
    // }

    // 各 a について b の中で何番目か
    vector<int> res(N);
    for (int i = 0; i < N; ++i) {
        res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    }

    // 出力
    for (int i = 0; i < N; ++i) cout << res[i] << endl;
}