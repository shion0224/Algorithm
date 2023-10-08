#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> Sp;
    string S;
    cin >> S;
    Sp = {
        {"tourist", 3858}, 
        {"ksun48", 3679}, 
        {"Benq", 3658}, 
        {"Um_nik", 3648}, 
        {"apiad", 3638}, 
        {"Stonefeang", 3630}, 
        {"ecnerwala", 3613}, 
        {"mnbvmar", 3555}, 
        {"newbiedmy", 3516}, 
        {"semiexp", 3481}
    };

    cout << Sp[S] << endl;

    return 0;
}
