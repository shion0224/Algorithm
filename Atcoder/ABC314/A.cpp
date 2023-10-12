#include <bits/stdc++.h>
using namespace std;

int main() {
    string x = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int N;
    cin >> N;

    cout << x.at(0) << x.at(1) ;
    for (int i = 2; i <= N+1; i++){
        cout << x.at(i) ;
    }
    
    cout << endl;

}