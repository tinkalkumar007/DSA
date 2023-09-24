#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m,h;
	int a[n]={0};
	for(int i=0;i<n;i++){
		cin>>m>>h;
		int a2[m]={0};
		for(int j=0;j<m;j++){
			cin>>a2[j];
			if(a2[j]>h){
				a[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
