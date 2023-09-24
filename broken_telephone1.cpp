#include<iostream>
using namespace std;
int brokenPhone(int a[],int n){
	int visited[n]={};
	int player=0;
	for(int i=0;i<n-1;i++){
		if(a[i]!=a[i+1]&&visited[i]==0){
			player+=2;
			visited[i+1]=1;
		}
		if(a[i]!=a[i+1]&&visited[i]==1){
			player++;
			visited[i+1]=1;
		}
	}
	return player;
}
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		cout<<brokenPhone(a,n)<<endl;
	}
	return 0;
}
