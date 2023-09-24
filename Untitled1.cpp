#include<iostream>
using namespace std;
void func(int k,int n){
	if(k==n){
		return;
	}
	func(k+1,n);
	cout<<k<<",";
	func(k+1,n);
	//cout<<endl;
	return;
}
int main(){
	int n;
	cin>>n;
	func(0,n);
	return 0;
}
