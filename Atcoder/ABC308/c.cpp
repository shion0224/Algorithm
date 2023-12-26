#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    vector<double> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = a[i] / (a[i] + b[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }

    vector<double> d(n);
    sort(c.begin(), c.end());

}