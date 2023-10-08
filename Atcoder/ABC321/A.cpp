#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    bool flg = false;
    cin >> N;

    for (int i = 0; i < N.size(); i++){
        // cout << N[i] << endl;
        if(N.size() == 1){
            cout << "Yes" << endl;
            return 0;
        }
        if(N[i]>N[i+1]){
            // cout << "aaa" << endl;
            flg=true;
            continue;
        }else{
            flg=false;
            cout << "No" << endl;
            return 0;
        }
    }

    if(flg == true){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
}