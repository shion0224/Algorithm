// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, X;
//     cin >> N >> X;

//     vector<int> A(N); 
//     int sum = 0;

//     for (int i = 0; i < N-1; i++) {
//         cin >> A[i];
//     }

//     sort(A.begin(), A.end());

//     // for (int i = 0; i < N; i++) {
//     //     cout << A[i] << endl;
//     // }

//     for (int i = 2; i < N-1; i++) {
//         sum += A[i]; 
//         // cout << A[i] << endl;
//     }


//     if(X-sum>=0 && X-sum <= 100){
//         cout << X-sum << endl;
//     }else{
//         cout << -1 << endl;
//     }
    
//     return 0;
// }
