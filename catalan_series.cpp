#include<iostream>
using namespace std;
int catalanNum(int n){
	if(n==0){
		return 1;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=catalanNum(i-1)*catalanNum(n-i);
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<catalanNum(i)<<" ";
	}
	
	return 0;
}
