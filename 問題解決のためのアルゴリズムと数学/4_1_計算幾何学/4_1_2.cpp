#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    double x[N],y[N];
    double e;
    double min = 100000000.0;
    for (int i = 1; i <= N; i++){
        cin >> x[i] >> y[i];
    }

    for (int i = 1; i <= N; i++){
        for (int j = i+1; j <= N; j++){
            e = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
            if(e < min) min = e;
        }
    }
    
    cout << std::fixed << std::setprecision(32) <<  min << endl;
}