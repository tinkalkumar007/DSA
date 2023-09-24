#include<iostream>
using namespace std;
int main(){
	// define array
	int a[10]={1,3,5,7};
	for(int i=0;i<=9;i++){
		cin>>a[i];
	}
	// square values
	for(int i=0;i<=9;i++){
		a[i]=a[i]*a[i];
	}
	//print array
	for(int i=0;i<=9;i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	// reverse an array
	for(int i=9;i>=0;i--){
		cout<<a[i]<<",";
	}
	
	
	return 0;
}
