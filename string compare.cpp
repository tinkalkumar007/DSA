#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	string s1[5]={"Mango","Apple","Papaya","Orange","Guava"};
	cout<<"Enter fruit to search: ";
	string s2;
	cin>>s2;
	for(int i=0;i<5;i++){
	    cout<<s1[i]<<" ";
	}
	
	return 0;
}
