#include<iostream>
using namespace std;
void initArray(int a[][10],int R,int C){
	int value=1;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			a[i][j]=value++;
		}
	}
}
void printArray(int a[][10],int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void spiralArray(int a[][10],int R,int C){
	int i=0,stRow=0,stColumn=0,endColumn=C-1,endRow=R-1;
	while(stRow<=endRow&&stColumn<=endColumn){
	//print start row
	for(int j=stColumn;j<=endColumn;j++){
		cout<<a[stRow][j]<<" ";
	}
	stRow++;
	
	// print end column
	for(int i=stRow;i<=endRow;i++){
		cout<<a[i][endColumn]<<" ";
	}
	endColumn--;
	
	// print end row
	if(endRow>stRow){
	
	for(int j=endColumn;j>=stColumn;j--){
		cout<<a[endRow][j]<<" ";
	}
	endRow--;
    }
	//print start column
	if(endColumn>stColumn){
	
	for(int i=endRow;i>=stRow;i--){
		cout<<a[i][stColumn]<<" ";
	}
	stColumn++;
    }
    }
}
int main(){
	int R,C;
	cin>>R>>C;
	int arr[10][10];
	// init array
	initArray(arr,R,C);
	// Print array
	printArray(arr,R,C);
	//spiral array
	spiralArray(arr,R,C);
}
