#include<iostream>
using namespace std;
bool feedBack(char a[]){
	for(int i=0;a[i]!='\0';i++){
		if(a[i]=='1'){
			if(a[i+1]=='0'&&a[i+2]=='1'){
				return true;
			}
		}
		else if(a[i]=='0'){
			if(a[i+1]=='1'&&a[i+2]=='0'){
				return true;
			}
		}
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	char a[10^5];
	for(int i=0;i<t;i++){
		cin>>a;
		if(feedBack(a)){
			cout<<"Good"<<endl;
		}
		else{
			cout<<"Bad"<<endl;
		}
	}
	
	return 0;
}
