#include<iostream>
using namespace std;
void findNumber(int a[][10],int R,int C,int k){
	int l=R/2;
	int m=C/2;
	int left=0;
	int right=0;
	if(a[l][m]==k){
		cout<<l<<" "<<m;
	}
	else{
		if(a[l][m]>k){
			for(int i=l;i>=0;i--){
				for(int j=m;j>=0;j--){
					if(a[i][j]==k){
						left=i;
						right=j;
						break ;
					}
				}
			}
		}
		else{
			for(int i=l;i<R;i++){
				for(int j=m;j<C;j++){
					if(a[i][j]==k){
						left=i;
						right=j;
						break ;
					}
				}
			}
		}
	}
	cout<<left<<" "<<right;
}
int main(){
	int arr[10][10];
	int R,C,k;
	cin>>R>>C>>k;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>arr[i][j];
		}
	}
	// find a number
	findNumber(arr,R,C,k);
	
	return 0;
}
