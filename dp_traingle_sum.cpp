#include<bits/stdc++.h>
using namespace std;
int a1[1000];
int sumTriangle(int a[][100],int n){
	int dp[101][101]={};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<=n;i++){
		if(sum<dp[n][i]){
			sum=dp[n][i];
		}
	}
	return sum;
}
int main(){
	int t;
	int n;
	cin>>t;
	for(int i=0;i<t;i++){		
		cin>>n;
		int a[n][100];
		for(int j=1;j<=n;j++){
			for(int k=1;k<=j;k++){
				cin>>a[j][k];
			}
		}
		a1[i]=sumTriangle(a,n);
	}
	for(int i=0;i<t;i++){
		cout<<a1[i]<<endl;
	}	
	
	return 0;
}
