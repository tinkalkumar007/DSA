#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n]={};
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int goodNo=1;
		for(int i=0;i<n;i++){
			int no=a[i];
			for(int j=i-5;j<i;j++){
				if(no>a[j]){
					no=a[j];
				}
				if(no==a[j]){
					no++;
				}
			}
			if(no==a[i]){
				goodNo++;
			}
		}
		cout<<goodNo<<endl;	
	}
	return 0;
}
