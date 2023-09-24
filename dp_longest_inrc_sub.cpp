#include<iostream>
using namespace std;
int lis(int a[],int n){
	int dp[100]={};
	// base case
	for(int i=0;i<n;i++) dp[i]++;
	// now lis
	int best=-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>=a[j]){
				int curlen=1+dp[j];
				dp[i]=max(curlen,dp[i]);
			}
		}
		best=max(best,dp[i]);
	}
	return best;	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans= lis(a,n);
	cout<<ans<<endl;
	
	
	return 0;
}
