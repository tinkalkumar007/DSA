#include<iostream>
using namespace std;
// vertical arrangement
int tilesNo(int n){
	//base case
	if(n==0){
		return 0;
    }
	int f1=1+tilesNo(n-1);
	return f1;
}
// horizontal arrangement
int horizontalTile(int n){
	// base case
	if(n-4<3){
		return tilesNo(n-3);
	}
	int f2=1+horizontalTile(n-4);
	
	return f2;
}
int main(){
	int N;
	cout<<"Enter value of N in 4xN: ";
	cin>>N;
	cout<<tilesNo(N)+horizontalTile(N);
	
	return 0;
}
