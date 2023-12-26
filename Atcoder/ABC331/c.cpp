#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){cin>>a[i];}

    int sum=0;
    auto b = a;
    sort(b.begin(),b.end());
    for (int i = 0; i < n; i++){
        auto Iter = lower_bound((b).begin(),(b).end(), b[i]+1);
        cout << b[i] << " ";
        cout << *Iter << " ";
        cout << Iter- b.begin() << " ";
        cout << b.end() - Iter << " ";
        cout << endl;
    }
    
    
}