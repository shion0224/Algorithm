#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,P;
    int cnt=0;
    cin >> N >> M >> P;

    for (int i = M; i <= N; i += P ){
        cnt ++ ;
    }
    
    cout << cnt << endl;
}