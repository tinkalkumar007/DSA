#include<iostream>
using namespace std;
int Compress(int *a,int n){
	int x=n;
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			x--;
		}
	}
	return x;
}
int main(){
	int n,m;
	cin>>n;
	int a2[n]={0};
	for(int i=0;i<n;i++){
		cin>>m;
		int a[m]={0};
		for(int j=0;j<m;j++){
			cin>>a[j];
		}
		int ans=Compress(a,m);
		a2[i]=ans;
	}
	for(int i=0;i<n;i++){
		cout<<a2[i]<<endl;
	}
	return 0;
}
