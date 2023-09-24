#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int solve(int arr[],int i,int j){
	if(i>=j){
		return 0;
	}
	if(dp[i][j]!=-1){
	    return dp[i][j];
	}
	int k;
	int tempAns;
	dp[i][j]=INT_MAX;
	for(k=i;k<j;k++){
		tempAns=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
		dp[i][j]=min(dp[i][j],tempAns);
		//cout<<dp[i][j]<<endl;
	}
	return dp[i][j];
}
int main(){
	int arr[5]={40,20,30,10,30};
	memset(dp,-1,sizeof(dp));
	cout<<solve(arr,1,4)<<endl;
	return 0;
}
