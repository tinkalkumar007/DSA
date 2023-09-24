#include<iostream>
using namespace std;
void waveSort(int a[10],int n){
	for(int i=1;i<n;i+=2){
		if(a[i-1]<a[i]){
			swap(a[i-1],a[i]);
		}
		else{
			continue ;
		}
		if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
		else{
			continue;
		}
	}
	
}
void printArr(int a[10],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[6];
	cout<<"Enter no of element: ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin.ignore();
	// wave sorting algo
	waveSort(a,n);
	// print array
	printArr(a,n);
	return 0;
}
