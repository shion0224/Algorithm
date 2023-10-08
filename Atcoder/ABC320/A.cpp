#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    long long ans ;
    cin >> A >> B;
    ans = pow(A,B) + pow(B,A);

    cout << ans << endl;
}