#include<iostream>
using namespace std;
bool genuine(int a[][10],int i,int j,int n){
	int x=i;
	int y=j;
	// check column
	for(int col=i;col>=0;col--){
		if(a[col][j]==1){
			return false;
		}
	}
	// check left diagonal
	while(i>=0&&j>=0){
		if(a[i][j]==1){
			return false;
		}
		i--;
		j--;
	}
	// check right diagonal
	while(x>=0&&y>n){
		if(a[x][y]==1){
			return false;
		}
		x--;
		y++;
	}
	return true;	
}

bool solveNQueen(int a[][10],int i,int n){
	//base case
	if(i==n){
		// we have sucessfully placed all the queens.
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i][j]){
					cout<<"Q ";
				}
				else{
					cout<<"_ ";
				}
			}
			cout<<endl;
		}// if we return false from here then it will print all the possible ways to keep queens
		return true;
	}
	//Recursive case;
	for(int j=0;j<n;j++){
		if(genuine(a,i,j,n)){
			a[i][j]=1;
			// check for next row, is it possible to place queen in next row.
			bool QueenRakhPaye=solveNQueen(a,i+1,n);
			if(QueenRakhPaye){
				return true;
			}
			// Now, this means position of i and j is not correct;
			else{
				a[i][j]=0;
			}
		}
	}// you tried for all the position in row but cann't place;
	return false;	
	
}



int main(){
	int n;
	cin>>n;
	int a[10][10]={0};
	solveNQueen(a,0,n);
	
	
	return 0;
}
