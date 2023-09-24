#include<iostream>
#include<cstring>
using namespace std;
void readArray(int a[][10],int R,int C){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>> a[i][j];
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
void searchNumber(int a[][10],int R,int C,int key){
	int i=0,j=C-1;
	while(i<R&&j>=0){
		if(a[i][j]==key){
			cout<<"Position of key: "<<i<<" "<<j;
			break;
		}
		else{
			if(a[i][j]>key){
				j--;
			}
			else{
				i++;
			}
		}
	//cout<<"Key not found!";			
	}
	//cout<<"key not found!";
	return ;
}
int main(){
	int R,C;
	cin>>R>>C;
	int a[10][10];
	// read array
	readArray(a,R,C);
	// print array
	printArray(a,R,C);
	// search number
	int key;
	cout<<"Enter the key!";
	cin>>key;
	searchNumber(a,R,C,key);
}
