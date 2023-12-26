#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s,k;
    cin >> n >> s >> k;
    int p[n],q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }

int sum = 0;
int ans = 0;

    for (int i = 0; i < n; i++)
    {
        sum += p[i] * q[i];
        // sum =0;
    }
        if(sum >= s){
            ans += sum+0;
        }else{
            ans += sum+k;
        }

    cout << ans << endl;
    
    
}