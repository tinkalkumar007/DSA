#include<iostream>
using namespace std;
int multiFunc(int a,int b){
	if(b==0){
		return 0;
	}
	if(b<0){
		b=(-b);
		a=(-a);
	}
	if(a<0&&b<0){
		b=(-b);
		a=(-a);
	}
	return a+multiFunc(a,b-1);
	
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<multiFunc(a,b);
	
	return 0;
}
