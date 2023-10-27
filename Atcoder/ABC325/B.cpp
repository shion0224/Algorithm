#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int W[1000000], X[1000000];
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> X[i];
    }

    // 世界標準時を起点に考える。
    //  9 -18 時だったら参加できる。
    //  1時だった場合
    int t = 0;

int max = 0;
int sum = 0;
    for (int i = 0; i < 24; i++) {   // 時間
        for (int j = 1; j <= N; j++)  // 拠点
        {
            t = X[j] + i; //各支所の会議が始まる時間
            if (t >= 24) {
                t -= 24;
            }

            if (t >= 9 && t < 18) {
                sum += W[j];
                
            }

            if(max < sum) max = sum;

        }
        sum =0;
    }

    cout << max << endl;

}