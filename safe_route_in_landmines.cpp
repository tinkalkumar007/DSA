#include<bits/stdc++.h>
using namespace std;
#define m 12
#define n 10
int visited[m][n];
vector<vector<int>> dir{{1,0},{-1,0},{0,1},{0,-1}};
bool isSafe(int mat[m][n],int i,int j){
    if(mat[i][j]==0||visited[i][j]) return false;
    for(auto it:dir){
        int r=it[0]+i;
        int c=it[1]+j;
        if(r>=0 && c>=0 && r<m && c<n && mat[r][c]==0){
            return false;
        }
    }
    return true;
}
void findPath(int mat[m][n],int i,int j,int min_dist,int dist){
    if(j==n-1){
        min_dist=min(min_dist,dist);
        return;
    }
    if(min_dist<dist){
        return;
    }
    visited[i][j]=true;
    for(auto it:dir){
        int r=it[0]+i;
        int c=it[1]+j;
        if(r>=0 && c>=0 && r<m && c<n && isSafe(mat,r,c)){
            findPath(mat,r,c,min_dist,dist+1);
        }
    }
    visited[i][j]=false;
    return;
}
int main(){
    int mat[m][n]={
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
    int min_dist=INT_MAX;
    for(int i=0;i<m;i++){
        if(mat[i][0]==1){
            memset(visited,false,sizeof(visited));
            findPath(mat,i,0,min_dist,0);
            if(min_dist==n-1){
                break;
            }
        }
    }
    cout<<min_dist<<endl;
    return 0;
}