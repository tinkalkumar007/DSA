#include<iostream>
using namespace std;
int main(){	
	int T;
	cin>>T;
	int a1[T]={0};
	int n;
	for(int i=0;i<T;i++){
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		int count=0;
		int x=1;
		for(int x=1;x<n;x+=2){
			if((!(n&1))&&x==n-1){
				if(a[x]!=a[x-1]){
					count+=2;
				}
			}
			else{
				if(a[x-1]==a[x]&&a[x]==a[x+1]){
					count=count;
				}
				if(a[x-1]!=a[x]&&a[x]==a[x+1]){
					count+=2;
				}
				if(a[x-1]==a[x]&&a[x]!=a[x+1]){
					count+=2;
				}
				if(a[x-1]!=a[x]&&a[x]!=a[x+1]){
					count+=3;
				}
			}
		}
		for(int k=2;k<n-1;k+=2){
			if(k==n-1){
				break;
			}
			else if(a[k-1]!=a[k]&&a[k]!=a[k+1]){
				count=count-1;
			}
		}
		a1[i]=count;
	}
	for(int i=0;i<T;i++){
		cout<<a1[i]<<endl;
	}
	return 0;
}
