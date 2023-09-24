#include<iostream>
using namespace std;
int j=0;
void bubbleSort(int a[],int n){
	int k=0;
	//base case
	if(n==0){
		return;
	}
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			k=a[i];
			a[i]=a[i+1];
			a[i+1]=k;
		}
	}
	bubbleSort(a,n-1);
	cout<<a[j]<<" ";
	j++;
}
void bubbleSort2(int *a,int j,int n){
	//base case
	if(n==1){
		return;
	}
	if(j==n-1){
		return bubbleSort2(a,0,n-1);
	}
	if(a[j]>a[j+1]){
		swap(a[j],a[j+1]);
	}
	bubbleSort2(a,j+1,n);
	return;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubbleSort(a,n);
	cout<<endl;
	bubbleSort2(a,0,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
