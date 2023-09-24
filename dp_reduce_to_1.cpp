#include<iostream>
using namespace std;
const int inf=(int)1e9;
int memo[1000];
int reduceNo(int n){// memoization approach
	if(n==1){
		return 0;
	}
	int q1=inf,q2=inf,q3=inf;// assign all queries to infinity
	if(memo[n]!=-1) return memo[n];
	
	if(n%3==0) q1=1+reduceNo(n/3);
	if(n%2==0) q2=1+reduceNo(n/2);
	q3=1+reduceNo(n-1);
	memo[n]=min(q1,min(q2,q3)); // has to be do this
	return memo[n];
}
int reduceNo_DP(int n){// bottom up approach
	int dp[1000];
	dp[0]=0; dp[1]=0;
	dp[3]=1; dp[2]=1;
	for(int i=4;i<=n;i++){
		int q1=inf,q2=inf,q3=inf;
		if(i%3==0) q1=1+dp[i/3];
		if(1%2==0) q2=1+dp[i/2];
		q3=1+dp[i-1];
		dp[i]=min(q1,min(q2,q3));// has to be update
	}
	return dp[n];
}
int main(){
	int n;
	cin>>n;
	fill(memo,memo+n+1,-1);
	cout<<reduceNo_DP(n)<<endl;
	
	return 0;
}
