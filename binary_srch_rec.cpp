#include<iostream>
using namespace std;
int binarySrch(int *a,int s,int e,int key){
	int mid=(s+e)/2;
	//base case
	if(a[mid]==key){
		return mid;
	}
	if(s>e){
		return -1;
	}
	if(a[mid]<key){
		binarySrch(a,mid+1,e,key);
	}
	else{
		binarySrch(a,s,mid-1,key);
	}
	
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<binarySrch(a,0,n-1,k)<<endl;
	
	return 0;
}
