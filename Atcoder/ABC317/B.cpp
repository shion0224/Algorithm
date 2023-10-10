#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int ans[N]={0};
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A, A+N);
    //     for (int i = 0; i < N; i++){
    //     cout << A[i] << endl;
    // }
    for (int i = 0; i < N; i++)
    {
        if(A[i+1]==A[i]+1){
            continue;
        }else{
            cout << A[i] +1 << endl;
            return 0;
        }
    }
    

    
}