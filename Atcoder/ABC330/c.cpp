#include <bits/stdc++.h>
using namespace std;

// void Check(){
//     int x,y;
//     int z = pow(x,2) + pow(y,2) ;

//     if(z%4 == 1) cout << "Yes" << endl; //2つの平方数の和で表される
//     else cout << "No" << endl;
// }

int main() {
    int d;
    cin >> d;
    long long y = 2e6;
    for (long long  x = 0; x <= 2e6; x++){
        while(y>0 && x*x + y*y >d) y--;
        
    }
    
}