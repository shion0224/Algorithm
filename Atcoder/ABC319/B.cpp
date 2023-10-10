#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string s;
    cin >> N;

    // for (int i = 0; i < N; i++){
    //     s[i]= '-';
    // }
    

    for (int i = 0; i < N; i++) {
        s += "-";
        for (int j = 1; j < 9; j++) {
            if (N % j == 0 && i % (N / j) == 0) {
                s[i] = j+ '0';
                break;
            }
        }
    }

    cout << s << endl;
}