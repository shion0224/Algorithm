#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    bool ans = false;
    string S;

    cin >> N >> S;


    for (int i = 0; i < N; i++){
        if(S[i]=='A'){
            if(S[i+1] == 'B'){
                if(S[i+2] == 'C'){
                    ans = true;
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
    
    if(ans == false)cout << "-1" << endl;
    
}