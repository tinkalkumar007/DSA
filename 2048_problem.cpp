#include<iostream>
#include<cstring>
using namespace std;
char a[][100]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void func(int n){
	
	//base case
	if(n==0){
		return;
	}
	func(n/10);
	cout<<a[n%10]<<" ";
	
}
int main(){
	int n;
	cin>>n;
	func(n);
	
	return 0;
}
