#include<bits/stdc++.h>
using namespace std;
#define m 3
#define n 10
int visited[m][n];
vector<vector<int>> dir{{0,-1},{0,1},{1,0},{-1,0}};
int solve(int mat[m][n],int i,int j){
    if(mat[i][j]==0||(i==1 && j==7)){
        return 0;
    }
    visited[i][j]=true;
    int ans=0;
    for(auto it:dir){
        int r=it[0]+i;
        int c=it[1]+j;
        if(r>=0 && c>=0 && r<m && c<n && !visited[r][c] && mat[r][c]!=0){
            int temp=1+solve(mat,r,c);
            ans=max(temp,ans);
        }
    }
    visited[i][j]=false;
    return ans;
}
int main(){
    int mat[m][n]={ { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
                    { 1, 1, 0, 1, 1, 0, 1, 1, 0, 1 },
                    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } };
    memset(visited,false,sizeof(visited));
    cout<<solve(mat,0,0);
    return 0;
}