#include<iostream>
using namespace std;
int minCost(int grid[][100],int m,int n){
	// dynamic allocation
	int dp[100][100]={};
	// base case
	dp[0][0]=grid[0][0];
	// compute first row
	for(int c=1;c<n;c++){
		dp[0][c]=dp[0][c-1]+grid[0][c];
	}
	// compute first column
	for(int r=1;r<m;r++){
		dp[r][0]=dp[r-1][0]+grid[r][0];
	}
	// now compute remaining matrix
	for(int r=1;r<m;r++){
		for(int c=1;c<n;c++){
			dp[r][c]=min(dp[r-1][c],dp[r][c-1])+grid[r][c];
		}
	}
	return dp[m-1][n-1];
}
int main(){
	int grid[100][100]={
		{1,2,3},
		{4,8,2},
		{1,5,3}
	};
	int ans=minCost(grid,3,3);
	cout<<ans;
	
	return 0;
}
