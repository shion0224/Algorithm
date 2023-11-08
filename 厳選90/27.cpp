#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    map <string, int> a;
    string S;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> S;
        if (a.find(S) != a.end()) {
            continue;
        }else{
            a.insert(make_pair(S, 1));
            cout << i+1 << endl;
        }
    }
}