#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    int a=0,b=0,c=0;
    int cnt =0;
    cin >>n;

    cin >> s;
    int i=0;

    while(a==0 || b==0 || c==0){
        if(s[i]=='A'){
            a+=1;
        }else if(s[i]=='B'){
            b+=1;
        }else if(s[i]=='C'){
            c+=1;
        }
        i++;
        cnt++;
    }

    cout << cnt << endl;
}