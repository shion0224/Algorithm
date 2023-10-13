#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    int cnt = 0;
    cin >> N >> M;
    string c[1000], d[1000];
    for (int i = 1; i <= N; i++) {
        cin >> c[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> d[i];
    }

    int p[1000];

    for (int i = 0; i <= M; i++) {
        cin >> p[i];
    }

    bool notis = true;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            // cout << c[i] << " " << d[j] << endl;
            if (c[i] == d[j]) {
                cnt += p[j];
                // cout << p[j]<< endl;
                notis = true;
                break;
            }else{
                notis = false;
            }
        }
        if(notis==false){
            cnt += p[0];
        }
    }

    cout << cnt << endl;
}