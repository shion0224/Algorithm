#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    cin >> H >> W;
    int A[H+1][W+1];
    int B[H+1][W+1]={0}; //line , row
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> A[i][j];
        }
    }

    int line[H+1]={0},row[W+1]={0};
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            line[i] += A[i][j]; //lineの合計
        }
    }

    for (int j = 1; j <= W; j++) {
        for (int i = 1; i <= H; i++) {
            row[j] += A[i][j]; //rowの合計
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cout << line[i] + row[j]  - A[i][j] << " " ;
            
        }
        cout << endl;
    }
    
}