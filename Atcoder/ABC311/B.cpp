#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    int cnt = 0;
    int max = 0;
    bool flg = false;
    cin >> N >> D;
    char s[1000][1000];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            cin >> s[i][j];
        }
    }

    for (int j = 0; j < D; j++) {
        for (int i = 0; i < N; i++) {
            if (s[i][j] == 'o') {  // 縦の列を判定
                flg = true;
                // cout << j << " " << i << endl;

            } else {
                flg = false;
                break;
            }
        }
        // cout << cnt << endl;

        if (flg) {
            cnt++;
            if(max < cnt)max = cnt;
        } else {
            cnt = 0;
        }
    }

    cout << max << endl;
}