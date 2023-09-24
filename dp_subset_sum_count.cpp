#include<bits/stdc++.h>
using namespace std;
int subsetSum(int dp[][1111],int a[],int sum,int n){
	if(sum==0){
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(a[i-1]<=j){
				dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
		}
    } 
	return dp[n][sum];
}
int main(){
	int n,sum;
	cin>>n>>sum;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dp[n+1][1111];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0){
				dp[i][j]=false;
			}
			if(j==0){
				dp[i][j]=true;
			}
		}
	}
    cout<<subsetSum(dp,a,sum,n)<<endl;
	return 0;
}
