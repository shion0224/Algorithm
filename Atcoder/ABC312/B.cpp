// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// //入力
//     int N,M;
//     cin >> N >> M;
//     char g[N][M];
//     for (int i = 0; i < N; i++){
//         for (int j = 0; j < M; j++){
//             cin >> g[i][j];
//         }
        
//     }

//     // for (int i = 0; i < N; i++){
//     //     for (int j = 0; j < M; j++){
//     //         if(g[i][j] == '#' && g[i+1][j] == '#' && g[i+2][j] == '#' && g[i+1][j] == '#' && g[i+1][j+1] == '#' && g[i+1][j+2] == '#' && g[i+2][j] == '#' && g[i+2][j+1] == '#' && g[i+2][j+2] == '#'){
//     //             if(g[i+6][j+6] == '#' && g[i+6][j+7] == '#' && g[i+6][j+8] == '#' && g[i+7][j+6] == '#' && g[i+7][j+7] == '#' && g[i+7][j+8] == '#' && g[i+8][j+6] == '#' && g[i+8][j+7] == '#' && g[i+8][j+8] == '#'){
//     //                 if(g[i][j+3] == '.'&& g[i+1][j+3]=='.'&& g[i+2][j+3]=='.'&& g[i+3][j]=='.'&&g[i+3][j+1]=='.'&&g[i+3][j+2]=='.'&&g[i+3][j+3]=='.'){

//     //                 }
//     //                 cout << "Yes" << endl;
//     //                 return 0;
//     //             }

//     //             }
//     //     }
        
//     // }

// cout << endl;

// // 出力
//     // for (int i = 0; i < N; i++){
//     //     for (int j = 0; j < M; j++){
//     //         cout << grid[i][j] ;
//     //     }
//     //     cout  << endl;
        
//     // }
    
// }

#include<stdio.h>

char s[110][110];
int check(int i,int j){
	for(int ii=0;ii<3;ii++)for(int jj=0;jj<3;jj++)if(s[i+ii][j+jj]!='#')return 0;
	for(int ii=0;ii<3;ii++)for(int jj=0;jj<3;jj++)if(s[i+8-ii][j+8-jj]!='#')return 0;
	for(int ii=0;ii<4;ii++)if(s[i+ii][j+3]!='.')return 0;
	for(int jj=0;jj<4;jj++)if(s[i+3][j+jj]!='.')return 0;
	for(int ii=0;ii<4;ii++)if(s[i+8-ii][j+8-3]!='.')return 0;
	for(int jj=0;jj<4;jj++)if(s[i+8-3][j+8-jj]!='.')return 0;
	return 1;
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)scanf("%s",s[i]);
	for(int i=0;i<n-8;i++)for(int j=0;j<m-8;j++){
		if(check(i,j))printf("%d %d\n",i+1,j+1);
	}
}
