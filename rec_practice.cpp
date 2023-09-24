#include<iostream>
using namespace std;
void print(int n){
	if(n==0){
		return;
	}
	if(n<0){
		return;
	}
	print(n-1);
	cout<<n<<" ";
	print(n-2);
	return;
}
int main(){
	int n;
	cin>>n;
	print(n);
	
	
	return 0;
}
