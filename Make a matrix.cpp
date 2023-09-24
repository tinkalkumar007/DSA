#include<iostream>
using namespace std;
void readMatrix(int a[][10],int R,int C){
	int stRow=0,stCol=0,endRow=R-1,endCol=C-1;
	while(stRow<endRow&&stCol<endCol){
		// condition for print O
		if (stRow&1){
		// print first row
		for(int j=stCol;j<=endCol;j++){
			a[stRow][j]='X';
		}
		stRow++;
		// print last column
		if(endCol>stCol){
		
		for(int i=stRow;i<=endRow;i++){
			a[i][endCol]='X';
		}
		endCol--;
	    }
		// print last row
		if(endRow>stRow){
		for(int j=endCol;j>=stCol;j--){
			a[endRow][j]='X';
		}
		endRow--;
	    }
		// print first column
		for(int i=endRow;i>=stRow;i--){
			a[i][stCol]='X';
		}
		stCol++;
	    }
	    
	    
	    
	    // Condition for print O
	    else{
	    // print first row
		for(int j=stCol;j<=endCol;j++){
			a[stRow][j]='O';
		}
		stRow++;
		// print last column
		if(endCol>stCol){
		
		for(int i=stRow;i<=endRow;i++){
			a[i][endCol]='O';
		}
		endCol--;
	    }
		// print last row
		if(endRow>stRow){
		for(int j=endCol;j>=stCol;j--){
			a[endRow][j]='O';
		}
		endRow--;
	    }
		// print first column
		for(int i=endRow;i>=stRow;i--){
			a[i][stCol]='O';
		}
		stCol++;	
		}
		
	}
	
}
void printMatrix(int a[][10],int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<char(a[i][j])<<" ";
		}
		cout<<endl;
	}	
	
}
int main(){
	int arr[10][10];
	int R;
	cin>>R;
	cin.ignore();
	int C=R;
	//read a matrix!
	readMatrix(arr,R,C);
	// print matrix!
	//int C=R;
	printMatrix(arr,R,C);
	//cout<<arr[1][1]<<endl;
	//cout<<(2&1)<<endl;
	
	return 0;
}
