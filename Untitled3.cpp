#include<iostream>
using namespace std;
int sievePrime(int *a,int n){
	a[0]=a[1]=0;
	a[2]=1;
	for(int i=3;i<=n;i+=2){
		a[i]=1;	
	}
	for(int i=3;i<=n;i+=2){
		
	}
	
}

int main(){
	int a[100]={0};
	int n;
	cin>>n;
	sievePrime(a);
	
	
	return 0;
}
