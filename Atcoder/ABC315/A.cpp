#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

size_t c;
while((c = S.find_first_of("a")) != string::npos){
  S.erase(c,1);
}
while((c = S.find_first_of("i")) != string::npos){
  S.erase(c,1);
}
while((c = S.find_first_of("u")) != string::npos){
  S.erase(c,1);
}
while((c = S.find_first_of("e")) != string::npos){
  S.erase(c,1);
}
while((c = S.find_first_of("o")) != string::npos){
  S.erase(c,1);
}



    cout << S << endl;
}