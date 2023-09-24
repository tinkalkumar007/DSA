#include<iostream>
using namespace std;
int fact(int x){
	int Ans=1;
	for(int i=1;i<=x;i++){
		Ans=Ans*i;
	}
	return Ans;
}
// Find NCR
int main(){
	int n,r;
	cout<< "Put value of n & r!\n";
	cin>>n>>r;
	int y=fact(n)/(fact(r)*fact(n-r));
	cout<< y;
}
/*
int main(){
	int x;
	cout<< "Enter a Number!\n";
	cin>> x;
	int k=fact(x);
	cout<< k;
	
}*/
