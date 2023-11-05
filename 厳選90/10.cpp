#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    int C[100009], P[100009], L[100009], R[100009];
    int A1[100009], A2[100009]; //1組の学生の累積和、2組の学生の累積和

    for (int i = 1; i <= N; i++) {
        cin >> C[i] ;
        cin >> P[i];
    }
    cin >> Q;
    for (int j = 1; j <= Q; j++) {
        cin >> L[j] >> R[j];
    }
    // A1[0] = 0, A2[0] = 0;

    //     for (int i = 1; i <= N; i++) {
    //         cout << P[i] << endl;
    // }
    for (int i = 1; i <= N; i++) {
        if(C[i] == 1){
            A1[i] = P[i] + A1[i-1];
            A2[i] = A2[i-1];
            
        }else{
            A2[i] = P[i] + A2[i-1];
            A1[i] = A1[i-1];
        }
        // cout << P[i] << endl;
        
        // 		A1[i] = A1[i - 1];
		// A2[i] = A2[i - 1];
		// if (C[i] == 1) A1[i] += P[i];
		// if (C[i] == 2) A2[i] += P[i];
    }

    for (int i = 1; i <= Q; i++)
    {
        cout << A1[R[i]] - A1[L[i]-1] << " " << A2[R[i]] - A2[L[i]-1] << endl;

        // C[L[i]] ; //学籍番号スタート
        // C[R[i]] ; //学籍番号エンド
        // P[L[i]] ; //点数スタート
        // P[R[i]] ; //点数エンド
    }
    
}