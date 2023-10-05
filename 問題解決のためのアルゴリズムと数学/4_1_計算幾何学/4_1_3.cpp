// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int p1[3], p2[3];
//     int r1, r2;
//     double R;

//     // xyz coordinates input
//     cin >> p1[0] >> p1[1] >> p1[2];
//     cin >> p2[0] >> p2[1] >> p2[2];

//     R = sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2) +
//              pow(p1[2] - p2[2], 2));

//     if (p1[2] > p2[2]) {
//         r1 = p1[2];
//         r2 = p2[2];
//     } else {
//         r1 = p2[2];
//         r2 = p1[2];
//     }


//     if (R == r1 + r2) {
//         cout << 4 << endl;

//     } else if (R < abs(r1 - r2)) {
//         cout << 3 << endl;

//     } else if (R == abs(r1 - r2)) {
//         cout << 2 << endl;

//     } else if (R > r1 + r2) {
//         cout << 5 << endl;

//     } else {
//         cout << 1 << endl;
//     }
// }

#include <iostream>
#include <cmath>
using namespace std;
 
double X1, Y1, R1;
double X2, Y2, R2;
 
int main() {
	// 入力
	cin >> X1 >> Y1 >> R1;
	cin >> X2 >> Y2 >> R2;
	
	// 円の中心間距離を求める
	double d = sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
	
	// 答えを出力
	if (d < abs(R1 - R2)) cout << "1" << endl;
	else if (d == abs(R1 - R2)) cout << "2" << endl;
	else if (d < R1 + R2) cout << "3" << endl;
	else if (d == R1 + R2) cout << "4" << endl;
	else cout << "5" << endl;
	return 0;
}
