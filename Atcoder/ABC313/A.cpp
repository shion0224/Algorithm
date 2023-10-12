#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int P[1000];
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> P[i];
    }

    int max=0;
    for (int i = 1; i < N; i++){
        if(max < P[i]){
            max = P[i];
        }
    }


    if(max < P[0]){
        cout << 0 << endl;
        return 0;
    }else{
        cout << max - P[0] +1 << endl;
    }
    
    
    
}