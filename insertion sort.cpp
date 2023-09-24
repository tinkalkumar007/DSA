#include<iostream>
using namespace std;
void insertionSort(int a[10],int n){
	for(int i=1;i<n;i++){
		int no=a[i];
		int j=i-1;
		while(j>=0&&a[j]>no){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=no;
	}	
}
void printArr(int a[10],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";		
	}
}
int main(){
	int a[10],n;
	cout<<"Enter the no of element: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertionSort(a,n);
	// print array
	printArr(a,n);
	return 0;
}
