#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,bool> inStack;
	int n;
	cin>>n;
	int a[300][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int q;
	cin>>q;
	int a1[q];
	int x1,y1,x2,y2;
	for(int i=0;i<q;i++){
		cin>>x1>>y1>>x2>>y2;
		int count=0;
		for(int j=x1-1;j<x2;j++){
			for(int k=y1-1;k<y2;k++){
				int check=a[j][k];
				if(!inStack[check]){
					count++;
					inStack[check]=true;
				}
			}
		}
		a1[i]=count;
		inStack.clear();
	}
	for(int i=0;i<q;i++){
		cout<<a1[i]<<endl;
	}
	
	return 0;
}
