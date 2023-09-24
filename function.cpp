#include<iostream>
using namespace std;
//void myfunction();
int myfunction(int x){
	if(x>1){
		return x*myfunction(x-1);			
	}
	else{
		//return 0;		
	}
	//return 0;
}
int main(){
	int x;
	cin>> x;
	int y = myfunction(x);
	cout<< y <<endl;
	return 0;
	
}

