#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力
    long long T,N;
    cin >> T >> N;
    long long L[1000000],R[1000000];
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    //階差
    long long B[1000000];
    for (int i = 0; i <= T; i++) B[i] = 0;

    for (int i = 1; i <= N; i++){
        B[L[i]] += 1;
        B[R[i]] -= 1;
    } 

    //累積和
    long long S[1000000]={0};
    S[0] = B[0];

    for (int i = 1; i <= T; i++){
        S[i] = S[i-1] + B[i];
    }


    for (int i = 0; i < T; i++){
        cout << S[i] << endl;
    }
    
}