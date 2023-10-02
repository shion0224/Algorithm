#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,S;
    cin >> N >> S;
    int A[N];
    bool dp[N][S];
    
    // 入力
    for (int i = 1; i < N; i++){
        cin >> A[i];
    }


    for (int i = 1; i < N; i++){
        for (int j = 1; j < S; i++){
            dp[i][1] = true;

            if(i==0){
                dp[0][j] = false;
            }

            if(dp[i-1][j] == true){
                dp[i][j] = true ;  
                dp[i][j+A[i-1]] = true ;  
            }


            
        }
        
    }
    
    // 答えを出力
	if (dp[N][S] == true) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}