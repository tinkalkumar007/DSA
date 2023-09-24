#include<iostream>
using namespace std;
int memo[100];
int findCost(int a[],int length){
	// base case
	if(length==0) return 0;
	
	if(memo[length]!=-1){
		return memo[length];
	}
	int maxCost=0;
	for(int i=1;i<=length;i++){
		int cost=a[i]+findCost(a,length-i);
		maxCost=max(maxCost,cost);
	}
	
	memo[length]=maxCost;
	return maxCost;
}
int main(){
	int n;
	cout<<"Enter Length of rod: "<<endl;
	cin>>n;
	int a[n];
	a[0]=-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memo[i]=-1;
	}
	int ans=findCost(a,n);
	cout<<ans<<endl;
	
	return 0;
}
