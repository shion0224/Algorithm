#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int p=m,l=0;
    int tmp=0;
    int l_a=0;
    string s;

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0'){
            p=m;
            // tmp = l;
            if(tmp < l){
                tmp = l;
            }
            l=0;

        }if(s[i] == '1' ){
            if(p>0){
                p--;
            }else{
                l++;
            }
            
        }if(s[i] == '2'){
            l++;
        }
    }

int ans =0;
if(tmp < l){
    ans = l;
}else{
    ans = tmp;
}

    cout << ans << endl;
    
    
}