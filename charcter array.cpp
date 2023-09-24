#include<iostream>
using namespace std;
int main(){
	char a[]={'a','b','c','\0'};
	cout<<sizeof(a)<<endl;
	char b[]="hello";
	cout<<sizeof(b)<<endl;
	char c[100];
	//cin>>c;
	// working of getline function.
	//cin.getline(name of charcter array,siz of array,deliminator)
	cin.getline(c,100,',');
	cout<<c<<endl;
	return 0;
}
