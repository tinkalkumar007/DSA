#include<iostream>
#include<cstring>
using namespace std;
void readMatrix(int a[][10],int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>a[i][j];
		}
	}
}
// print matrix
void printMatrix(int a[][10],int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
//wave print
void wave(int a[][10],int R,int C){
	// we need to itterate over column
	for(int j=0;j<C;j++){
		// odd column
		if(j&1){
			for(int i=R-1;i>=0;i--){
				cout<<a[i][j]<<" ";
			}
		}
		// even column
		else{
			for(int i=0;i<R;i++){
				cout<<a[i][j]<<" ";
			}
		}
	}
}
int main(){
	
	int arr[10][10];
	int R,C;
	cin>>R>>C;
	// read a matrix
	readMatrix(arr,R,C);
	// print a matrix
	printMatrix(arr,R,C);
	//print in wave form
	wave(arr,R,C);
	return 0;
}
