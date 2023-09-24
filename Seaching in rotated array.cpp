#include<iostream>
using namespace std;
int searchIn(int a[],int s,int e,int key){
	// Base case
	if(s>e){
		return -1;
	}
	// rec case
	int m=(s+e)/2;
	if(a[m]==key){
		return m;
	}
	// case for iteration over first line
	if(a[s]<=a[m]){
		if(key>=a[s]&&key<=a[m]){
			return searchIn(a,s,m-1,key);
		}
		else{
			return searchIn(a,m+1,e,key);
		}
		
	}
	// case for iteration over last line
	if(key>=a[m]&&key<=a[e]){
		return searchIn(a,m+1,e,key);
		
	}
	else{
		return searchIn(a,s,m-1,key);
	}
	
}
int main(){
	int a[]={5,6,7,1,2,3,4};
	int key;
	cout<<"Enter key: "<<endl;
	cin>>key;
	// call a function for seaching in rotated array
	cout<<"Key is at index: "<<searchIn(a,0,6,key)<<endl;
	
	return 0;
}
