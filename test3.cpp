#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
	char a[100];
	cin>>a;
	int i=0;
	if(a[i]=='9'){
		//cout<<a[i]<<endl;
		i++;
	}
	for( ;a[i]!='\0';i++){
		int digit=a[i]-'0';
		if(digit>=5){
			digit=9-digit;
			a[i]=digit+'0';
		}
	}	
	cout<<a<<endl;
	return 0;
}
