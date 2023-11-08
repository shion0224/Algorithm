#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= W; j++) {
            
            if (j % 2 == 0 || i % 2 == 0) {
                cnt2++;
            } else {
                cnt1++;
            }
        }
    }

    if(N==1||W==1){
        cout << N*W << endl;
    }else{
    cout << cnt1 << endl;

    }
}

// #####

// #.#.#.#
// .......
// #.#.#.#
// .......
// #.#.#.#

// #.....#
// ..#.#..
// #......
// .......
// .......
