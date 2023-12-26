#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n), b(n), c(n);
    for(long long i=0;i<n;i++) cin >>a.at(i);
    for(long long i=0;i<n;i++) cin >>b.at(i);
    for(long long i=0;i<n;i++) cin >>c.at(i);

    sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    long long count = 0;
    for (long long i=0;i<n;i++) {
        // 下のパーツでmより大きい要素の数をカウント
        long long  bottom_count = c.end() - upper_bound(c.begin(), c.end(), b[i]);
        cout << bottom_count << endl;
        // 上のパーツでmより小さい要素の数をカウント
        long long  top_count = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << top_count << endl;
        // それぞれのカウントを掛け合わせる
        count += bottom_count * top_count;
    }

    cout <<  count << endl;
}