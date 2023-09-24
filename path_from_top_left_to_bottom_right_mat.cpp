#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<vector<int>> dir{{0,1},{1,0}};
void solve(vector<vector<int>> &mat,int i,int j,int m,int n,vector<int> v){
    if(i==m-1 && j==n-1){
        v.push_back(mat[i][j]);
        ans.push_back(v);
        return;
    }
    if(i<0 || j<0 || i>=m || j>=n){
        return;
    } 
    if(mat[i][j]==-1){
        return;
    }
    v.push_back(mat[i][j]);
    int no=mat[i][j];
    mat[i][j]=-1;
    solve(mat,i,j+1,m,n,v);
    solve(mat,i+1,j,m,n,v);
    /*for(auto it:dir){
        int r=it[0]+i;
        int c=it[1]+j;    
        solve(mat,r,c,m,n,v);
    }*/
    mat[i][j]=no;
    v.pop_back();
    return;
}
void print(vector<vector<int>> &ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    vector<int> v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    solve(mat,0,0,m,n,v);
    print(ans);
    return 0;
}