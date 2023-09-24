#include<iostream>
using namespace std;
void countingSort(int a[10],int n){
	int a1[10]={0};
	for(int i=0;i<n;i++){
		a1[a[i]]++;	
	}
	int i=0;
	while(i<10){
		if(a1[i]>=1){
			cout<<i<<" ";
			a1[i]--;
		}
		else{
			i++;
		}
	}
}
int main(){
	int a[10];
	int n;
	cout<<"Enter the no of element: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// Counting sort Algo
	countingSort(a,n);
	
	return 0;
}
