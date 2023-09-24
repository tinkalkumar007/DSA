#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,7};
	int n=sizeof(a)/sizeof(int);
	int sum=0;
	for(int i=0;i<n;i++) sum+=a[i];
	
	bool dp[n+1][sum+1]={false};
	// initilizer 
	for(int i=0;i<=n;i++){
		dp[i][0]=true;
	}
	// subset sum problem
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(a[i-1]<=j){
				dp[i][j]=(dp[i-1][j-a[i-1]]||dp[i-1][j]);
			}
			else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	// min subset sum difference(devide the arr in the two subset the min  subset sum)
	// the idea the beside of finding sum of both subset find sum of one subset
	// other one will be totalsum-sum1;
	// and we minizie this (totalsum-2*sum1) only;
	// sum1 we can find subet sum problem
	// last row of subset sum problem will give all the possible that subsets of an arr
	int minSum=INT_MAX;
	for(int i=0;i<=sum/2;i++){
		if(dp[n][i]){
			minSum=min(sum-(2*i),minSum);
		}
	}
	cout<<minSum<<endl;
	return 0;
}
