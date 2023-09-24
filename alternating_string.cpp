#include<iostream>
using namespace std;
int findAlternative(char a[],int n){
	int x0=0,x1=0;
	for(int i=0;i<n;i++){
		if(a[i]=='0'){
			x0++;
		}
		else{
			x1++;
		}
	}
	if(x0==x1){
		return x0+x1;
	}
	else if(x0>x1&&x1>0){
		return (x1*3)-(x1-1);
	}
	else if(x1>x0&&x0>0){
		return (x0*3)-(x0-1);
	}
	return 1;
}
int main(){
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		char a[n];
		cin>>a;
		cout<<findAlternative(a,n)<<endl;
	}
	return 0;
}
