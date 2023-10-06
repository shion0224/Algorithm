#include <bits/stdc++.h>
using namespace std;

int main() {
    //入力
    long long  N;
    cin >> N; //全ての駅数
    int A[2000000];
    for(int i=1; i<=N-1; i++) cin >> A[i];
    long long  M;
    cin >> M; //太郎が行く駅数
    int b[2000000];
    for(int j=1; j<=M; j++) cin >> b[j];

    //累積和
    long long  S[200000];
    long long  ans=0;
    S[1] = 0;
    //ここの前処理をやる。
    for(int i=2;i<=N; i++) S[i] = S[i-1] + A[i-1];

    for(int j=1; j<=M-1; j++) {
        if(b[j]<b[j+1]){
            ans += (S[b[j+1]] - S[b[j]]);
        }else{
            ans += (S[b[j]] - S[b[j+1]]);
        }
    }

    //出力
    cout << ans << endl;

}