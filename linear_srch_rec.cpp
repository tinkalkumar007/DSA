#include<iostream>
using namespace std;
int linearSrch(int *a,int n,int key){
	//base case
	if(a[n]==key){
		return n;
	}
	if(n<0){
		return -1;
	}
	return linearSrch(a,n-1,key);
	
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=linearSrch(a,n-1,k);
	if(ans==-1){
		cout<<"Key not found!";
	}
	else{
		cout<<"Key is present at index: "<<ans<<endl;
	}
	
	return 0;
}
