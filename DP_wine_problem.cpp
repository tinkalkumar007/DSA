#include<iostream>
#include<cstring>
using namespace std;
int cnt;
int memo[100][100];
int maxProfit(int a[],int be,int en,int year){
	++cnt;
	if(be>en){
		return 0;
	}
	if(memo[be][en]!=-1) return memo[be][en];
	int q1=a[be]*year + maxProfit(a,be+1,en,year+1);
	int q2=a[en]*year + maxProfit(a,be,en-1,year+1);
	int ans=max(q1,q2);
	memo[be][en]=ans;
	return ans;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	memset(memo,-1,sizeof(memo));
	int ans=maxProfit(a,0,n-1,1);
	cout<<ans<<endl;
	cout<<cnt<<endl;
	return 0;
}
