#include<iostream>
using namespace std;
bool Insort(int *a,int n){
	if (n==1){
		return true;
	}
	if(a[0]<a[1]&&Insort(a+1,n-1)){
		return true;
	}
	return false;
	
}
int main(){
	int a[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(Insort(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not sorted"<<endl;
	}
}
