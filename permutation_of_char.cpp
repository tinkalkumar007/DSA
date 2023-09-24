#include<iostream>
using namespace std;
void printPermutation(char *in,char *out,int i,int j){
	// base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<",";
		return;
	}
	// rec case
	for(int k=i;in[k]!='\0';k++){
		swap(in[k],in[i]);
		out[j]=in[i];
		printPermutation(in,out,i+1,j+1);
		swap(in[k],in[i]);		
	}
	//printPermutation(in,out,i+1,j+1);
	
}
int main(){
	char in[100];
	char out[100];
	cin>>in;
	printPermutation(in,out,0,0);
	
	return 0;
}
