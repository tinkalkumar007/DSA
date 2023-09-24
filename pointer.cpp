#include<iostream>
using namespace std;
int main(){
	int x=10;
	int* xptr=&x;
	cout<< &x <<endl;
	cout<< xptr <<endl;
	
	cout<< *(&x) <<endl;
	cout<< *(xptr) <<endl;
	
	cout<< *(&xptr) <<endl;
	cout<< &(*xptr) <<endl;
	// garbage value
	cout<< &xptr <<endl;
	// double pointer
	int **xxptr= &xptr;
	cout<< xxptr <<endl;
	
	
	
}
