#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int dp[2*N] = {0};
    // 入力
    for (int i = 1; i < N; i++) cin >> A[i];

    dp[1] == A[1];
    dp[2] == A[2];

    for (int i = 3; i <= N; i++){
        if(dp[i-1] > dp[i-2]){ //1こ前と2こ前を比較
            dp[i] = dp[i-1] + A[i];
        }else{
            dp[i] = dp[i-2] + A[i];
        }
        cout << dp[i] << endl;
    }

    cout <<  *max_element(dp,dp+ 2*N) << endl;
}