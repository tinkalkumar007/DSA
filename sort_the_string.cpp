#include<iostream>
using namespace std;
int reverse(char a[],int i){
	int sum=0;
	for(int j=i-1;j>=0;j--){
		if(a[j]=='0'){
			if(i-j>1){
				sum++;
			}
			i=j;
		}
	}
	if(a[0]=='1'){
		sum++;
	}
	return sum;
}
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		char a[n];
		cin>>a;
		int count=0;
		for(int j=n-1;j>=0;j--){		
			if(a[j]=='0'){
				cout<<reverse(a,j)<<endl;
				break;
			}
			count++;
		}
		if(count==n){
			cout<<"0"<<endl;
		}
	}
	return 0;
}
