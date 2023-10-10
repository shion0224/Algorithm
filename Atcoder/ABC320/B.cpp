// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string S;

//     for (int i = 0; i < S.length(); i++){
//         for (int j = S.length() -i; j < S.length(); j++){
//             S[i-2] =
//         }
        
//     }
    
// }

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_palindrome(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) if (s[i] != s[n - i - 1]) return false;
	return true;
}

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int ans = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			string t = "";
			for (int k = i; k < j; k++) t += s[k];
            cout << t << endl;
			if (is_palindrome(t)) ans = max(ans, j - i);
		}
	}
	cout << ans << '\n';
}
