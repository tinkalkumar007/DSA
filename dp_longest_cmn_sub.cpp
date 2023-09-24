#include<iostream>
#include<cstring>
using namespace std;
int lcs(char X[],char Y[]){
	int dp[100][100];
	int m=strlen(X);
	int n=strlen(Y);
	// base case
	for(int i=0;i<=m;i++) dp[i][0]=0;
	for(int j=0;j<=n;j++) dp[0][j]=0;
	// now lcs 
	for(int i=1;i<=m;i++){
		int q=0;
		for(int j=1;j<=n;j++){
			if(X[i-1]==Y[j-1]){
				q=1+dp[i-1][j-1];
			}
			else{
				q=max(dp[i-1][j],dp[i][j-1]);
			}
			dp[i][j]=q;
		}
	}
	return dp[m][n];
}
int main(){
	char str1[100],str2[100];
	cin>>str1>>str2;
	
	int ans=lcs(str1,str2);
	cout<<ans;
	
	
	return 0;
}
