#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
	return a>b;
}
int main(){
	int a[]={1,2,5,3,4,8,6};
	int n=sizeof(a)/sizeof(int);
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
