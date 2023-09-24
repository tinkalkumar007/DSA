#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char s1[4][100]={"Mango","Apple","Banana","Guava"};
	cout<<"Enter string to compare: ";
	string s2;
	cin>>s2;
	int n;
	for(int i=0;i<4;i++){
		//int k=strcmp(s2[5],s2[i]);
		if(s1[i]==s2){
		    cout<<"found at Index: "<<i<<endl;
		    break;
		}
		n=i;
    }
	//int i;
	//cout<<n<<endl;
	if(n==3){	
	    cout<<"Not found!"<<endl;
    }
	return 0;
}
