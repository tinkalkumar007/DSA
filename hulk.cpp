#include<iostream>
using namespace std;
int enemyLevel(int n){
	int ans;
	while(n>0){
		ans+=(n&1);
		n=n>>1;		
	}
	return ans;	
}
int hulk(int n){
	int k;
	while(n>0){
		n=n&(n-1);
        k+=1;	
	}
	return k;
}
int main(){
	int n;
	cin>>n;
	cout<<enemyLevel(n)<<endl;
	cout<<hulk(n)<<endl;
	
	
	return 0;
}
