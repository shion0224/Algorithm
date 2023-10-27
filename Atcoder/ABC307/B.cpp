#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s[1000];
    string moji[10000]; //ここを配列にしているからだめ
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    int z = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                moji[z] = s[i] + s[j];
            }else{
                moji[z] = "??z? ";
            }
                cout << moji[z] << endl;
            z++;
        }
    }

    bool ans = false;
    for (int i = 0; i < n * n; i++) {
        // cout << moji[i].length() << endl;
        for (int j = 0; j < moji[i].length(); j++) {
            if (moji[i] == moji[moji[i].length() + 1 - j]) {
                ans = true;
                // cout << moji[i] << endl;

            } else {
                ans = false;
            }
        }
        if (ans) {
            cout << "Yes" << endl;
            return 0;
        } 
    }

    if(ans == false){
        cout << "No" << endl;
    }
}