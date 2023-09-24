#include<iostream>
using namespace std;
/*int func(int a){
	a=a+1;
	cout<<"Inside function: "<<a<<endl;
}*/
// pass by reference using pointer
int func(int *aptr){
	*aptr=*aptr+1;
	cout<<"Inside function: "<<*aptr<<endl;
	
}
int main(){
	int a=10;
	func(&a);
	cout<<"Outside Function: "<<a<<endl;
}
