#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x=10;
	int k=12;
	cout<< &x <<endl;
	float y=1.2;
	cout<< &y <<endl;
	// it doesn't work for charcter variables
	char ch ='B';
	// explicite typecasting from char* to void*
	cout<<(void *) &ch <<endl;
	int *xptr;
	// storing the address in pointer
	xptr=&x;
	cout<<&x<<endl;
	cout<<xptr<<endl;
	// re-assigning the address to pointer
	xptr=&k;
	cout<<xptr<<endl;
	cout<<&k<<endl;
	//cout<<&x<<endl;
	
	return 0;
}
