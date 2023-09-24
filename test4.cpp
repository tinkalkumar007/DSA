#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
int main(){
	char str[]="1234\0";
	int s=10;
	double t=10.5;
	char a='B';
	
	cout<<typeid(a).name()<<endl;	
	cout<<2/10<<endl;
	return 0;
}
