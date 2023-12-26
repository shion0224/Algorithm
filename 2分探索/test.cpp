#include<bits/stdc++.h>
using namespace std;

int N, A[1000000];

bool question(int m, int K){
    return A[m] >= K;
}

int binarySearch(int K){
    int ng = -1;
    int ok = N;
    while(ok - ng > 1){
        int m = (ng + ok) / 2;
        if(question(m, K)) ok = m;
        else ng = m;
    }
    return ok;
}

int main(){
    cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];

    int K;
    cin >> K;
    cout << binarySearch(K) << endl;
}
