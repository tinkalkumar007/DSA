#include<iostream>
using namespace std;
bool ratInmaze(char a[][10],int i,int j, int m, int n){
	// base case
	if(i==m-1&&j==n-1){
		// Be sucessfully find the path
		a[i][j]='1';
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(i>m-1||j>>n-1){
		return false;
	}
	if(a[i][j]=='x'){
		return false;
	}
	a[i][j]='1';
	// Recurive case
	bool rightSuccess=ratInmaze(a,i,j+1,m,n);
	bool downSuccess=ratInmaze(a,i+1,j,m,n);
	// BackTracking
	a[i][j]='0';
	if(rightSuccess||downSuccess){
		return true;
	}
	return false;
	
}


int main(){
	int m,n;
	cin>>m>>n;
	char a[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	ratInmaze(a,0,0,m,n);
	return 0;
}
