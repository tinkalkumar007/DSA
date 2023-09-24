//bubble sort algo
#include<iostream>
using namespace std;
void bubbleSort(int a[10],int n){
	int k;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	
}
void printArr(int a[10],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int a[10];
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubbleSort(a,n);
	//print array
	printArr(a,n);
}
