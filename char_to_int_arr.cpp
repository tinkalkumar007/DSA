#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
void conFunc(char a[]){
	int n=strlen(a);
	if(n==0){
		return;
	}
	conFunc(a+1);
	cout<<typeid(a).name()<<"";
	
}
int main(){
	char str[]="1234";
	conFunc(str);
	
	return 0;
}
