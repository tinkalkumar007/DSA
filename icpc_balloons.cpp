#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[i];
		}
		int size=n;
		for(int j=n-1;j>=0;j--){
			if(a[j]<=7){
				break;
			}
			size--;
		}
		cout<<size<<endl;
	}
	return 0;
}
