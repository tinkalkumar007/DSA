#include<bits/stdc++.h>
using namespace std;
#define N 8
vector<vector<int>> dir{{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
void print(int mat[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int solve(int mat[N][N],int i,int j,int move){
    if(move==N*N){
        return 1;
    }
    for(auto it:dir){
        int r=it[0]+i;
        int c=it[1]+j;
        if(r>=0 && c>=0 && r<N && c<N && mat[r][c]==-1){
            mat[r][c]=move;
            if(solve(mat,r,c,move+1)){
                return 1;
            }
            else{
                mat[r][c]=-1;
            }
        }
    }
    return 0;
}
int main(){
    int mat[N][N];
    memset(mat,-1,sizeof(mat));
    mat[0][0]=0;
    if(solve(mat,0,0,1)){
        print(mat);
    }
    else{
        cout<<"No Solution!"<<endl;
    }
    return 0;
}