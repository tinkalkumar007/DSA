#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int j=0;j<t;j++){
		if(a[j]%2){
			for(int i=0;i<a[j];i++){
				if(i%2){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			cout<<endl;
		}
		else{
			for(int i=0;i<a[j];i++){
				if(i==0||i==a[j]-1){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
	    	}
	    	cout<<endl;
	    }
	}
	return 0;
}
