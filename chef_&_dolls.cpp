#include<iostream>
using namespace std;
int main(){
	int t,n,m;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>n;
		int k;
		cin>>k;
		for(int j=1;j<n;j++){
			cin>>m;
			k=k^m;
		}
		a[i]=k;
	}
	for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
