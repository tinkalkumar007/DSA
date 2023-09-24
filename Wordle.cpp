#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a[n][2];
	char a2[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		string Hidden=a[i][0];
		string Guess=a[i][1];
		for(int j=0;j<5;j++){
			if(Hidden[j]==Guess[j]){
				a2[j]='G';
			}
			else{
				a2[j]='B';
			}
		}
	    cout<<a2<<endl;
	}
	
	return 0;
}
