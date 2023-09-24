#include<iostream>
using namespace std;
int func(char a[],int x,int y,int n){
	int count =0;
	for(int i=0;i<n;i++){
		if(a[i]=='1'){
			count++;
		}
	}
	if(count==n){
		return 0;
	}
	count=0;
	for(int i=0;i<n;i++){
		if(a[i]=='0'){
			count++;
		}
	}
	if(count==n){
		return 0;
	}
	return min(x,y);
}
int main(){
	char a[1000];
	int t,n;
	int x,y;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>x>>y;
		cin>>a;
		cout<<func(a,x,y,n);	
	}
	return 0;
}
