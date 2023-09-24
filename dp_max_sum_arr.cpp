#include<iostream>
using namespace std;
int maxSum(int a[],int n){
	int dp[100]={};
	dp[0]=0;
	int q=0;
	for(int i=1;i<=n;i++){
		dp[i]=max(a[i-1]+dp[i-1],0);
		q=max(dp[i],q);
	}
	return q;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=maxSum(a,n);
	cout<<ans;	
	return 0;
}
