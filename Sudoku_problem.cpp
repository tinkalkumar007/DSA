#include<iostream>
#include<cmath>
using namespace std;
bool canPlace(int mat[][10],int i,int j,int n,int num){
	for(int x=0;x<n;x++){
		if(mat[x][j]==num||mat[i][x]==num){
			return false;
		}
	}
	int rn=sqrt(n);
	int sx=(i/rn)*rn;
	int sy=(j/rn)*rn;
	for(int x=sx;x<sx+rn;x++){
		for(int y=sy;y<sy+rn;y++){
			if(mat[x][y]==num){
				return false;
			}
		}
	}
	return true;	
}
bool solveSudoku(int mat[][10],int i,int j,int n){
	//base case
	if(i==n){
		// print the matrix
		for(int x=0;x<n;x++){
			for(int y=0;y<n;y++){
				cout<<mat[x][y]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	// if we reached at last column
	if(j>n-1){
		return solveSudoku(mat,i+1,0,n);
	}
	//pre-filled no
	if(mat[i][j]!=0){
		return solveSudoku(mat,i,j+1,n);
	}
	// Rec case
	for(int x=1;x<=n;x++){
		if(canPlace(mat,i,j,n,x)){
			mat[i][j]=x;
			bool isRight=solveSudoku(mat,i,j+1,n);
		    if(isRight){
			    return true;
	    	}
		}	
	}
	// back Tracking
	mat[i][j]=0;
	return false;	
}
int main(){
	int n;
	cin>>n;
	int mat[10][10]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	solveSudoku(mat,0,0,n);
	
	return 0;
}
