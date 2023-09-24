#include<iostream>
using namespace std;
void subsequences(char *in,char *out,int i,int j){
	//base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//rec case
	// 1. including first char
	out[j]=in[i];
	subsequences(in,out,i+1,j+1);
	//2. excluding first char
	subsequences(in,out,i+1,j);
}


int main(){
	char in[100];
	char out[100];
	cin>>in;
	subsequences(in,out,0,0);
	
	return 0;
}
