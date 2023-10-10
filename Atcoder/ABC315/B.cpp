#include <bits/stdc++.h>
using namespace std;

int main() {
    int M;
    int ans_M;
    int ans_D;
    int D[100];
    int sum=0;
    cin >> M;
    for (int i = 1; i <= M; i++){
        cin >> D[i];
    }

    for (int i = 1; i <= M; i++){
        sum += D[i];
    }

    ans_D =(sum+1) /2;
    sum =0;

for (int i = 1; i <= M; i++)
{
    if(ans_D -sum > 0){
        sum += D[i];
        ans_M = i;
    }
}

sum =0 ;

for (int i = 1; i <= ans_M ; i++)
{
    if(i <=ans_M-1){
        sum += D[i];
    }else{
        ans_D = ans_D - sum;
    }

    // cout << ans_D << endl;

}


    cout << ans_M << " " << ans_D << endl;




    
}