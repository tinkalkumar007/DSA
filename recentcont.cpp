#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n]={0};
	string code[10][1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
		//cout<<a[i];
		for(int j=0;j<a[i];j++){
			cin>>code[i][j];
		}
	}
	for(int i=0;i<n;i++){
		int start=0,time=0;
		for(int j=0;j<a[i];j++){
			if(code[i][j]=="START38"){
				start++;
			}
			else{
				time++;
			}
		}
		cout<<start<<" "<<time<<endl;		
	}
	
	return 0;
}
