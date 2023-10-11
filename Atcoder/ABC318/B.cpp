#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N],B[N],C[N],D[N];
    int ans[1000][1000] = {0};
    for (int i = 0; i < N; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int i = 0; i < N; i++){
        for (int j = A[i]; j < B[i]; j++){
            for (int k = C[i]; k < D[i]; k++){
                ans[j][k] += 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 100; i++){
        for (int j =0 ; j<100; j++){
            if(ans[i][j] >= 1){
                cnt ++;
                // cout << i << " " << j << endl;
            } 

        }
    }
    cout  << cnt << endl;
}