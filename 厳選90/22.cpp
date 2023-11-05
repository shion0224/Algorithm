#include <bits/stdc++.h>
using namespace std;

// int GCD(long long int a, long long int b) {
//     while(a != 0 && b != 0){
//         if(a>=b){
//             a = a%b;
//         }else{
//             b = b%a;
//         }
//         // cout << a << " " << b << endl;
//     }
//     return (a == 0) ? b : a;
// }

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long int A, B, C;
    cin >> A >> B >> C;
    long long int r = gcd(A, gcd(B, C));
    cout << (A / r - 1LL) + (B / r - 1LL) + (C / r - 1LL) << endl;
    // A,Bの最大公約数を求めたい
}