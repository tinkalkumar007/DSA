#include<iostream>
using namespace std;
void binarySrch(int a[10],int n,int key){
	int s=0,end=n-1;
	while(s<=end){
		int m=(s+end)/2;
		if(a[m]>key){
			end=m-1;	
		}
		if(a[m]<key){
			s=m+1;
		}
		if(a[m]==key){
			cout<<"Key found at index: "<<m<<endl;
			break;
		}
		if(end<s){
			cout<<"Key not found!";
		}		
	}
	//cout<<"Key not Found!"<<endl;	
}
int main(){
	int a[10],n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter a sorted array of size: "<<n<<endl;
	//take input from user
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cout<<"Enter the key to search: ";
	cin>>key;
	// Do binary search to decrease time complexcity
	binarySrch(a,n,key);
	
	
	return 0;
}
