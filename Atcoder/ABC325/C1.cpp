#include <bits/stdc++.h>
using namespace std;

int h, w;
vector<string> s;

void dfs(int i, int j) {
    s[i][j] = '.'; 
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if ((0 <= dx + i) && (dx + i < h) && (0 <= dy + j) &&
                (dy + j < w) && (s[dx + i][dy + j] == '#')) {
                dfs(dx + i, dy + j);
            }
        }
    }

    return;
}

int main() {
    cin >> h >> w;
    s.resize(h);
    for (int i = 0; i < h; ++i) {
        cin >> s[i];
    }

    int result = 0;
    for (int i = 0; i < h; ++i) { 
        for (int j = 0; j < w; ++j) {
            if (s[i][j] == '#') { 
                ++result;
                dfs(i, j); //#を.に変えるのを再帰的にDFSで行う。
            }
        }
    }

    cout << result << endl;

    return 0;
}