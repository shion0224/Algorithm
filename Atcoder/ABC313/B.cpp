// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N,M;
//     cin >> N >> M;
//     int A[M],B[M];
//     bool ans = false;
//     int pos = 1;


//     for (int i = 0; i < M; i++){
//         cin >> A[i] >> B[i];
//     }

//     for (int i = 0; i < M; i++){
//         if(A[i]>B[i]){
//             ans = true;
//         }else{
//             ans = false;
//             pos = i+1;
//             break;
//         }
//     }

//     for (int i = pos; i < M; i++){
//         if(A[i]>B[i]){
//             ans = true;
//         }else{
//             ans = false;
//             // pos = i+1;
//             break;
//         }
//     }
    
//     if(ans){
//         cout << pos << endl;
//     }else{
//         cout << -1 << endl;
//     }
// }